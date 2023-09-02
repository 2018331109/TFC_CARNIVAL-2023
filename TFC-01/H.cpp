 #include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define no cout<<"No"<<endl;
#define yes cout<<"Yes"<<endl;
#define neg cout<<-1<<endl;
#define line cout<<endl;
int mod = 1e9+7;

void solve( )
{

    int p1, p2, q1, q2;
    cin >> p1 >> p2 >> q1 >> q2;

    double p = static_cast<double>(p1) / p2;
    double q = static_cast<double>(q1) / q2;

    double result = p / (1 - (1 - p) * (1 - q));

    cout << fixed << setprecision(12) << result << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
}

