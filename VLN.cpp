#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
#include <bits/stdc++.h>
using namespace std;
#define TASK "VLN"
#define MOD 1000000007
#define pb push_back
#define F first
#define S second
#define forr(i,a,b) for(int i = (a); i < (b); i++)
#define MIN(v) (*min_element((v).begin(), (v).end()))
#define MAX(v) (*max_element((v).begin(), (v).end()))
#define SORT(v) sort((v).begin(), (v).end())
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef map<int,int> mp;
typedef unsigned long long ull;
typedef double db;
typedef unordered_map<int,int> ump;
typedef unordered_map<char,int> cump;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    if (fopen(TASK ".INP", "r")) {
        freopen(TASK ".INP", "r", stdin);
        freopen(TASK ".OUT", "w", stdout);
    }
    vi v;
    int n,k;cin >>n >>k;
    forr(i,0,n){
        int x;cin >>x;
        v.pb(x);
    }
    int x = k / 3;
    int cnt=-1;
    forr(i,0,n){
        int l = max(0, i - x);
        int r = min(n - 1, i + x);

        int maxx =0;
        forr(j,l,r + 1){
            maxx += v[j];
        }
        cnt = max(cnt,maxx);
    }
    cout << cnt;
    
    return 0;
}