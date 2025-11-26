#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
};
class linked_list{
    public:
    node*head=NULL;
    // node*tail=NULL;

    void Insert_at_Begining(int data){
        node *n= new node;
        n->data =data;
        n->next=NULL;

        if(head==NULL){
            head=n;
        }
        else{
            n->next=head;
            head=n;
        }

    }
   void Insert_at_Tail(int data) {
        node* n = new node;
        n->data = data;
        n->next = NULL;

        if (head == NULL) {
            head = n;
            return;
        }
        node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = n;  
    }


    void insert_at_position( int data,int position){
    node* n=new node;
    n->data=data;
    n->next=NULL;


    node* temp=head;
   int i=0;
   while (i < position-1)
   {
        if(temp==NULL){
            cout<<"Position out of bounds"<<endl;
            delete n;
            return;
        }
        temp=temp->next;
        i++;
    }

    n->next=temp->next;
    temp->next=n;
}


       void delete_at_head(){
        if(head == NULL){
            cout<<"head is empty"<<endl;
            return;
        }
        else{
            node *temp = head;
            head=head->next;
            delete temp;
        }
    }
void delete_at_tail(){
        if(head == NULL){
            cout << "List is empty\n";
            return;
        }

        node *temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data << "->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
    linked_list l;
    l.Insert_at_Begining(10);
    l.Insert_at_Begining(20);
    l.Insert_at_Begining(30);

    l.Insert_at_Tail(11);
    l.Insert_at_Tail(12);
    l.Insert_at_Tail(13);
    l.Insert_at_Tail(14);
    
    l.insert_at_position(15, 2);
    

    // l.delete_at_head();
    // l.delete_at_head();
    // l.delete_at_head();
    // l.delete_at_head();
    // l.delete_at_head();

    // l.delete_at_tail();    
    // l.delete_at_tail();    
    // l.delete_at_tail();    
    // l.delete_at_tail();    

    l.display();
}
