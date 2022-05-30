#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,i,j;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;

        if(x==y)
        {
            cout<<"YES"<<endl;
        }
        else if(x==1 && y!=1)
        {
            cout<<"NO"<<endl;
        }
        else if(x==2 && y>3)
        {
            cout<<"NO"<<endl;
        }
        else if(x>3)
        {
            cout<<"YES"<<endl;
        }
        else if(x<=3 && y<4)
        {
            cout<<"YES"<<endl;

        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
