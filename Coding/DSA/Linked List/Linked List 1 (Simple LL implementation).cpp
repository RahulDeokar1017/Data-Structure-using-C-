#include<iostream>
using namespace std;
class node{

    public:

    int data;
    node *next;


    node(int data){

this->data=data;
next=NULL;

    }
    


};

int main(){
    node n1(12);
    node n2(23);
    node n3(35);

    n1.next=&n2;
    n2.next=&n3;

cout<<n1.data<<endl<<n2.data<<endl<<n3.data;

}