#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n ; 
    cout<<"enter size of the array = ";
    cin>>n;
    int arr[n];
    cout<<"enter array "<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int profit = 0;
    for(int i =0 ; i < n ; i++)
    {
        if(arr[i]>arr[i-1])
        {
            profit += arr[i-1] - arr[i];
        }
    }

    cout<<profit;


}