#include<iostream.h>

int main()
{
    int a[50],n,i,j,temp,count=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the array elements: ";

    for(i=0;i<n;++i)
        cin>>a[i];

    for(i=1;i<n;++i)
    {
        for(j=0;j<(n-i);++j)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                count++;
            }
    }

    cout<<"Array after bubble sort:";
    for(i=0;i<n;++i)
        cout<<""<<a[i]<<endl;
     cout<<"\nNo of comparisons: "<<count;

    return 0;
}
