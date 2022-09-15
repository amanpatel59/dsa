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

    int count = 1 , res = 0 ;
    // count =  1 because first element can be either even or odd
    // also we are checking for 2 elements in one if
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i]%2==0 and arr[i+1]%2!=0 or arr[i]%2!=0 and arr[i+1]%2==0)
        {
            count++;
        }
        else
        {
            res = max(res,count);
            count = 1 ;
        }
    }
    cout<<max(res,count);

}