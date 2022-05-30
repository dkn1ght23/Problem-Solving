#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int cnt=0;
        int sum=0;
        int temp=0;
        for(i=0; i<str.size(); i++)
        {
            int x=str[i]-'0';
            if(x%2==0 && x!=0)
            {
                temp=1;
            }
            if(str[i]=='0')
            {
                cnt++;
            }
            sum+=x;
        }

        if(cnt>=1 && sum%3==0 && temp==1)
        {
            cout<<"red"<<endl;
        }
        else if(cnt>1  && sum%3==0)
        {
            cout<<"red"<<endl;
        }
        else
        {
            cout<<"cyan"<<endl;
        }
    }
    return 0;
}
