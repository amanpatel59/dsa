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

    int last_max_sum = arr[0];
    int res = 0;
    for(int i = 1;i<n;i++)
    {
        last_max_sum = max(arr[i],last_max_sum+arr[i]);
        res = max(res,last_max_sum);
    }
    cout<<res;

}