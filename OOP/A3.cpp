/*
Imagine a publishing company which does marketing for book and audio cassette versions. Create a class publicatio
n that stores the title (a string) and price (type float) of publications. From this class derive two classes: book which a
dds a page count (type int) and tape which adds a playing time in minutes (type float). Write a program that instantia
tes the book and tape class, allows user to enter data and displays the data members. If an exception is caught, replace 
all the data member values with zero values.
*/
#include <iostream>
using namespace std;
class publications
{
public:
    char title[40];
    int pri;
    virtual void read()
    {
        cout << "\nEnter Title of the Book : ";
        cin >> title;
        cout << "\nEnter Price : ";
        cin >> pri;
    }
    virtual void show()
    {
        cout << "\nTitle : " << title << endl;
        cout << "\nPrice : " << pri << endl;
    }
};
class book : public publications
{
public:
    int pagecount;
    void read()
    {
        cout << "\nEnter Number of pages : ";
        cin >> pagecount;
    }
    void show()
    {
        cout << "\nNumber of pages : " << pagecount;
    }
};
class tape : public publications
{
public:
    float min;
    void read()
    {
        cout << "\n\nEnter playing time : ";
        cin >> min;
    }
    void show()
    {
        cout << "\nPlaying time of tape : " << min << " min" << endl;
    }
};
int main()
{
    publications *ptr;
    publications obj;
    book b;
    tape t;
    obj.read();
    obj.show();
    ptr = &b;
    ptr->read();
    ptr->show();
    ptr = &t;
    ptr->read();
    ptr->show();
    return 0;
}