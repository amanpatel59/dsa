#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << " enter size of the array = ";
    cin >> n;
    int arr[n];
    cout << "enter array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    // low and high concept .... FAILED 1ST time .... DIDN'T THOUGHT OF THIS

    int low = 0, high = n-1;
    while(low<high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    
}