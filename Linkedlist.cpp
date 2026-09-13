 // # Basic Syntax
#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
int main(){
    Node a(20);
    Node b(30);
    Node c(40);
    Node d(50);
    a.next=&b;
    b.next=&c;
    c.next=&d;
    cout<<(a.next)->val;
    (a.next)->val=100;
        cout<<(a.next)->val;
}

 //  acess the value of d with the help of a
#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
int main(){
    Node a(20);
    Node b(30);
    Node c(40);
    Node d(50);
    a.next=&b;
    b.next=&c;
    c.next=&d;
    cout<<(a.next)->val;
    cout<<endl;
    (a.next)->val=100;
    cout<<(((a.next)->next)->next)->val; // acessing the value of d;
    // cout<<(a.next)->val;
}
