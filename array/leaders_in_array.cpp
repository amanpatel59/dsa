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

    // leader -> agar number ke right mei ussey bada ya equal number present nahi hai toh wo leader hai
    // in a sorted array only last element is the leader
    // in a array sorted in desc every element is a leader


    // here we use the idea that last element of the array is always the leader
    // hence we take the last element as our current leader and gets it comparing with
    // other elements of array from right to left 
    // this way , agar koi element current leader se bada hai toh wo next leader hoga
    // aur ussey current leader mei store kara kr aagey ki elements ko check kr sakte hai
    
    int current_leader = arr[n-1];
    cout<<current_leader<<" ";
    for(int i = n-2 ;i >= 0 ; i--)
    {
        if(current_leader < arr[i])
        {
            current_leader = arr[i];
            cout<<current_leader<<" ";
        }
    }




    
}