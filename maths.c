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