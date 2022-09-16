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

    // my brute force/naive approach time -> O(n) but space -> O(2n)

    // int l_sum[n];
    // l_sum[0] = 0;
    // for(int i =1 ;i<n;i++) 
    // {
    //     l_sum[i] = l_sum[i-1] + arr[i-1];
    // }
    
    // int r_sum[n];
    // r_sum[n-1] = 0;
    // for(int i =n-2 ;i>=0;i--) 
    // {
    //     r_sum[i] = r_sum[i+1] + arr[i+1];
    //     if(r_sum[i] == l_sum[i])
    //     {
    //         cout<<"true";
    //         break;
    //     }
    // }


    // now have to think about an approach that solves in time -> O(n) but space -> O(1)

    // idea -> ek variable mei array ka total sum lelo
    // aur array ko left se right traverse kro
    // har point pr left_sum aur right_sum nikaalo 
    // left_sum nikaalne le liye simply traverse krte huei add krte jana hai array ke elements
    // right_sum nikalne ke liye total sum mei se aray ke element ko subtract krna hoga
    //dono ko compare krdo kaam khatam

    int total_sum=0;
    for(int i = 0 ; i < n ; i++)
    {
        total_sum += arr[i];
    }
    int left_sum = 0;
    for(int i = 0 ; i < n ;i++)
    {
        
        if(left_sum == total_sum - arr[i])
        {
            cout<<endl<<"hehe boiiii";
            break;
        }
        left_sum += arr[i];
        total_sum = total_sum-arr[i];
    }

}