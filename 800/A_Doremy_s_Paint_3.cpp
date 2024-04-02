#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, false, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define mod 1000000007
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

void solve() {
    int n; 
    cin>>n;
    unordered_map<int,int>umap;
    for(int i = 0; i < n; i++) {
        int x;
        cin>>x;
        umap[x]++;
    }
    if(umap.size() > 2) {
        cout<<"No"<<endl;
        return;
    }
    else {
        if(umap.size() == 1) {
            cout<<"Yes"<<endl;
            return;
        }
        else {
            vector<int>temp;
            for(auto it : umap) {
                temp.push_back(it.second);
            }
            int val = 0;
            for(int i = 0; i < temp.size()-1; i++) {
                val = abs(temp[i] - temp[i+1]);
            }
            if(val <= 1) {
                cout<<"Yes"<<endl;
                return;
            }
            else {
                
            }
        }
    }
    cout<<"No"<<endl;
    return;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        //write code here
        solve();
    }
    return 0;
}