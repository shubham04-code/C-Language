/*This program is check,the magic matrix is possible or not for which user enter a number
->what is magic matrix?
->The sum of all diagonal or rows or columns are same.*/
#include<stdio.h>
void sort();
void showmatrix();
void sum();
int A[3][3],a[10];
int i,j,temp;
int r1=0,r2=0,r3=0;
int c1=0,c2=0,c3=0;
int d1=0,d2=0;
int main()
{
    printf("\n\n**************************************************************************************************");
    printf("\n\nEnter 9 numbers\n");
    printf("\n\n**************************************************************************************************\n\n");
    for(i=0; i<9; i++)
    {
        scanf("%d",&a[i]);
    }
    sort();
    A[1][2]=a[0];
    A[0][0]=a[1];
    A[2][1]=a[2];
    A[2][0]=a[3];
    A[1][1]=a[4];
    A[0][2]=a[5];
    A[0][1]=a[6];
    A[2][2]=a[7];
    A[1][0]=a[8];

    //showmatrix();
    sum();
    return 0;
}
void sort()
{
    for(i=0; i<9; i++)
    {
        for(j=0; j<8-i; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void showmatrix()
{
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("  %d  ",A[i][j]);
        }
        printf("\n");
    }
}
void sum()
{
    for(i=0; i<3; i++)  //for rows sum
    {
        r1=r1+A[0][i];
    }
    for(i=0; i<3; i++)
    {
        r2=r2+A[1][i];
    }
    for(i=0; i<3; i++)
    {
        r3=r3+A[2][i];
    }
    for(i=0; i<3; i++)
    {
        c1=c1+A[i][0];
    } //for column sum
    for(i=0; i<3; i++)
    {
        c2=c2+A[i][1];
    }
    for(i=0; i<3; i++)
    {
        c3=c3+A[i][2];
    }

    i=0,j=0;
    while(i<3&&j<3) //for diagonal sum
    {
        d1=d1+A[i][j];
        i++;
        j++;
    }
    d2=A[0][2]+A[1][1]+A[2][0];
    if(r1==r2&&r1==r3&&r1==c1&&r1==c2&&r1==c3&&r1==d1&&r1==d2&&r2==r3&&r2==c1&&r2==c3&&r2==d1&&r2==d2&&r3==c1&&r3==c2&&r3==d1&&r3==d2&&c1==c2&&c1==c3&&c1==d1&&c1==d2&&c2==c3&&c2==d1&&c2==d2&&c3==d1&&c3==d2&&d1==d2)
    {
        printf("\n\n**************************************************************************************************");
        printf("\n\nThe sum of matrix rows are:-  %d",r1);
        printf("\n\nThe sum of matrix columns are:-  %d",c1);
        printf("\n\nThe sum of matrix diagonals are:-  %d",d1);
        printf("\n\n**************************************************************************************************");
        printf("\n\nHence, Magic matrix is possible");
        printf("\n\nMAGIC MATRIX\n\n");
        showmatrix();
    }
    else
    {
        printf("\n\n**************************************************************************************************");
        printf("\n\nMagic matrix is not possible for the given input");
        printf("\n\n**************************************************************************************************");
    }

}
