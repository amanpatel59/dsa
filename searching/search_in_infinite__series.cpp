#include <bits/stdc++.h>

using namespace std;

int binary_search(int arr[] , int start ,int end , int target)
{
    while(start <= end)
    {
        int mid = (start+end)/2;
        if(arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid]>target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}


// in case of array with reallyyyyyyyyyyy big size
int search_in_infinite_series(int arr[],int target)
{
    if(arr[0] == target)
    {
        return 0;
    }
    int i = 1;
    while(arr[i] < target)
    {
        i = i*2;
    }

    if(arr[i]==target)
    {
        return i;
    }

    return binary_search(arr,i/2+1,i-1,target);
}

int main()
{
    int n;
    cout<<"size of array = ";
    cin>>n;
    int arr[n];
    cout<<"elements of array"<<endl;
    for(int i = 0 ;i < n ;i++)
    {
        cin>>arr[i];
    }

    cout<<"value need to be found = ";
    int target;
    cin>>target;
    cout<<search_in_infinite_series(arr,target);
}