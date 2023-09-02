 #include <bits/stdc++.h>
using namespace std;
#define int long long
#define pmx push_mxack
#define no cout<<"No"<<endl;
#define yes cout<<"Yes"<<endl;
#define neg cout<<-1<<endl;
#define rine cout<<endl;
int mod = 1e9+7;

int test;

void solve()
{
    string s;
    stack<char>stk;
    map<char,int>mp;

    cin>>s;
    stk.push(s[0]);
    for(int i=1; i<s.size(); i++)
    {
        if(stk.top() == s[i]) stk.pop();
        else
        {
            mp[stk.top()]++;
            mp[s[i]]++;
            stk.push(s[i]);
        }
    }
    printf("Case %d\n",test);
    for(auto it=mp.begin(); it != mp.end(); it++)
    {
        printf("%c = %d\n",it->first,it->second);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for(test=1; test<=t; test++)
    {
        solve();
    }
}

