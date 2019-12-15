#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define maxs 5
using namespace std;
int top=-1;
int s[maxs];

void push()
{
    cout<<"\n============";
    cout<<"\nPUSH";
    cout<<"\n============";
    cout<<"\t\t\t top :="<<top;
    int val;
    if(top>=maxs-1)   // Because stack index start with zero.
    {
        cout<<"\nstack is overflow";
    }
    else
    {
        cout<<"\nEnter element \n";
        cin>>val;
        top++;
        s[top]=val;

    }
    cout<<"\t\t\t top :="<<top;
}

void pop()
{
    cout<<"\n============";
    cout<<"\nPOP";
    cout<<"\n============";
    cout<<"\t\t\t top :="<<top;
    int val;
    if(top==-1)
    {
        cout<<"\nstack is empty";
    }
    else
    {
        val= s[top];
        top--;
        cout<<endl;
        cout<<val<<" is removed";
    }
    cout<<"\t\t\t top :="<<top;
}
void display()
{
    cout<<"\n============";
    cout<<"\nDISPLAY";
    cout<<"\n============";
    cout<<"\t\t\t top :="<<top;
    if(top==-1)
    {
        cout<<"\nstack is empty";
    }
    else
    {
        cout<<endl;
        /*other way to display
         top2 = top;
         while(top!=-1)
         {
             cout<<" "<<s[top];
             top--;
         }
         top = top2;
         */
        for(int i = top; i!=-1; i--)
        {
            cout<<" "<<s[i];
        }
    }
    cout<<"\t\t\t top :="<<top;
}
int main()
{
    while(1)
    {
        int ch;
        cout<<"\n=======================================================================";
        cout<<"\n(1) PUSH"<<endl <<"(2) POP"<<endl<<"(3) DISPLAY"<<endl<<"(4) EXIT";
        cout<<"\n=======================================================================";
        cout<<"\nEnter your choice: \n";
        cin>>ch;
        switch(ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        }
    }
}
