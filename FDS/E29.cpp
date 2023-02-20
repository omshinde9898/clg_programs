/*Queues are frequently used in computer programming and a typical example is the creation of a job queue by an opearting system.
If the operating system does not use priorities,then the jobs are processed in the order they enter the system.
Write c++ program for simulating job queue.Write functions to add job and delete job from queue.*/
#include <iostream>
#define MAX 10
using namespace std;
int queue[MAX], front, rear;
int empty();
int full();
void add();
void del();
void display();
char ans;
//-----------------------------------
int main()
{
    int x;
    front = rear = -1;
    do
    {
        cout << "\n*******MENU*******";
        cout << "\n<1>ADD JOB";
        cout << "\n<2>DELETE JOB";
        cout << "\n<3>DISPLAY JOB DATA";
        cout << "\n<4>EXIT\n";
        cout << "\nENTER YOUR CHOICE:=";
        cin >> x;
        switch (x)
        {
        case 1:
            add();
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        case 4:
            goto lable;
        default:
            cout << " wrong choice!!!";
        }
        cout << "\n\nDo uwant to cntinue MENU[y / n]? ";
                  cin >>ans;
    } while (ans != 'n');
lable:
    return 1;
} 
int full()
{
    if (rear == MAX - 1)
        return (1);
    else
        return (0);
} 
int empty()
{
    if (front > rear || (front == -1 && rear == -1))
        return (1);
    else
        return (0);
} 
void add()
{
    int x;
    do
    {
        if (full() == 1)
            cout << " queue is full";
        else
        {
            if (front = rear == -1)
            {
                front++;
                rear++;
                cout << "\n\nENTER THE JOB DATA:=";
                cin >> x;
                queue[rear] = x;
            }
            else
            {
                rear = rear + 1;
                cout << "\n\nENTER THE JOB DATA:=";
                cin >> x;
                queue[rear] = x;
            }
            cout << "\nDo u want to add more elements[y/n]?:=";
            cin >> ans;
        }
    } while (ans != 'n');
} 
void del()
{
    do
    {
        if (empty() == 1)
            cout << "\nSorry can not delete element as queue is empty";
        else
        {
            cout << "\n\nThe element to be deleted is :";
            cout << queue[front];
            front = front + 1;
        }
        cout << "\n\nDo u want to delete more element[y / n]?: = ";
        cin >>ans;
    } while (ans != 'n');
}
void display()
{
    int i;
    if (empty() == 1)
        cout << "\nQueue is empty";
    else
    {
        cout << "\nThe elements in queue are:=\n";
        for (i = front; i <= rear; i++)
            cout << "\t" << queue[i];
    }
}