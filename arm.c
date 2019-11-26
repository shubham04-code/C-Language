#include<stdio.h>
#include<math.h>
int count(int);
int main()
{
    int n,po,temp,r,sum=0;
    printf("\nEnter a number  ");
    scanf("%d",&n);
    temp=n;
    po = count(n);
  while(n>0)
    {
        r=n%10;
        sum=sum+(pow(r,po));
        n=n/10;
    }
    if(temp==sum)
        printf("\nArmstrong number\n");
    else
        printf("\nNot armstrong number\n");

    return 0;
}

int count(int a)
{
    int digit=0;
    while(a!=0)
    {
        a=a/10;
        digit++;
    }
    return digit;
}
