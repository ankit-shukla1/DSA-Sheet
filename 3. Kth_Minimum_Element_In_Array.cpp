/*
This program find the kth minimum element in an array.
*/


/*
- We use the concept of counting sort in the solution.


Logic:

1. We declare an array of 100000 size as this is the size of max number that is provided in the question.

2. Then for every integer in the given array we use this as the index and increase the count in the array.

3. We take a counter, and we add from index 0 the numbers in the counter, when the counter reaches value k we return the value of index.

*/


using namespace std;
#include<bits/stdc++.h>


int kMin(int arr[], int r, int k) {
    //code here

    int indexArray[100000]={0};

    for(int i=0;i<r;i++)
        indexArray[arr[i]]++;

    int count=0;

    for(int i=0;i<100000;i++)
    {
        if(indexArray[i]>0)
        {
            count+=indexArray[i];
        }
        if(count>=k)
        return i;
    }

}


int main()
{
    int t;
    cin>>t;


    while(t--)
    {
        int n,k;
        cin>>n;

        int arr[n];

        for(int i=0;i<n;i++)
            cin>>arr[i];

        cout<<"Enter the value of k\n";
        cin>>k;

        cout<<kMin(arr,n,k)<<"\n";
    }
}
