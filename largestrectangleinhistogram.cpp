# DSAone
#include "bits/stdc++.h"
using namespace std;                    
int main()         //largest rectangle in histogram
{           
    int n;       //first method (brute force)
    cin>>n;
    vector<int>a(n);  //element of array represents height of rectangle
    for(auto &i:a) //each rectangle have width=1
    {
        cin>>i;
    }          
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int minh=INT_MAX;
        for(int j=i;j<n;j++)
        {
            minh=min(a[i],minh);
            int len=j-i+1;
            ans=max(ans,len*minh);
        }
    }
    cout<<ans;

    return 0;
}
