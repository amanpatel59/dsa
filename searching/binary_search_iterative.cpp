#include <bits/stdc++.h>

using namespace std;

// array must be SORTED

// iterative is better than recursive binary search
int binary_search(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    bool flag = false;
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
    cout << binary_search(arr, n, target);
}