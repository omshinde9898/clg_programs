#include <iostream>

using namespace std;

/*
Department of Computer Engineering has student's club named 'Pinnacle Club'. Students
of second, third and final year of department can be granted membership on request.
Similarly one may cancel the membership of club. First node is reserved for president of
club and last node is reserved for secretary of club. Write C++ program to maintain club
member‘s information using singly linked list. Store student PRN and Name. Write
functions to:
a) Add and delete the members as well as president or even secretary.
b) Compute total number of members of club
c) Display members
d) Two linked lists exists for two divisions. Concatenate two lists.

*/

struct member
{
    int prn;
    char name[20];
    member *next;
};

class club
{
    member* president = new member;
    member* secretary = new member;
    

    public:
    
        void add_member();
        void delete_member();
        void change_president();
        void change_secretary();
        void display();
        club (){
            cout<<"enter name of president: ";
            cin>>president->name;
            cout<<"enter prn of president: ";
            cin>>president->prn;
            cout<<"enter name of secretary: ";
            cin>>secretary->name;
            cout<<"enter prn of secretary: ";
            cin>>secretary->prn;
            secretary->next=NULL;
            president->next=secretary;
        }
};

void club::display()
{
   member* head=president;
   cout<<"\n-------------------------------------------------------------------------"<<endl;
   while(head!=NULL)        
   {
    cout<<"name: "<<head->name<<endl;
    cout<<"prn: "<<head->prn<<endl;
    head=head->next;
   }
    cout<<"\n-------------------------------------------------------------------------"<<endl;
}

void club::add_member()
{   
   member* head = president;
   while (head->next->next!=NULL)
   {
    head=head->next;
   }
   member* temp = new member;
   head->next=temp;
   temp->next=secretary;
   cout<<("\t name: ");
   cin>>temp->name;
   cout<<("\t prn: ");
   cin>>temp->prn;
   
}

int main(){
    club divb;
    int ch;
    do{
        cout<<"1 - display member";
        cout<<"\n2 - add member";
        cout<<"\n3 - delete member";
        cout<<"\n4 - change secretary";
        cout<<"\n5 - change president";
        cout<<"\n6 - exit";
        cout<<"\nenter your choice: ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            divb.display();
            break;
        case 2:{
           cout<<"how many members to add";
           int m;
           cin>>m;
           for(int i=0;i<m;i++)
           {
            divb.add_member();
           }
            break;
                }
        case 3:
            //divb.delete_member();
            break;
        case 4:
            //divb.change_secretary();
            break;
        case 5:
            //divb.change_president();
        break;
         }
    }
    while(ch!=6);
    return 0;
}

