#include<iostream>
#include<cstring>
using namespace std;
int top = -1;
char stack[100];
char stack2[100];  // for storing reverse string in stack

void push(char item,int len)
{
    if(top>=len)
        cout<<"\nStack is overflow";
    else
    {
        top++;
        stack[top]=item;
        cout<<"\n"<<item<<" is pushed into stack";
    }
}
char pop()
{
    char val;
    if(top==-1)
    {
        cout<<"\nStack is empty";
        return 0;
    }
    else
    {
        val = stack[top];
        top--;
        cout<<"\n"<<val<<" is removed from stack";
        return val;
    }
}
int main()
{
    int i,len;
    char str[100];
    cout<<"\nEnter a string : ";
    cout<<"\n============================================\n";
    cin>>str;
    len = strlen(str);
    cout<<"\n============================================\n";
    for(i = 0; i<len; i++)
    {
        push(str[i],len);
    }
    cout<<"\n============================================\n";
    for(i=0; top!=-1 ; i++)//also use i < len condition.
    {
        stack2[i] = pop();
    }
    cout<<"\n============================================";
    cout<<"\n\nReverse string is : "<<stack2;
    cout<<"\n============================================";
    return 0;
}
