#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,r,ch;
    do
    {
    cout<<"\n GAME RULES";
    cout<<"\n=============================================================";
    cout<<"\n Guess Only One Color";
    cout<<"\n IF The Color Is Present In The List : Press 1(means yes)";
    cout<<"\n IF The Color Is Not Present In The List : Press 0(means no)";
    cout<<"\n=============================================================";
    cout<<"\nYOU ARE READY\n";
    cin>>r;
    if(r==1){
    cout<<"\nWELCOME";
    cout<<"\n Choose you favorite color in your mind";
    cout<<"\n=============================================================";
    cout<<"\n 1.Red";
    cout<<"\n 2.Green";
    cout<<"\n 3.Yellow";
    cout<<"\n 4.Black";
    cout<<"\n 5.Orange";
    cout<<"\n 6.Gray";
    cout<<"\n 7.Blue";
    cout<<"\n 8.White";
    cout<<"\n=============================================================";

    cout<<"\n 1.red";
    cout<<"\n 2.green";
    cout<<"\n 3.yellow";
    cout<<"\n 4.black";
    cout<<"\n color is present or not?\n";
    cin>>a;
    if(a==1)
    {
    cout<<"\n 1.yellow";
    cout<<"\n 2.white";
    cout<<"\n 3.blue";
    cout<<"\n 4.red";
    cout<<"\n color is present or not?\n";
    cin>>b;

    }
    if(a==1&&b==1)
    {
    cout<<"\n 1.orange";
    cout<<"\n 2.black";
    cout<<"\n 3.red";
    cout<<"\n 4.gray";
    cout<<"\n color is present or not?\n";
    cin>>c;
    }
    else if(a==1&&b==0)
    {
    cout<<"\n 1.green";
    cout<<"\n 2.white";
    cout<<"\n 3.black";
    cout<<"\n 4.orange";
    cout<<"\n color is present or not?\n";
    cin>>c;
    }
    if(a==1&&b==0&&c==1)
    {
    cout<<"\n 1.black";
    cout<<"\n 2.blue";
    cout<<"\n 3.red";
    cout<<"\n 4.gray";
    cout<<"\n color is present or not?\n";
    cin>>d;
    }

    if(a==0)
    {
    cout<<"\n 1.white";
    cout<<"\n 2.blue";
    cout<<"\n 3.orange";
    cout<<"\n 4.gray";
    cout<<"\n color is present or not?\n";
    cin>>b;
    }
    if(a==0&&b==1)
    {
    cout<<"\n 1.gray";
    cout<<"\n 2.white";
    cout<<"\n 3.green";
    cout<<"\n 4.red";
    cout<<"\n color is present or not?\n";
    cin>>c;
    }
    if(a==0&&b==1&&c==1)
    {
    cout<<"\n 1.white";
    cout<<"\n 2.black";
    cout<<"\n 3.orange";
    cout<<"\n 4.green";
    cout<<"\n color is present or not?\n";
    cin>>d;
    }
    if(a==0&&b==1&&c==0)
    {
    cout<<"\n 1.blue";
    cout<<"\n 2.orange";
    cout<<"\n 3.yellow";
    cout<<"\n 4.black";
    cout<<"\n color is present or not?\n";
    cin>>d;
    }

    if(a==0&&b==1&&c==0&&d==1)
    {
    cout<<"\n 1.blue";
    cout<<"\n 2.red";
    cout<<"\n 3.green";
    cout<<"\n 4.yellow";
    cout<<"\n color is present or not?\n";
    cin>>e;
    }

    if(a==1&&b==1&&c==1)
        cout<<"red";
    if(a==1&&b==1&&c==0)
        cout<<"yellow";
    if(a==1&&b==0&&c==1&&d==1)
        cout<<"black";
    if(a==1&&b==0&&c==1&&d==0)
        cout<<"green";

    if(a==0&&b==1&&c==1&&d==1)
        cout<<"white";
    if(a==0&&b==1&&c==1&&d==0)
        cout<<"gray";
    if(a==0&&b==1&&c==0&&d==1&&e==1)
        cout<<"blue";
    if(a==0&&b==1&&c==0&&d==1&&e==0)
        cout<<"orange";

        cout<<"\nTo Play Continuous Press:1\n";
        cout<<"\nTo Exit Press:0\n";
        cin>>ch;
    }
    else
    {
        cout<<"PLEASE READY";
    }
    }while(ch==1);

}

