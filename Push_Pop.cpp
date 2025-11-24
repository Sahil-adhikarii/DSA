#include <iostream>
using namespace std;
class Stack{

    int top = 0;
    int numbers[6];


public:
    bool isFull()
    {
        return top == sizeof(numbers)/ sizeof(numbers[0]);
    }
    bool isEmpty(){
        return top == 0;
    }

    void push(int data)
    {
         if(isFull())
        {
           cout<<"Stack is full Now, Can't insert "<< data <<endl;
        }
        else{
             numbers[top] = data;
            top = top +1;
        }
    }

    void peek(){
        cout<<numbers[top -1]<<endl;
    }

    int pop()
    {
        int data;
        // TODO: remove element from top of stack decrement top
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
        }    
        else{
            data = numbers[top-1];
            numbers[top-1] = 0;
            top--;
            // cout<<"poped one element, now you can add "<<sizeof(numbers)/sizeof(numbers[0]) - top<< " elements"<<endl;
            return  data;
        }
        
        
        // TODO: create new method isEmpty to check if stack is empty

    }


    void print() {
        for (int i = 0; i < sizeof(numbers)/ sizeof(numbers[0]); i++)
        {
         cout<<"numbers["<<i<<"]: "<<numbers[i]<<endl;
        }
    }

};

int main(){
    Stack stack;
    stack.push(2);
    stack.push(3);
    stack.peek();
    cout<<stack.pop()<<endl;
    stack.peek();
    stack.pop();
    cout<<stack.isEmpty()<<endl;
    cout<<stack.isFull()<<endl;

    return 0;


    
    

}
