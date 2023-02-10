#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int data){
        this->data=data;
        next=NULL;



    }
    void p(node *&head){
        while(head!=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }
    }
};



int main(){

node n1(12);
node n2(23);
node n3(35);
node n4(45);

n1.next=&n2;
n2.next=&n3;
n3.next=&n4;

node *head=&n1;

n1.p(head);

return 0;
}