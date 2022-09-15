#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<endl<<"enter size of array = ";
    cin>>n;
    int arr[n];
    cout<<endl<<"enter array "<<endl;
    for (int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    // naive solution

    // int max_diff = -99999999;
    // for (int i =0;i<n;i++)
    // {
    //     for (int j = i+1;j<n;j++)
    //     {
    //         if(arr[j]-arr[i]>max_diff)
    //         {
    //             max_diff = arr[j]-arr[i];
    //         }
    //     }
    // }

    // cout<<max_diff;



    // efficient solution
    // trick to sol is that we keep track of the minimum value
    // and keep on checking the difference of it for every value of array
    // and keep updating the min_value too if needed

    int max_diff = INT32_MIN;

    int min_val = arr[0];

    for(int j = 0; j<n ; j++)
    {
        max_diff = max(max_diff,arr[j]-min_val);
        min_val = min(min_val,arr[j]);
    }

    cout<<max_diff;

}