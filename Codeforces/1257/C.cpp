#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,x,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n+1];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        int pos[n+1];
        memset(pos,-1,sizeof(pos));
        ans=n+1;
        x=0;
        for(i=0; i<n; i++)
        {
            if(pos[arr[i]]==-1)
            {
                pos[arr[i]]=i;
            }
            else
            {
                x=i-(pos[arr[i]]);
                ans=min(ans,x);
                pos[arr[i]]=i;
            }
        }
        if(ans<n)
        {
            cout<<ans+1<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
