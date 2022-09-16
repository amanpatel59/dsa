#include <bits/stdc++.h>

using namespace std;

// array must be SORTED

// iterative is better than recursive binary search
int binary_search_recursive(int arr[],int n,int target,int start,int mid,int end)
{
    if(end<start)
    {
        return -1;
    }
    if(arr[mid]==target)
    {
        return mid;
    }
    if(arr[mid]>target)
    {
        end = mid-1;
        mid = (start+end)/2;
        return binary_search_recursive(arr,n,target,start,mid,end);
    }
    
    if(arr[mid]<target)
    {
        start = mid+1;
        mid = (start+end)/2;
        return binary_search_recursive(arr,n,target,start,mid,end);
    }

    
}
int main()
{
    int n;
    cout << "enter size of array = ";
    cin >> n;

    cout << "enter elements of array " << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "enter the target element to find = ";
    int target;
    cin >> target;
    cout << binary_search_recursive(arr, n, target,0,(n-1)/2,(n-1));
}