#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")

#include <bits/stdc++.h>
using namespace std;
#define TASK "DMT"
#define MOD 1000000007
#define pb push_back
#define F first
#define S second
#define forr(i,a,b) for(int i = (a); i < (b); i++)
#define ford(i,a,b) for(int i = (a); i > (b); i--)
#define Fod(i,a,b) for(int i = (a); i >= (b); i--)
#define For(i,a,b) for(int i = (a); i <= (b); i++)
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
    int t;
    cin >> t;
    while(t--){
    int a,b;cin >> a >> b;
    int dem =0;
    For(i, a, b){
    if(i % 3 != 0) continue;

    int cnt = 0;
    for(int j = 1; j * j <= i; j++){
        if(i % j == 0){
            cnt++;
            if(j != i / j) cnt++;
        }
    }
    if(cnt == 9) dem++;
}

    cout << dem << endl;
    }
    
    return 0;
}