#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node(){
        while(this->next != NULL){
            delete next;
            this->next = NULL;
        }
    }
};

void print(Node* &head){
    Node* curr = head;
    while(curr!=NULL){
        cout<< curr->data <<" ";
        curr = curr->next;
    }
    cout<<endl;
}

int getLength(Node* head){

    int len=0;
    Node* curr = head;
    while(curr!=NULL){
        len++;
        curr = curr->next;
    }
    return len;
}

void insertAtBeg(Node* &head,Node* &tail, int data){

    Node* temp = new Node(data);
    if(head == NULL){
        head=temp;
        tail=temp;
    }
    else{
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}

void insertAtTail(Node* &head, Node* &tail, int data){
    Node* temp = new Node(data);
    if(tail == NULL){
        tail=temp;
        head=temp;
    }
    else{
        tail->next = temp;
        temp->prev = tail;
        tail=temp;
    }
}

void insertAtPos(Node* &head ,Node* &tail, int data,int pos){

    //insert at beginning
    if(pos==1){
        insertAtBeg(head,tail,data);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt < pos -1 && temp!=NULL){
        temp = temp->next;
        cnt++;
    }

    //inserting at last position
    if(temp->next == NULL){
        insertAtTail(head,tail,data);
        return;
    }


    Node* node4 = new Node(data);
    node4->next = temp->next;
    temp->next->prev = node4;
    temp->next = node4;
    node4->prev=temp;
}

void delAtPos(Node* &head,Node* &tail, int pos){

    //deleting first node
    if(pos == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;

        if(head==NULL){
            tail=NULL;
        }
        //memory free
        delete temp;
    }

    else{

        //deleting any middle node or last node
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt < pos){
            prev=curr;
            curr=curr->next;
            cnt++;
        }

        //if deleting last node
        if(curr->next == NULL){
            tail=prev;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;

    print(head);

    //cout<<"lenght: "<<getLength(head);

    insertAtBeg(head,tail,11);
    print(head);

    insertAtBeg(head,tail,13);
    print(head);

    insertAtBeg(head,tail,8);
    print(head);

    insertAtTail(head,tail,25);
    print(head);

    insertAtPos(head,tail,100,2);
    print(head);


    delAtPos(head,tail,2);
    print(head);

    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;
    return 0;
}