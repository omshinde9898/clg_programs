\


/*
A palindrome is a string of character that‘s the same forward and backward. Typically, 
punctuation, capitalization, and spaces are ignored. For example, “Poor Dan is in a droop” 
is a palindrome, as can be seen by examining the characters “poor danisina droop” and 
observing that they are the same forward and backward. One way to check for a 
palindrome is to reverse the characters in the string and then compare with them the 
original-in a palindrome, the sequence will be identical. Write C++ program with 
functions-
a) To print original string followed by reversed string using stack 
b) To check whether given string is palindrome or not
*/

#include <iostream>
using namespace std;
class stack{
    private:
    int s[10];
    int t = -1;

    public:

    void push();
    void pop();
    void isempty();
    void isfull();
    void top();
};
int main()
char* removespace(char* str);
{
    int i=0, j=0;
    while (str [i])
    {
        if (str[i]!= '')
        str[j++]=str[i];
        i++;
    }
    str[j]='\0';
    return str;
}