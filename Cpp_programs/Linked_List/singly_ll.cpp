#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this-> data = data;
        this-> next = NULL;
    }
};

void insertAtBeg(Node* &head, int data){

    Node* node2 = new Node(data);
    node2->next = head;
    head=node2;
}

void insertAtTail(Node* &tail,int data){

    Node* node3 = new Node(data);
    tail->next = node3;
    tail = node3;
}

void insertAtPos(Node* &head, Node* &tail, int data,int pos){

    //insert at beginning
    if(pos==1){
        insertAtBeg(head,data);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt < pos -1){
        temp = temp->next;
        cnt++;
    }

    //inserting at last position
    if(temp->next == NULL){
        insertAtTail(tail,data);
        return;
    }


    Node* node4 = new Node(data);
    node4->next = temp->next;
    temp->next = node4; 
}

void print(Node* &head){
    Node* curr = head;
    while(curr!=NULL){
        cout<< curr->data <<" ";
        curr = curr->next;
    }
    cout<<endl;
}

int main(){

    //create a new node
    Node* node1 = new Node(10);
    cout<< node1->data <<endl;
    cout<< node1->next <<endl;

    //point the new node to head
    Node* head = node1;
    Node* tail = node1;

    insertAtBeg(head,9);
    print(head);


    insertAtTail(tail,13);
    print(head);


    insertAtPos(head,tail,22,4);
    print(head);

    cout<< "Head : " << head->data <<endl;
    cout<< "tail : " << tail->data <<endl;


    return 0;
}