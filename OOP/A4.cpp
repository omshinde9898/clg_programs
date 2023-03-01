/*
Write a C++ program that creates an output file, writes information to it, closes the file, open it again as an input file
and read the information from the file.
*/
#include <iostream>
#include <fstream>
using namespace std;
class test
{
public:
    void writedata();
    void readdata();
};
void test::writedata()
{
    cout << "\n(End your sentence with '.')";
    cout << "\nEnter data to write in the file : ";
    ofstream fp;
    char ch;
    fp.open("file.txt", ios::out);
    cin >> ch;
    while (ch != '.')
    {
        fp.put(ch);
        cin >> ch;
    }
    fp.close();
}
void test::readdata()
{
    cout << "\nText written in file : ";
    ifstream fp;
    char ch;
    fp.open("file.txt", ios::in);
    ch = fp.get();
    while (!fp.eof())
    {
        cout << ch;
        ch = fp.get();
    }
    fp.close();
}
int main()
{
    test ob;
    int ch;
    do
    {
        cout << "\n\n----------MENU----------";
        cout << "\n\t1: Write\n\t2: Read\n\t3: Exit";
        cout << "\nEnter your choice= ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            ob.writedata();
            break;
        case 2:
            ob.readdata();
            break;
        }
    } while (ch != 3);
}