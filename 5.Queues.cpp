
#include <iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;


void enqueue(int value)
{
    if (rear == SIZE - 1)
    {
        cout << "Queue is full!" << endl;
    }
    else
    {
        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = value;

        cout << value << " inserted into queue." << endl;
    }
}


void dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is empty!" << endl;
    }
    else
    {
        cout << queue[front] << " removed from queue." << endl;
        front++;

        if (front > rear)
        {
            front = rear = -1;
        }
    }
}


void display()
{
    if (front == -1)
    {
        cout << "Queue is empty!" << endl;
    }
    else
    {
        cout << "Queue elements: ";

        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }

        cout << endl;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();

    display();

    return 0;
}
