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

    void insertAthead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtIdx(int val, int idx){
        if(idx==0) insertAtend(val);
        else if(idx == size) insertAthead(val);
        else if(idx<0 || idx>size){
            cout<<"invalid index"<<endl;
        }
        else{
            Node* temp = head;
            Node* x = new Node(val);
            for(int i = 1;i<idx;i++){
                temp = temp->next;
                x->next=temp->next;
                temp->next = x;
                size++;
            }
        }
    }
    
    void deleteHead(){
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
    }


    void deleteTail(){
        deleteAtIdx(size-1);
    }


    void deleteAtIdx(int idx) {
        if (idx == 0){
            deleteHead();
            return;
        }
        else if (idx >= size){
            cout<<"\nOops! Invalid Index Entered!\n";
            return;
        }
        else {
            Node *temp1 = head, *temp2 = nullptr;
            for (int i = 0; idx > i; i++) {
                temp2 = temp1;
                temp1 = temp1->next;
            }
            temp2->next = temp1->next;
            delete temp1;
            size--;
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
    cout<<endl;
    ll.insertAtIdx(40,2);
    ll.display();
    cout<<ll.size;
    cout<<endl;
    ll.deleteAtIdx(3);
    ll.display();

    return 0;
}