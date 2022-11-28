#include<bits/stdc++.h>
using namespace std;

bool findo(int *a,int *b, int n,int k)
{
    for(int i=0;i<n;i++)
    {
        a[i]=k-a[i];
    }
    
    for(int j=0;j<n;j++)
    {
        int temp=a[j];
        int s=0;
        int e=n-1;
        
        while(s<=e)
        {
            int mid=s+(e-s)/2;
           if(temp==b[j])
           return true;
           else if(b[j]<temp)
           {
            s=mid+1;
           }
           else
           {
            e=mid-1;
           }
        
        }
        

    }
    return false;
}

int main()
{
    int a[4]={ 3 , 4 , 5 ,6};
    int b[4]={ 1, 2, 7, 8};
    int n=4;
    int k=12;
    if(findo(a,b,n,k))
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
}