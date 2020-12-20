/*
This program sorts an array of 0,1,2 without using any sorting algorithm.
*/


/*
Logic :

1. Using three counters count0, count1, count2 we will count the number of 0s, 1s and 2s.
2. After that we start filling the array .

    First we fill the count0 zeroes and then count1 1s and then count2 2s.

*/

using namespace std;
#include<bits/stdc++.h>

void sort012(int arr[],int n)
{
        int count0=0,count1=0,count2=0;


    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            count0++;

        else if(arr[i]==1)
            count1++;

        else
            count2++;

    }

    int index=0;

    while(count0--)
        arr[index++]=0;

    while(count1--)
        arr[index++]=1;

    while(count2--)
        arr[index++]=2;
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

        sort012(arr,n);

        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";

        cout<<"\n";
    }
}
