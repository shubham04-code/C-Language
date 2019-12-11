// Bubble Sort
#include<iostream>
using namespace std;
int main()
{
    int n,j,num,temp,x;
    int iteration;
    cout<<"Enter the size of array \n";
    cin>>n;
    num = n;
    int a[num];
    cout<<endl<<"\nArray occupied memory in RAM = "<<sizeof(a)<<" bytes."<<endl;

    cout<<"\nEnter element \n";
    for(x = 0 ; x < n ; x++)
    {
        cin>>a[x];
    }
    int k = 0;

    for(iteration = 0 ; iteration<n-1 ; iteration++ )
        for(j = 0 ; j<n - iteration-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;

                // Display all steps and sequence number.
                cout<<"\n step "<<k<<":";
                k++;
                for(x = 0 ; x < n ; x++)
                {
                    cout<<" "<<a[x];
                }
            }
        }

    cout<<"\n\nANS : ";
    for(x = 0 ; x < n ; x++)
    {
        cout<<"  "<<a[x];
    }
    cout<<"\n\n Total number of iteration =  "<<iteration;
    return 0;
}
