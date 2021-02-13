#include<bits/stdc++.h>
using namespace std;

void sortBinaryArray(vector<int>& v)
{
    int zp=0,op=0,tp=v.size()-1;

    while(op<=tp)
    {

        switch(v[op])
        {
        case 0:

            swap(v[op],v[zp]);
            op++;
            zp++;
            break;
        case 1:

            op++;
            break;
        case 2:

            swap(v[op],v[tp]);
            tp--;
            break;
        }
    }



}


int main()
{
    vector<int> v = {2,1,0,1,0,2};
    sortBinaryArray(v);

    for(int i=0; i<v.size();i++)
        cout<<v[i]<<" ";

    return 0;
}

















