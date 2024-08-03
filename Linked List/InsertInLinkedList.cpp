// Insert in linked list



#include<bits/stdc++.h>
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
class linkedList{
    public:
        Node* head;
        Node* tail;
        int size = 0;
        linkedList(){
            head = tail = NULL;
            size = 0;
        }

        void insertAtEnd(int val){
            Node* temp = new Node(val);
            if(size == 0) head = tail = temp;
            else{
                tail -> next = temp;
                tail = temp;
            }
            size++;
        }

        void insertAtHead(int val){
            Node* temp = new Node(val);
            if(size == 0) head = tail = temp;
            else{
                temp -> next = head;
                head = temp;
            }
            size++;
        }

        void insertAtAnyIndex(int idx,int val){
            if(idx < 0 || idx > size) cout<<"Invalid"<<endl;

            else if(idx == 0) insertAtHead(val);
            else if(idx == size) insertAtEnd(val);

            else{
                Node* t = new Node(val);
                Node* temp = head;

                for(int i = 1;i <= (size - 1);i++){
                    temp = temp -> next;
                }

                t -> next = temp -> next;
                temp -> next = t;
                size++;
            }
        }

        void display(){
            Node* temp = head;
            while(temp != NULL){
                cout<<temp -> val<<" ";
                temp = temp -> next;
            }
            cout<<endl;
        }
};

int main(){
    linkedList LL;

    LL.insertAtHead(30);
    LL.insertAtHead(70);
    LL.insertAtHead(20);
    LL.insertAtHead(80);
    LL.display();

    LL.insertAtAnyIndex(2,50);
    LL.insertAtAnyIndex(0,30);
    LL.insertAtAnyIndex(4,10);
    LL.display();

    LL.insertAtEnd(32);
    LL.insertAtEnd(42);
    LL.insertAtEnd(62);
    LL.insertAtEnd(27);
    LL.display();
}