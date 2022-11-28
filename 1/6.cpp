#include<iostream>
using namespace std;

pair<int, int> print(int arr[][4],int n,int m,int key)
{
    int i=0;
    int j=m-1;
    while(i<=m-1 and j>=0)
    {
        if(key==arr[i][j])
        {
            return {i,j};
        }
        else if(key<arr[i][j])
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return {-1,-1};
}

int main()
{
    int arr[][4]={{10,20,30,40},
                   {15,25,35,45},
                   {27,29,37,48},
                   {32,33,39,50}};
    int n=4, m=4;
    int k;
    cin>>k;
   pair<int,int> coords= print(arr,n,m,k);
   cout<<coords.first<<" "<<coords.second<<endl;
}