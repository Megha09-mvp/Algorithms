#include<iostream>
using namespace std;

int rotate(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<arr[s])
        {
            if(key<=arr[e] && key>arr[mid])
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        else 
        {
            if(key<=arr[s] && key<arr[mid])
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[]={15, 16, 19, 20, 25, 1, 3, 4, 5, 7, 10, 14};
    int n=sizeof(arr)/sizeof(int);
   int k= rotate(arr,n,5);
   cout<<k;

}