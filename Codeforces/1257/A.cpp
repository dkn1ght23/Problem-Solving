#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,x,a,b;
        cin >>n>>x>>a>>b;
        int cnt=0;
        int l=min(a,b);
        int i=l;
        while(i>1 && cnt<x)
        {
            cnt++;
            i--;
        }
        int h=max(a,b);
        int j=h;
        while(j<n && cnt<x)
        {
            cnt++;
            j++;
        }
        cout<<abs(i-j)<<endl;
    }
    return 0;
}
