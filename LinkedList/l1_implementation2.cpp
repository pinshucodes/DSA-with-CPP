#include<iostream>
using namespace std;

// constructing the linked list node class

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

// printing the value of linked list by using function
// time complexity will be O(n)
// space complexity will be O(1)

void display(Node* Head){
    Node* temp=Head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

// printing the value of linked list by using recursion
// time complexity will be O(n)
// space complexity will be O(n)--> hence iterative approach is much efficient.

void display2(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    display2(head->next);
}

int main(){
    Node* a= new Node(10);
    Node* b= new Node(20);
    Node* c= new Node(30);
    Node* d= new Node(40);

// linking the nodes of LL

    a->next=b;
    b->next=c;
    c->next=d;

// printing the values of linked list

    // Node* temp=a;
    // while(temp!=NULL){
    //     cout<<temp->val<<" ";
    //     temp= temp->next;
    // }

    display(a);
    display2(a);

    return 0;
}