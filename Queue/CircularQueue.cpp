//Circular Queue

#include <iostream>
#include <string>
using namespace std;

class Ashish
{
private:
    int a[5];
    int front = -1;
    int rear = -1;

public:
    int isFull()
    {
       if(front==(rear+1)%((sizeof(a)/sizeof(a[0])))){
           return 1;
       }
       return 0;
    }

    int isEmpty()
    {
        if (rear == -1 && front == -1)
        {
            return 1;
        }
        return 0;
    }
    void enqueue(int data)
    {
        if (isEmpty())
        {
            rear = front = 0;
            a[rear] = data;

            return;
        }

        if (isFull())
        {
            cout << "Cant insert Queue is full" << endl; // Overflow Condition
            return;
        }

        rear = ((rear + 1) % ((sizeof(a) / sizeof(a[0]))));
        a[rear] = data;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty " << endl; // UnderFlow COndition
            return;
        }
        if (front == rear)
        {
            cout << "Dequeued Data :" << a[front] << endl;
            rear = front = -1;
            return;
        }
        cout << "Dequeued Data " << a[front]<<endl;
        front = ((front + 1) % ((sizeof(a) / sizeof(a[0]))));
        
        return;
    }
};

int main()
{
    Ashish a1;

    a1.enqueue(1);
    a1.enqueue(2);
    a1.enqueue(3);
    a1.enqueue(4);
    a1.enqueue(5);
    a1.dequeue();
    a1.dequeue();
    a1.dequeue();
    a1.enqueue(6);
    a1.enqueue(7);
    a1.enqueue(8);

    a1.dequeue();
    a1.dequeue();
    a1.dequeue();
    a1.dequeue();
    a1.dequeue();
    a1.dequeue();
    return 0;
} // Linear Queue

