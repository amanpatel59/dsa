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

    // naive sol

    //here for every block we have to find the right max and left max 
    // once we have these 2 we can find the minimum among these and then can subtract the size of the element


    // int res = 0;
    // for(int i = 1 ;i < n-1 ; i++)
    // {
    //     int left_max = arr[i];
    //     for(int j = 0 ;j<i ; j++)
    //     {
    //         left_max = max(left_max,arr[j]);
    //     }
    //     int right_max = arr[i];
    //     for(int j = i+1 ; j <n ;j++)
    //     {
    //         right_max = max(right_max,arr[j]);
    //     }
        
         
    //     res += min(left_max,right_max) - arr[i];
  
    // }

    // cout<<res;






    // efficient solution 

    int left_max[n];
    left_max[0] = arr[0];
    for(int i =1 ;i<n;i++)
    {
        left_max[i] = max(arr[i],left_max[i-1]);
    }

    int right_max[n];
    right_max[n-1] = arr[n-1];
    for(int i = n-2;i>=0;i--)
    {
        right_max[i] = max(right_max[i+1],arr[i]);
    }

    int res = 0;
    for(int i = 0 ;i <n;i++)
    {
        res += min(left_max[i] , right_max[i]) - arr[i];
    }

    cout<<res;
}