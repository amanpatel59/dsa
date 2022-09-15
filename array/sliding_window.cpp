#include <bits/stdc++.h>

using namespace std;

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

    // cout << "give the size of the window = ";
    // int k, curr_window_sum = 0;
    // cin >> k;

    // question -> get the max sum of the sub array of given size

    // int max_sum = -99999;
    // for(int i = 0 ; i<k ; i++)
    // {
    //     curr_window_sum += arr[i];
    //     max_sum = max(max_sum,curr_window_sum);
    // }

    // for(int i = k ; i < n ; i++)
    // {
    //     curr_window_sum = curr_window_sum + arr[i] - arr[i-k];
    //     max_sum = max(max_sum,curr_window_sum);
    // }

    // cout<<max_sum;

    // question 2 -> check if the subarrays of specified size
    // sum upto pecified sum

    // cout << "sum to find = ";
    // int sum;
    // cin >> sum;
    // int i;
    // bool flag = false;
    // for (i = 0; i < k; i++)
    // {
    //     curr_window_sum += arr[i];
    // }
    // if (curr_window_sum == sum)
    // {
    //     flag = true;
    //     cout << endl
    //          << "true";
    // }
    // else
    // {
    //     for (i = k; i < n; i++)
    //     {
    //         curr_window_sum = curr_window_sum + arr[i] - arr[i - k];
    //         if (curr_window_sum == sum)
    //         {
    //             flag = true;
    //             cout << endl
    //                  << "true";
    //             break;
    //         }
    //     }
    // }

    // question -> given an unsoted array of *non- negative* integers. find if there is a subarray with given sum
    // won't work if -ve numbers are included

    // nice ... must look (pehli baar mei kr liya tha pat on back ;) )

    int given_sum;
    cout << "enter given sum = ";
    cin >> given_sum;

    int sum = arr[0];
    int count = 0;
    bool flag = false;
    for (int i = 1; i < n; i++)
    {
        if (sum < given_sum)
        {
            sum += arr[i];
        }
        if (sum > given_sum)
        {
            sum -= arr[count];
            count++;
        }
        if (sum == given_sum)
        {
            flag = true;
            cout << endl
                 << "found " << endl;
            break;
        }
    }

    if (!flag)
    {
        if (given_sum != arr[n - 1])
        {
            cout << endl
                 << "not found " << endl;
        }
        else
        {
            cout<<endl<<"found";
        }
    }
}