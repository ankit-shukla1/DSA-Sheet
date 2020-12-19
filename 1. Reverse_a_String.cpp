// This program reverses an string;


/*
Logic :

Find the length of string and initialize two counter start and last as 0 and length-1 respectively.
Start swapping the characters at start and last.
Increase start and decrease last.

*/


using namespace std;
#include<bits/stdc++.h>


string reverseString(string s)
{
    int last = s.length()-1,start=0;
    while(start<last)
    {
       swap(s[start],s[last]);
       start++;
       last--;
    }

    return s;
}

int main()
{
    int t;
    cin>>t;         // The number of test cases.

    while(t--)
    {
        string s;
        cin>>s;

        cout<<reverseString(s)<<"\n";
    }
}
