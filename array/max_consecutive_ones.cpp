#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    cout<<"enter size of the array = ";

    cin>>n;

    cout<<"enter elements of array "<<endl;

    int arr[n];
    for(int i =0; i< n ; i++)
    {
        cin>>arr[i];
    }

    int count = 0,res=0 ;

    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i]==0)
        {
            res = max(count , res);
            count = 0;
        }
        else
        {
            count++;
        }
    }
    cout<<max(res,count);
}