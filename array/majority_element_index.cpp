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

    // majority element -> agar array ki length "n" hai
    // aur koi element n/2+1 times present hai toh wo majority element hoga

    // finding majority element is pretty easy
    // just sort aur jo n/2 pr element hoga wo majority element hoga

    // sort(arr,arr+n);
    // cout<<"majority element = "<<arr[n/2];

    // now we have to find any one index of majority element



    // Boyer–Moore majority vote algorithm
    // has 2 phases
    // 1st phase finds a candidate, i.e. if there is a majority element
    // then this candidate is the majority element
    // 2nd phase checks if candidate is actually a majority
    // in case if we know for sure that a majority element is present
    // then we don't need the 2nd phase
    // 2nd phase is pretty simple


    // 1st phase
    
    int res = 0 , count = 1;
    for(int i = 1 ; i < n ; i++)
    {
        if(arr[res] == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if(count == 0)
        {
            res = i;
            count = 1;
        }
    }

    // 2nd phase

    count = 0;
    for(int i = 0; i < n ; i++)
    {
        if(arr[res]==arr[i])
        {
            count++ ;
        }
    }

    if(count <= n/2)
    {
        res = -1;
    }

    cout<<res;

}
