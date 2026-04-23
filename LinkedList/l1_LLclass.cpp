#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;

    LinkedList(){
        head = tail = NULL;
        size = 0;
    }

    void insertAtend(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    
    void display(){
        Node* temp = head;
        while(temp!= NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
    }

};
int main(){
    LinkedList ll;
    ll.insertAtend(10);
    ll.insertAtend(20);
    ll.insertAtend(30);
    ll.display();
    cout<<endl;
    cout<<ll.size;

    return 0;
}