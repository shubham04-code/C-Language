#include<stdio.h>
#include<iostream>
using namespace std;

struct node * start = NULL;
struct node 
{
    int info;
    struct node * link;
};
struct node * createnode()
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    return n;
}
void insbeg()
{
    int item;
    struct node * temp = createnode();
    cout<<"Enter element do you want to push ";
    cin>>item;
    temp->info = item;
    temp->link = start;
    start = temp;
}
void insend()
{
    int item;
    struct node * temp = createnode();
    cout<<"Enter element do you want to push ";
    cin>>item;
    temp->info = item; 
    if(start==NULL)         // if no node in list
    {
    temp->link = start;
    start = temp;
    }
    else
    {
    struct node * findlast = start;
    while(findlast->link!=NULL)
    {
        findlast=findlast->link;
    }
    findlast->link = temp;
    temp->link=NULL;
    }
}
void delbeg()
{
    struct node * temp = start;
    if(start==NULL)
    {
        cout<<"List is Empty";
    }
    else
    {
        start=start->link;
        free(temp);
    }
}
void delend()
{
    struct node * temp = start;
    struct node * temp1 = start;
    if(start==NULL)
    {
        cout<<"List is Empty";
    }
    else if(start->link==NULL)
    {
        free(start);
        start=NULL;     // because start is global variable so first remove the address store inside start variable.
    }
    else
    {
    while(temp->link!=NULL)
    {
        temp1 =temp;
        temp=temp->link;
    }
    temp1->link=NULL;
    free(temp);
    }
}

void display()
{
    struct node * temp = start;
    if(start ==NULL)
    {
        cout<<"List is Empty";
    }
    else
    {
        while(temp->link!=NULL)
        {
            cout<<"  "<<temp->info;
            temp = temp->link;
        }
        cout<<"  "<<temp->info;         // For printing last element of the list.
    }
}

int main()
{
    int ch;
    while(1)
    {
    cout<<"\n(1)Insert at begning";
    cout<<"\n(2)Insert at end";
    cout<<"\n(3)Delete at begning";
    cout<<"\n(4)Delete at end";
    cout<<"\n(5)Display";
    cout<<"\n(6)Exit";
    cout<<"\nEnter your choice ";
    cin>>ch;
    switch(ch)
    {
        case 1:
        insbeg();
        break;
        case 2:
        insend();
        break;
        case 3:
        delbeg();
        break;
        case 4:
        delend();
        break;
        case 5:
        display();
        break;
        default:
        cout<<"Wrong Choice";
    }
    }
    return 0;
}