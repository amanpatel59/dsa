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

    int prefix_sum[n];
    prefix_sum[0] = arr[0];
    for(int i = 1; i<n;i++)
    {
        prefix_sum[i] = prefix_sum[i-1]+arr[i];
    }

    cout<<"enter from which index to which index you want to find the sum "<<endl;
    cout<<"from = ";
    int s;
    cin>>s;
    cout<<"to = ";
    int e;
    cin>>e;

    if(s==0)
    {
        cout<<prefix_sum[e];
    }
    else
    {
        cout<<(prefix_sum[e] - prefix_sum[s-1]);
    }

}