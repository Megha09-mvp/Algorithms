    
#include<iostream>
using namespace std;

void ins(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int k=arr[i];
        int prev=i-1;
        while(prev>=0 and arr[prev]>k)
        {
            arr[prev+1]=arr[prev];
            prev=prev-1;
        }
        arr[prev+1]=k;
        
    }
}

int main()
{
     int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n= sizeof(arr)/sizeof(int);
    ins(arr,n);
    int c=0;

if(arr[0]==arr[1])
{
    cout<<"the element"<<arr[0]<<"is repeated"<<endl;
}
for(int i=1;i<n;i++)
{
    if(arr[i+1]==arr[i])
    {
          cout<<"the element"<<arr[i]<<"is repeated"<<endl;

    }
}
}