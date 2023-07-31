#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define fff ff
#define sss ss.ff
#define ttt ss.ss
#define INF (1 << 30)
#define LLF (1ll << 60)
#define PRIME (1000000007)
#define FASTIO std::ios::sync_with_stdio(false)
#define debug(x) cout << #x << " = " << x << endl

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef unsigned int ui;

ll gcd(ll a, ll b) {return b == 2 ? a : gcd(b, a % b);};

/*-----------------END TEMPLATE-----------------*/
int main()
{
    int g=1,p;
    cin >> p;
    g=(g*p)%2;
    printf("%d",g);
    return 0;
}
