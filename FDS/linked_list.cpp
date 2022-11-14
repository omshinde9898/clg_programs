#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node  *next;
};

void print_list(node* head){
    cout<<"\n------------------------------------";
    while(head != NULL)
    {
        cout<<"\ndata : "<<head->data;
        head = head->next;
    }
    cout<<"\n------------------------------------";
}

void add_node(node* head,int d){
    node* temp = head;
    while(head->next != NULL)
    {
        head = head->next;
    }
    
    node* new_node = new node;
    new_node->data = d;
    new_node->next = NULL;
    head->next = new_node;
    head = temp;
}

void delete_(node* head,int el){
    // TODO : delete function 
}

int main()
{
    int ch,d,l,el;
    node* head = new node;
    do
    {
        cout<<"\n1. Create New List";
        cout<<"\n2. Insert Element";
        cout<<"\n3. Delete Element";
        cout<<"\n4. Print List";
        cout<<"\n5. Exit";
        cout<<"\nChoice : ";
        cin>>ch;    
    
        switch (ch)
        {
        case 1:
            {
                cout<<"Enter Length of list : ";
                cin>>l;
                cout<<"\nEnter data for 1st element : ";
                cin>>d;
                head->data = d;
                head->next = NULL;
                for(int i=1;i<l;i++){
                    cout<<"\nEnter data for "<<i+1<<" element : ";
                    cin>>d;
                    add_node(head,d);
                }
            }
            break;
        case 2:
            cout<<"\nEnter data for element : ";
            cin>>d;
            add_node(head,d);
            break;
        case 3:
            cout<<"Element to delete : ";
            cin>>el;
            delete_(head,el);
            break;
        case 4:
            print_list(head);
            break;
        case 5:
            /* code */
            break;
        
        default:
            break;
        }
    } while (ch !=5);
    
    return 0;
}
