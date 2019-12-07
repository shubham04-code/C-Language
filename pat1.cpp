#include<iostream>
using namespace std;
int main()
{
    int i,j,number = 10;
    char abcd = 97;
    for(i = 1 ; i <= 7 ; i++)
    {
        for(j = 1 ; j <= 4 ; j++)
        {
            if(i % 2 != 0)
            {
                cout<<char(abcd)<<" ";
                if(i==1)
                    abcd = abcd + 2;
                else
                    abcd = abcd - 1;

            }
            else
            {
                cout<<number<<" ";
                number = number - 2;
            }
            if(j >= i-j)
                break;
        }
            if(i%2==0 && i!=2)
            abcd = abcd + i + 1;
                    cout<<"\n";
    }
    return 0;
}
/*
OUTPUT:

a 
10 
c b 
8 6 
f e d 
4 2 0 
j i h g

*/
