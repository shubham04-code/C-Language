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
