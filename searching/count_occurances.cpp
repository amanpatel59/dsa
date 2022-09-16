#include <bits/stdc++.h>

using namespace std;

// array must be SORTED

// iterative is better than recursive binary search
int first_occurance(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    
    while(start<=end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] > target)
        {
            end = mid-1;
        }
        if (arr[mid] < target)
        {
            start = mid+1;
        }
        if(arr[mid]==target)
        {
            if(mid == 0 || arr[mid-1]!=target)
            {
                return mid;
            }
            else
            {
                end = mid - 1 ;
            }

        }
    }
    return -1;
}


int last_occurance(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int first_occurance,last_occurance;
    while(start<=end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] > target)
        {
            end = mid-1;
        }
        if (arr[mid] < target)
        {
            start = mid+1;
        }
        if(arr[mid]==target)
        {
            if(mid == n-1 || arr[mid+1]!=target)
            {
                return mid;
            }
            else
            {
                start = mid + 1 ;
            }

        }
    }
    return -1;
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

    cout << "enter the target element to find count of occurances = ";
    int target;
    cin >> target;
    int first = first_occurance(arr,n,target);
    if(first == -1)
    {
        cout<<"0";
    }
    else
    {
        cout<<last_occurance(arr,n,target)-first+1;
    }
}