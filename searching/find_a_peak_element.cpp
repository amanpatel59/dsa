#include <bits/stdc++.h>

using namespace std;

int peak_element(int arr[],int n)
{

    int start = 0 , end = n-1;


    // what i came up with


    // if (arr[0] > arr[1])
    //     return arr[0];
    // if (arr[n - 1] > arr[n - 2])
    //     return arr[n - 1];

    // while(start <= end)
    // {
    //     int mid = (start+end)/2;
    //     if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1])
    //     {
    //         return arr[mid];
    //     }

    //     if(arr[mid] <= arr[mid-1])
    //     {
    //         end = mid-1;
    //     }
    //     else if(arr[mid] <= arr[mid+1])
    //     {
    //         start = mid +1;
    //     }
    // }
    // return -1;

    while(start<=end)
    {
        int mid=(start+end)/2;
        if((mid == 0 || arr[mid-1] <= arr[mid]) && (mid == n-1 || arr[mid+1] <= arr[mid]))
        {
            return arr[mid];
        }

        if(mid>0 && arr[mid-1]>=arr[mid])
        {
            end = mid-1;
        }
        else
        {
            start = mid +1;
        }
    }
    return -1;
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

    cout<<"peak element = "<<peak_element(arr,n);
}

