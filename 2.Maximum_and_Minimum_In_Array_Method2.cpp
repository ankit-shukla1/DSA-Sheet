/*
This program solves the problem of finding the maximum and minimum in an array using simple linear method.
*/


/*
Logic:

1. If total number of elements=1, then return this element as min and max both.

2. Else

        -Assign the min and max accordingly from the first and second element.

        -Now from 3rd element compare each element from min and max, assign accordingly.



- Total number of comparisons in worst case is : 1 + 2(n-2)   (Array is sorted in descending order.)
- "      "      "    "         " best case is  : 1 + n-2      (Array is sorted in ascending order.)

*/




using namespace std;
#include<bits/stdc++.h>


struct Result{              // using structure as we have to return 2 integers simultaneously.
    int max;
    int min;
};




Result findMinMax(int arr[],int n)
{
    Result ans;

    if(n==1)
    {
        ans.max=arr[0];
        ans.min=arr[0];
    }

    if(arr[0]>arr[1])
    {
        ans.min=arr[1];
        ans.max=arr[0];
    }
    else{
        ans.max=arr[1];
        ans.min=arr[0];
    }

    for(int i=2;i<n;i++)
    {
        if(arr[i]>ans.max)
            ans.max=arr[i];
        else if(arr[i]<ans.min)
            ans.min=arr[i];
    }

    return ans;
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
