/*
This program solves the problem of finding the maximum and minimum in an array by comparing in pairs.
*/


/*
Logic:

1. First check if the number of elements in array is odd or even.
2. If even then : compare first and second elements and assign min and max accordingly.
    If odd then : assign the first element as min and max.

3. Then compare the elements in pair so and increase the iterator by 2 so that total
   number of comparisons are reduced.


The total number of comparisons using this method is :-

When Even number of elements  :   1 + (3*(n-2))

When Odd number of elements   :   3*(n-2)
*/


using namespace std;
#include<bits/stdc++.h>


struct Result{              // using structure as we have to return 2 integers simultaneously.
    int max;
    int min;
};




Result findMinMax(int arr[],int n)
{
    Result temp;
    int i;

    if(n%2==0)               // Checking if total number of elements are odd or even.
    {
        if(arr[0]>arr[1])            // Assigning max and min accordingly.
        {
            temp.max=arr[0];
            temp.min=arr[1];
        }
        else
        {
            temp.max=arr[1];
            temp.min=arr[0];
        }
        i=2;                 // Assigning i=2 as comparisons should start from 3rd element now.
    }
    else
    {
        temp.max=arr[0];
        temp.min=arr[0];
        i=1;                // Assigning i=1 as comparisons should start from 2nd element now.
    }

    for(;i<n-1;i+=2)             // increasing the iterator by 2 as we have to compare in pairs.
    {
        if(arr[i]>arr[i+1])
        {
            if(arr[i]>temp.max)
                temp.max=arr[i];
            if(arr[i+1]<temp.min)
                temp.min=arr[i+1];
        }                                              // Total 3 comparisons are made per iteration.
        else
        {
            if(arr[i]<temp.min)
                temp.min=arr[i];

            if(arr[i+1]>temp.max)
                temp.max=arr[i+1];
        }
    }

    return temp;


}




int main()
{
    int t;       // the number of test cases;
    cin>>t;

    while(t--)
    {
        int n;        // the number of elements in array.
        cin>>n;

        int arr[n];

        for(int i=0;i<n;i++)            // Enter the elements.
            cin>>arr[i];


         Result ans = findMinMax(arr,n);
         cout<<"Maximum is : "<<ans.max<<"\n";
         cout<<"Minimum is : "<<ans.min<<"\n";
    }
}
