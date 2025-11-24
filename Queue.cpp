#include<iostream>
using namespace std;

int n[6],f=0,r=0;

class queue{
    public:

    bool isFull(){
        if(r == sizeof(n)/sizeof(n[0])){
            return true;
        }else{
            return false;
        }
    }

    bool isEmpty(){
        if(r==f){
            f = 0;
            r = 0;
            return true;
        }
        else{
            return false;
        }
    }

    int deque(){
        if(isEmpty()){
            cout<<"Q is Empty"<<endl;
            return 0;
        }
        else{
        int prev = n[f];
        n[f] = 0;
        f++;
        return prev;
        }
        

    }

    int inque(int data){
        if(isFull()){
            cout<<"q is full"<<endl;
        }
        else{
            n[r] = data;
            r++;
        }
        
    }

    void show(){
        int i;
        for(i=0;i<sizeof(n)/sizeof(n[0]);i++){
            cout<<"n["<<i<<"]: "<<n[i]<<endl;
        }
    }


};

int main(){
    queue q;
    q.inque(3);
    q.inque(4);
    q.inque(5);
    q.inque(6);
    q.show();
   
    cout<<q.deque()<<endl;
    cout<<q.deque()<<endl;
    cout<<q.deque()<<endl;
    cout<<q.deque()<<endl;
    cout<<q.deque()<<endl;
    cout<<q.deque()<<endl;
    q.show();
    
    return 0;
}