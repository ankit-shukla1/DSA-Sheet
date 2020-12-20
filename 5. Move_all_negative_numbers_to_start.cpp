/*
The program moves all the negative numbers of the array to the start order is not important.
*/


/*
Logic:

- We maintain a pointer j which keeps the count of negative elements in the left side.

- As soon as we find a negative element if the j pointer is not equal to i pointer then we swap the elements and increase the j pointer.

*/


using namespace std;
#include<bits/stdc++.h>

void moveNegative(int arr[],int n)
{
    int j=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            if(i!=j)
                swap(arr[i],arr[j]);
            j++;
        }
    }
}


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int arr[n];

        for(int i=0;i<n;i++)
            cin>>arr[i];

        moveNegative(arr,n);

        for(int i=0;i<n;i++)
            cout<<arr[i]<<"\n";

        cout<<"\n";
    }
}
