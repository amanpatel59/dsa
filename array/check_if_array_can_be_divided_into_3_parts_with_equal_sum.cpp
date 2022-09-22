// question -> check if array csn be divided into 3 parts
// with equal sum

#include <bits/stdc++.h>

using namespace std;
//approach is kind of the equilibriam point question

int main()
{
    int n;
    cout << "enter size of the array = ";

    cin >> n;

    cout << "enter elements of array " << endl;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int total_sum = 0;
    for(int i = 0 ;i<n;i++)
    {
        total_sum += arr[i];
    }
    
    int left_sum = 0;
    for(int i = 0; i<n;i++)
    {
        if(left_sum == (total_sum - arr[i]) and left_sum == arr[i])
        {
            cout<<"hehe nicee";
        }
        left_sum += arr[i];
        total_sum -= arr[i];
    }

}