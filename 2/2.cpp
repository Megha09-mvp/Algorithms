#include<bits/stdc++.h>
using namespace std;

int election(int *arr,int n)
{
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    int k=INT_MIN;
    int m=arr[0];
    for(auto x:mp)
    {
        int f=x.second;
        if(f>k)
        {
            k=f;
            m=x.first;
        }
    }
    return m;

}

int main()
{
    int arr[]={2,4,4,6,2,4,8,9};
    int n=sizeof(arr)/sizeof(int);
    int l=election(arr,n);
    cout<<l;
}