#include <iostream>

using namespace std;

struct node{
    int data;
    struct node *next;
};

node* push(node *head,int data){
    node *temp = (node *)malloc(sizeof(node));
    temp->next = head;
    temp->data = data;
    head = temp;
    return head;
}

node* pop(node *head){
    node *temp = head->next;
    free(head);
    head = temp;
    return head;
}


void display(node* head){
    while (head != NULL)
    {
        cout<<endl;
        cout<<head->data<<endl;
        head = head->next;
    }
    
}

int main()
{
    node *head = new node;
    int ch=0,d;
    cout<<"Enter data for first element :";
    cin>>d;
    head->data = d;
    head->next = NULL;

    do
    {
        cout<<"\n1. Insert Element";
        cout<<"\n2. Delete Last Element";
        cout<<"\n3. Print Stack";
        cout<<"\n4. Exit";
        cout<<"\nChoice : ";
        cin>>ch;
    
        switch (ch)
        {
        case 1:
            cout<<"\nEnter data for insertion : ";
            cin>>d;
            head = push(head,d);
            break;
        case 2:
            head = pop(head);
            break;
        case 3:
            display(head);
            break;
        case 4:
            exit(0);
            break;
        
        default:
            break;
        }
    } while (ch !=4);
    return 0;
}
