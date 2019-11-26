/*
 *SOLVING MATHS PROBLEM.
 *FETURE:
 *FIND ROOT OF QUADRATIC EQUATION.
 *FIND EIGN VALUES AND EQUATION OF MATRIX.
 *FING LOG VALUE OF ANY NUMBER.
 *FIND INVERSE MATRIX.
 *FIND SIN X,COS X..ETC VALUES(where X is any  angle).
 */
 #include<stdio.h>
#include<stdlib.h>
#include<math.h>
int qudratic()
{
    float a,b,c,delta,i,j,m,k,l;
    printf("\nEnter the co-efficient of the x^2,x and constant\n");
    scanf("%f%f%f",&a,&b,&c);
    printf("\nThe quadratic equation is %f * x^2  %f * x  %f\n",a,b,c);
    delta=b*b-4*a*c;
    if(delta<0)
    {
        printf("\nThe roots are imaginary\n");
        m=-delta;
        k=(-b)/(2*a);
        l=sqrt(m)/(2*a);
        printf("\n The root is %f + or - %f*i\n",k,l);
    }
    if(delta==0)
    {
        printf("\nThe roots real and equal\n");
        i=(-b)/(2*a);
        printf("\nThe root is %f",i);
    }
    if(delta>0)
    {
        printf("\nThe roots are real and different\n");
        i=(-b+sqrt(delta))/(2*a);
        j=(-b-sqrt(delta))/(2*a);
        printf("\nThe root is %f and %f\n",i,j);
    }
    return 0;
}

int eigen()
{
    float a,b,c,delta,i,j,m,k,l;
    int x[2][2],n[2][2];
    printf("Enter the first row of 2*2 matrix\n");
    scanf("%d",&x[0][0]);
    scanf("%d",&x[0][1]);
    printf("Enter the second row of 2*2 matrix\n");
    scanf("%d",&x[1][0]);
    scanf("%d",&x[1][1]);
    printf("The matrix is:");
    printf("\n================");
    printf("\n %d  %d ",x[0][0],x[0][1]);
    printf("\n %d  %d ",x[1][0],x[1][1]);
    printf("\n================");
    a=1;
    b=-(x[0][0]+x[1][1]);
    c=(x[0][0]*x[1][1])-(x[0][1]*x[1][0]);
    printf("\nThe equation is %f * x^2  %f * x  %f\n",a,b,c);
    delta=b*b-4*a*c;
    if(delta<0)
    {
        printf("\nThe eigen values are imaginary\n");
        m=-delta;
        k=(-b)/(2*a);
        l=sqrt(m)/(2*a);
        printf("\n The eigen values is %f + or - %f*i\n",k,l);
    }
    if(delta==0)
    {
        printf("\nThe eigen values and equal\n");
        i=(-b)/(2*a);
        printf("\nThe eigen values is %f",i);
    }
    if(delta>0)
    {
        printf("\nThe eigen values real and different\n");
        i=(-b+sqrt(delta))/(2*a);
        j=(-b-sqrt(delta))/(2*a);
        printf("\nThe eigen values is %f and %f\n",i,j);
    }
    return 0;
}


int logs()
{
    int i;
    float number;
    printf("\nEnter the value which you want to find log of base 10");
    scanf("%f",&number);
    if(number==0)
        printf("- infi..");
    else if(number<0)
        printf("Error");
    else
    {
        for(i=1; i<=13; i++)
        {
            number=sqrt(number);
        }
        number=(number-1)*3558;
        printf("Ans is %f",number);
    }
    return 0;
}

//Here the special think is that finding trigonometric function values,without using inbuilt function.
int angle()
{
    float radian(int x)
    {
        int y;
        y=x/180;
        if(y%2==0)
        {
            x=x-y*180;
        }
        else
        {
            x=y*180-x;
        }
        return(3.14*x/180);
    }
    float sine(float x)
    {
        float val;
        val=(x+(x*x*x*x*x)/120+(x*x*x*x*x*x*x*x*x)/362880)-((x*x*x)/6+(x*x*x*x*x*x*x)/5040);
        return val;
    }
    int ch,ang;
    float v1,v2,p1,p2;
    while(1)
    {
        printf("\n(1)sine \n(2)cos \n(3)tan \n(4)cot \n(5)cosec \n(6)sec \n(7)Exit.\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter a angle in degree");
            scanf("%d",&ang);
            v1=radian(ang);
            v2=sine(v1);
            printf("The value is %f",v2);
            break;
        case 2:
            printf("Enter a angle in degree");
            scanf("%d",&ang);
            v1=radian(90-ang);
            v2=sine(v1);
            printf("The value is %f",v2);
            break;
        case 3:
            printf("Enter a angle in degree");
            scanf("%d",&ang);
            v1=radian(90-ang);
            v2=sine(v1);
            p1=radian(ang);
            p2=sine(p1);
            printf("The value is %f",p2/v2);
            break;
        case 4:
            printf("Enter a angle in degree");
            scanf("%d",&ang);
            v1=radian(90-ang);
            v2=sine(v1);
            p1=radian(ang);
            p2=sine(p1);
            printf("The value is %f",v2/p2);
            break;
        case 5:
            printf("Enter a angle in degree");
            scanf("%d",&ang);
            p1=radian(ang);
            p2=sine(p1);
            printf("The value is %f",1/p2);
            break;
        case 6:
            printf("enter a angle in degree");
            scanf("%d",&ang);
            v1=radian(90-ang);
            v2=sine(v1);
            printf("The value is %f",1/v2);
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("Please enter valid choice");
        }
    }
    return 0;
}

int inverse()
{
    {
        int i,j;
        int a[3][3],b[3][3];
        float val, val2;
        printf("Enter 3*3 matrix");
        for(i=0; i<=2; i++)
            for(j=0; j<=2; j++)
                scanf("%d",&a[i][j]);

        printf("\nThe matrix is");
        printf("\n====================");
        printf("\n %d   %d   %d",a[0][0],a[1][0],a[2][0]);
        printf("\n %d   %d   %d",a[0][1],a[1][1],a[2][1]);
        printf("\n %d   %d   %d",a[0][2],a[1][2],a[2][2]);
        printf("\n====================");

        val=(a[0][0]*((a[1][1]*a[2][2])-(a[1][2]*a[2][1]))) - (a[0][1]*((a[1][0]*a[2][2])-(a[2][0]*a[1][2]))) + (a[0][2]*((a[1][0]*a[2][1])-(a[2][0]*a[1][1])));
        printf("\nThe matrix value is = %f",val);
        val2=1/val;
        if(val==0)
        {
            printf("\n\nInverse matrix is not possible");
        }
        else
        {
            b[0][0]=a[1][1]*a[2][2]-a[2][1]*a[1][2];
            b[1][0]=-((a[1][0]*a[2][2])-(a[2][0]*a[1][2]));
            b[2][0]=a[1][0]*a[2][1]-a[2][0]*a[1][1];

            b[0][1]=-((a[0][1]*a[2][2])-(a[2][1]*a[0][2]));
            b[1][1]=a[0][0]*a[2][2]-a[2][0]*a[0][2];
            b[2][1]=-((a[0][0]*a[2][1])-(a[2][0]*a[0][1]));

            b[0][2]=a[0][1]*a[1][2]-a[1][1]*a[0][2];
            b[1][2]=-((a[0][0]*a[1][2])-(a[1][0]*a[0][2]));
            b[2][2]=a[0][0]*a[1][1]-a[1][0]*a[0][1];

            printf("\n\nAdj matrix is");
            printf("\n====================");
            printf("\n %d   %d   %d",b[0][0],b[1][0],b[2][0]);
            printf("\n %d   %d   %d",b[0][1],b[1][1],b[2][1]);
            printf("\n %d   %d   %d",b[0][2],b[1][2],b[2][2]);
            printf("\n====================");
 
            
            printf("\n\nThe inverse matrix is");
            printf("\n====================");
            printf("\n %d   %d   %d",b[0][0],b[1][0],b[2][0]);
            printf("\n %d   %d   %d    *  %f ",b[0][1],b[1][1],b[2][1],val2);
            printf("\n %d   %d   %d",b[0][2],b[1][2],b[2][2]);
            printf("\n====================");
        }
    }
    return 0;
}

int main()
{
    int choice;
    while(1)
    {
        printf("\n=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=");
        printf("\n=                                                         =");
        printf("\n=(1)Find the root of quadratic equation.                  =");
        printf("\n=                                                         =");
        printf("\n=(2)Find the equation and  eigen values of 2*2 matrix.    =");
        printf("\n=                                                         =");
        printf("\n=(3)Find the log of base 10.                              =");
        printf("\n=                                                         =");
        printf("\n=(4)Find the inverse of 3*3 matrix.                       =");
        printf("\n=                                                         =");
        printf("\n=(5)Find the angle of any trigonometric function.         =");
        printf("\n=                                                         =");
        printf("\n=(6)Exit                                                  =");
        printf("\n=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=");

        printf("\n\nEnter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            qudratic();
            break;
        case 2:
            eigen();
            break;
        case 3:
            logs();
            break;
        case 4:
            inverse();
            break;
        case 5:
            angle();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Please enter valid choice");
            break;
        }
    }
}
/*
 *OUTPUT :

=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=
=                                                         =
=(1)Find the root of quadratic equation.                  =
=                                                         =
=(2)Find the equation and  eigen values of 2*2 matrix.    =
=                                                         =
=(3)Find the log of base 10.                              =
=                                                         =
=(4)Find the inverse of 3*3 matrix.                       =
=                                                         =
=(5)Find the angle of any trigonometric function.         =
=                                                         =
=(6)Exit                                                  =
=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=

Enter your choice1

Enter the co-efficient of the x^2,x and constant
6
11
-35

The quadratic equestion is 6.000000 * x^2  11.000000 * x  -35.000000

The root are real and different

The root is 1.666667 and -3.500000

=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=
=                                                         =
=(1)Find the root of quadratic equation.                  =
=                                                         =
=(2)Find the equation and  eigen values of 2*2 matrix.    =
=                                                         =
=(3)Find the log of base 10.                              =
=                                                         =
=(4)Find the inverse of 3*3 matrix.                       =
=                                                         =
=(5)Find the angle of any trigonometric function.         =
=                                                         =
=(6)Exit                                                  =
=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=

Enter your choice2
Enter the first row of 2*2 matrix
1
2
Enter the second row of 2*2 matrix
4
3
The matrix is:
================
 1  2
 4  3
================
The equation is 1.000000 * x^2  -4.000000 * x  -5.000000

The eigen values real and different

The eigen values is 5.000000 and -1.000000

=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=
=                                                         =
=(1)Find the root of quadratic equation.                  =
=                                                         =
=(2)Find the equation and  eigen values of 2*2 matrix.    =
=                                                         =
=(3)Find the log of base 10.                              =
=                                                         =
=(4)Find the inverse of 3*3 matrix.                       =
=                                                         =
=(5)Find the angle of any trigonometric function.         =
=                                                         =
=(6)Exit                                                  =
=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=

Enter your choice3

Enter the value which you want to find log of base 10
2
Ans is 0.301144
=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=
=                                                         =
=(1)Find the root of quadratic equation.                  =
=                                                         =
=(2)Find the equation and  eigen values of 2*2 matrix.    =
=                                                         =
=(3)Find the log of base 10.                              =
=                                                         =
=(4)Find the inverse of 3*3 matrix.                       =
=                                                         =
=(5)Find the angle of any trigonometric function.         =
=                                                         =
=(6)Exit                                                  =
=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=

Enter your choice4
Enter 3*3 matrix
3
-3
4
2
+3
4
0
-1
1

The matrix is
====================
 3   2   0
 -3   3   -1
 4   4   1
====================
The matrix value is = 19.000000

Adj matrix is
====================
 7   -2   -2
 -1   3   3
 -24   -4   15
====================

The inverse matrix is
====================
 7   -2   -2
 -1   3   3    *  0.052632
 -24   -4   15
====================
=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=
=                                                         =
=(1)Find the root of quadratic equation.                  =
=                                                         =
=(2)Find the equation and  eigen values of 2*2 matrix.    =
=                                                         =
=(3)Find the log of base 10.                              =
=                                                         =
=(4)Find the inverse of 3*3 matrix.                       =
=                                                         =
=(5)Find the angle of any trigonometric function.         =
=                                                         =
=(6)Exit                                                  =
=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=

Enter your choice5

(1)sine
(2)cos
(3)tan
(4)cot
(5)cosec
(6)sec
(7)Exit.
1
Enter a angle in degree 30
The value is 0.499770
(1)sine
(2)cos
(3)tan
(4)cot
(5)cosec
(6)sec
(7)Exit.
2
Enter a angle in degree 59
The value is 0.514803
(1)sine
(2)cos
(3)tan
(4)cot
(5)cosec
(6)sec
(7)Exit.
3
Enter a angle in degree 65
The value is 2.144949
(1)sine
(2)cos
(3)tan
(4)cot
(5)cosec
(6)sec
(7)Exit.
7
Exit.
*/


