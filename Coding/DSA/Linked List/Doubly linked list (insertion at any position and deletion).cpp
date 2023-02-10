
#include <iostream>

using namespace std;

class node{
    
    public:
    int data;
    node*prev;
    node* next;
    
    
    node(int d){
        data=d;
        next=NULL;
        prev=NULL;
    }
    

};

void  insert_at_head(node*&head,int data){
      
    node*temp=new node(data);
    head->prev=temp;
    temp->next=head;
    head=temp;
}

void insert_at_tail(node*&tail,int data){
    
    node *temp=new node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
  
    
}


void insert_at_any_position(node *&head,int position,int data){
    
    if(position==1){
        
        insert_at_head(head,data);
    }
    
    else
    {
    
    node*curr=head;
    
    int c=1;
    while(c<position-1){
    
        c++;
        curr=curr->next;
     
    }
  
    node *temp=new node(data);
    
    temp->next=curr->next;
    curr->next->prev=temp;
    curr->next=temp;
    
    }
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
    node *temp=NULL;
    
    int cnt=1;
    
    while(cnt<position){
        
        temp=curr;
        
        curr= curr->next;
    
        cnt++;
    }
    
    temp->next=curr->next;
   curr->next->prev=temp;
   curr->next=NULL;
   curr->prev=NULL;
    
   delete curr;
  
}
}
void print(node *&head)
{
    node*temp=head;
    
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

int main()
{
    node n1(231);
    
    node* head=&n1;
    node *tail=&n1;
    
    insert_at_head(head,12);
    insert_at_head(head,15);
    insert_at_head(head,1);
    
    insert_at_tail(tail,44);
    insert_at_any_position(head,3,89);
  
    print(head);
    cout<<endl;
    
    deleting(1,head);
    
   
    print(head);
    
  

    return 0;
}
