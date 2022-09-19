#include <bits/stdc++.h>

using namespace std;

// question -> given a sorted array and a sum , find if there is a apair with given sum

// in case if array is unsorted we will use hashing approach

int check_pair_sum(int arr[] , int n , int target)
{
    int sum,left = 0,right = n-1;
    while(left<=right)
    {
        if(arr[left] + arr[right] > target)
        {
            right--;
        }
        else if(arr[left] + arr[right] < target)
        {
            left++;
        }
        else if(arr[left]+arr[right] == target)
        {
            return true;
        }
    }
    return false;
}


int check_triplet_sum(int arr[] , int n , int target)
{
    // just run check pair for every i'th element
    for(int i = 0;i<n;i++)
    {
        if(check_pair_sum(arr,n,target-arr[i]))
        {
            return true;
        }
    }
    return false;
}


// question -> find if there is a triplet a,b,c such that a^2 + b^2 = c^2

int check_pair_sum_for_eq(int arr[] , int n , int target)
{
    int sum,left = 0,right = n-1;
    while(left<=right)
    {
        if((arr[left]^2 + arr[right]^2 )> target)
        {
            right--;
        }
        else if((arr[left]^2 + arr[right]^2) < target)
        {
            left++;
        }
        else if((arr[left]^2+arr[right]^2) == target)
        {
            return true;
        }
    }
    return false;
}

int check_eq(int arr[], int n)
{
    for(int i = 0 ; i< n;i++)
    {
        if(check_pair_sum_for_eq(arr,n,(arr[i]*arr[i])))
        {
            return true;
        }
    }
    return false;
}


int main()
{
    int n ;
    cout<<"enter size of the array = "; 
    cin>>n;

    int arr[n];
    cout<<"enter elements"<<endl;

    for(int i = 0;i < n;i++)
    {
        cin>>arr[i];
    }

    cout<<"enter sum wanna be checked = ";
    int target;
    cin>>target;

    cout<<"pair sum = "<<check_pair_sum(arr,n,target);
    cout<<endl;
    cout<<"triplet sum = "<<check_triplet_sum(arr,n,target);
    cout<<endl;
    cout<<" elements satisfying a^2 + b^2 = c^2 = "<<check_eq(arr,n);
    cout<<endl<<"1 for yes and 0 for no";
}
