// question -> index of 2nd largest

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ; 
    cout<<"enter sie of the array = ";
    cin>>n;
    int arr[n];
    cout<<"enter array "<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int current_max_index = 0,second_max_index=-1;

    for (int i = 0 ; i< n;i++)
    {
        if(arr[i]>arr[current_max_index])
        {
            second_max_index = current_max_index;
            current_max_index = i;
        }


        //SHOULD HAVE A LOOK , FACED PROBLEM 1ST TIME

        //THIS IS THE CASE WHERE WE HANDLE "if we have a duplicate of the largest" and when largest comes before 2nd largest
        
        else if(arr[i] < arr[current_max_index])
        {
            if(second_max_index==-1 || arr[i]>arr[second_max_index])
            {
                second_max_index = i;
            }
        }
    }
    cout<<"index of 2nd largest "<<second_max_index;



    
}