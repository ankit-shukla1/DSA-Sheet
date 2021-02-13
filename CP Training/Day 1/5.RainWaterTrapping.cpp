#include<bits/stdc++.h>
using namespace std;

int rainWater(const vector<int>& v)
{
    vector<int> lMax(v.size());
    vector<int> rMax(v.size());
    lMax[0]=lMax[0];
    rMax[v.size()-1] = rMax[v.size()-1];

    for(int i=0; i<v.size(); i++)
    {
        lMax[i]=max(v[i])
    }
}


int main()
{
    return 0;
}
