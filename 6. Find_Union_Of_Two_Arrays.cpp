/*
This programs finds the union of two arrays.
*/

// Problem Link: https://practice.geeksforgeeks.org/problems/union-of-two-arrays/0


/*
Logic:

1. In the program, we take the inputs into an unordered set which only allows unique elements.

2. Putting the elements of both arrays into set removes the duplicate that might occur in the arrays.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;


    while(t--)
    {
        int n,m;
        cin>>n>>m;

        unordered_set<int> s;

        for(int i=0;i<n+m;i++)
        {
            int a;
            cin>>a;

            s.insert(a);
        }

        cout<<s.size()<<"\n";
    }
	return 0;
}
