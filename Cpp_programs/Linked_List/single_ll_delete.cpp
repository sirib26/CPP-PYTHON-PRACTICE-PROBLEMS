#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    //destructor
    ~Node(){
        int val = this->data;
        while(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout << "memory is freed for: "<<val<<endl;
    }

};

void insertAtBeg(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head=temp;
}

void print(Node* &head){
    Node* curr = head;
    while(curr!=NULL){
        cout<< curr->data <<" ";
        curr = curr->next;
    }
    cout<<endl;
}

void delAtPos(Node* &head,Node* &tail, int pos){

    //deleting first node
    if(pos == 1){
        Node* temp = head;
        head = head->next;

        if(head==NULL){
            tail=NULL;
        }
        //memory free
        temp->next = NULL;
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

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main(){

    Node* node1 = new Node(3);
    Node* head = node1;
    Node* tail = node1;

    insertAtBeg(head,2);
    print(head);

    insertAtBeg(head,1);
    print(head);

    delAtPos(head,tail,2);
    print(head);

    return 0;
}