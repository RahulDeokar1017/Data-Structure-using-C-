
#include <iostream>

using namespace std;

class node{
    
    public:
    int data;
    node* next;
    
    
    node(int d){
        data=d;
        next=NULL;
    }

};

void insert_at_head(node*&head,int data){
        
        node *n2=new node(data);
     
        n2->next=head;
        head=n2;
 
}

void insert_at_tail(node*&tail,int data){
    
    node *n3=new node(data);
    
    tail->next=n3;
    tail=n3;
}


void insert_at_any_position(node *&head,int position,int data){
    
    if(position==1){
        
        insert_at_head(head,data);
    }
    
    node*curr=head;
    
    int c=1;
    while(c<position-1){
    
        c++;
        curr=curr->next;
     
    }
  
    node *temp=new node(data);
    
    temp->next=curr->next;
    curr->next=temp;
 
}

void deleting(int position,node *&head){
    
    if(position==1){
        node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
    node *curr=head;
    node *prev=NULL;
    
    int cnt=1;
    
    while(cnt<position){
        
        prev=curr;
        curr= curr->next;
    
        cnt++;
    }
    
    prev->next=curr->next;
   curr->next=NULL;
    
   delete curr;
  
}
}

void print(node *&head){
    
     node *temp=head;
     
     while(temp!=NULL){
         cout<<temp->data<<"->";
         temp=temp->next;
     }
    
    
}

int main()
{
   node *n1=new node(32);
    
    node *head=n1;
    
    node *tail=n1;
    
    
   insert_at_head(head,23);
   
   insert_at_tail(tail,35);
  
   insert_at_head(head,11);
   
  insert_at_any_position(head,3,89);
  
    print(head);
    
    cout<<endl;
    
    deleting(1,head);
    
    print(head);

    return 0;
}
