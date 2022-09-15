#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"enter size of array = ";
    cin>>n;
    int arr[n];
    for (int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    for (int i = 1;i<n-1;i++)
    {
        swap(arr[i],arr[i+1]);
    }
    swap(arr[0],arr[n-1]);

    for(int i =0 ;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}