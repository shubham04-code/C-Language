//Square root of number without use of build in function
#include<iostream>
using namespace std;
int main()
{
    int n=0,i=1,num;
    cout<<"Enter a number\n";
    cin>>num;
    while(num!=0 && !(num<0))
    {
       num = num - i;
       i+=2;
       n++;
    }
    if(num==0)
        cout<<"\nResult : "<<n;
    else
        cout<<"\nEnter valid number ";


    return 0;
}
