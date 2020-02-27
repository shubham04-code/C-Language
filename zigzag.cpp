// Matrix(2*2) index for zigzag pattern.
#include<iostream>
using namespace std;
int main()
{
    int n,len,i,j;
    cout<<"Enter key size";
    cin>>n;
    cout<<"Enter string length";
    cin>>len;
    for(j = 0; j< len ; j++)
    {    
    for(i = 0 ; i < n;i++)
    {
        cout<<"\n"<<i;
    }
     if(i==n)
        {
            for(i=n-2;0<i;i--)
            {
                cout<<"\n"<<i;
            }
        }
    }
    return 0;
}