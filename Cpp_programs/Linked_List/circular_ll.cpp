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

void insertNode(Node* &tail, int ele, int data){
    
    Node* temp = new Node(data);

    if(tail == NULL){
        tail = temp;
        temp->next = temp;
    }
    else{
        //non empty list
        //assuming that the element is present in the list

        Node* curr = tail;
        while(curr->data != ele){
            curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* tail){
    Node* temp = tail;

    do{
        cout<< temp->data <<" ";
        temp = temp->next;
    }while(tail != temp);
    cout<<endl;
}

void deleteNode(Node* tail, int val){
    
    if(tail == NULL){
        cout<<"empty"<<endl;
        return;
    }
    else{

        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != val){
            prev=curr;
            curr=curr->next;
        }
        prev->next = curr->next;
        if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

int main(){

    
    Node* tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 2);
    print(tail);

    insertNode(tail, 2, 22);
    print(tail);
    
    insertNode(tail, 5, 55);
    print(tail);

    deleteNode(tail, 55);
    print(tail);

    deleteNode(tail, 3);
    print(tail);

    return 0;
    
}