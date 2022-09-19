#include <bits/stdc++.h>

using namespace std;

int binary_search(int arr[], int n, int target,int start,int end)
{
    
    int mid = (start + end) / 2;
    while(start<=end)
    {
        if (arr[mid] > target)
        {
            
            end = mid-1;
            mid = (start + end) / 2;
        }
        if (arr[mid] < target)
        {
            start = mid+1;
            mid = (start+end)/2;
        }
        if(arr[mid]==target)
        {
            return mid;
        }
    }
    return -1;
}



int linear_search(int arr[],int n,int target,int start,int end)
{
    for(int i = start ; i<= end;i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}



// simple logic is this 
// ki agar array rotated hai toh koi ek side sorted hogi for sure 
// toh sorted side nikaal lo 
// ab humei pata hai ki sorted side konsi hai aur unsorted side konsi hai
// ab check krlo ki target jo search krna hai , wo sorted side mei hai ya unsorted side mei hai
// agar sorted side mei hai toh ussey binary search ki help se search krlo
// agar unsorted side mei hai toh ussey linear search se travel krlo



int search_in_sorted_rotated(int arr[] , int n , int target)
{
    int start = 0, end = n-1;
    while(start<=end)
    {
        int mid = (start+end)/2;

        if(arr[0]<arr[mid])
        {
            if(target > arr[mid]  || target <arr[0])
            {
                return linear_search(arr,n,target,mid+1,n-1);
            }
            else
            {
                return binary_search(arr,n,target,0,mid);
            }
        }

        else if(arr[mid]<arr[n-1])
        {
            if(target < arr[mid] || target > arr[n-1])
            {
                return linear_search(arr,n,target,0,mid-1);
            }
            else
            {
                return binary_search(arr,n,target,mid,n-1);
            }
        }
    }
}

int main()
{
    int n;
    cout<<"enter size of array = ";
    cin>>n;
    cout<<"enter array elements "<<endl;
    int arr[n];

    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }

    int target;
    cout<<"target to search for = ";
    cin>>target;
    cout<<search_in_sorted_rotated(arr,n,target);
}
