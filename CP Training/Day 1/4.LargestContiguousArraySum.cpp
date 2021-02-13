#include<bits/stdc++.h>
using namespace std;

int largestSumSubarray(const vector<int>& v)
{
    int curr_sum=v[0],max_sum=v[0];

    for(int i=1;i<v.size();i++)
    {
        curr_sum = max(curr_sum+v[i],v[i]);
        max_sum = max(max_sum, curr_sum);
    }

    return max_sum;
}

int main()
{
    vector<int> v = {1,-5,3,4,6,-7};

    int ans = largestSumSubarray(v);
    cout<<ans;

    return 0;
}
