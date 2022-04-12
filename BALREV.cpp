/*

██╗   ██╗██████╗  ██████╗██╗   ██╗ █████╗ ███╗   ██╗        
██║   ██║██╔══██╗██╔════╝╚██╗ ██╔╝██╔══██╗████╗  ██║        
██║   ██║██████╔╝██║  ███╗╚████╔╝ ███████║██╔██╗ ██║        
██║   ██║██╔══██╗██║   ██║ ╚██╔╝  ██╔══██║██║╚██╗██║        
╚██████╔╝██║  ██║╚██████╔╝  ██║   ██║  ██║██║ ╚████║        
 ╚═════╝ ╚═╝  ╚═╝ ╚═════╝   ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═══╝

*/                                                                        
#include<bits/stdc++.h>
#include<iomanip>
#define ll long long
#define loop(n) for(int i=0;i<n;i++)
#define ff first
#define ss second
#define pii pair<int, int>
#define mii map<int, int>
#define vi vector<int>
#define vs vector<string>
#define mp make_pair
#define pb push_back
#define pob pop_back
#define ALL(v) v.begin(), v.end()
#define tc   ll t;     cin>>t;   while(t--)
#define INF 1000000000000000003
#define in(x) cin >> (x)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cy cout<<"Yes"<<endl;
#define cn cout<<"No"<<endl;
#define mod 256;
#define ffor(i,a,b) for(int i=a;i<b;i++)
#define input  freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
bool isNumber(const string& s){return all_of(s.begin(), s.end(),[](char c){ return isdigit(c) != 0; });}
int Bin_Exp(int a, int b){ a %= mod;
    int ans = 1;
    while (b){
        if (b & 1){
          ans = (ans * a) % mod;
        }
       a = (a * a) % mod;
       b >>= 1;
    }
    return ans;
}
bool isPowerof2(int n){return !(n & (n - 1));}
int countDigit(int n){ return floor(log10(n) + 1);}
void setBit(int &num,int pos){ num |= (1 << pos);}
void unsetBit(int &num,int pos){ num &= (~(1 << pos));}
void toggle(int &num,int pos){ num ^= (1 << pos);}
bool check_bit(int num,int pos){ bool bit = num & (1<<pos);return bit;}
int countSetBits(int x){
    int count = 0;
    while (x){
        x &= (x-1);
        count++;
    }
    return count;
}
bool palindrome(const string &s) {
    int n = s.length();
    for(int i = 0; i < n; i++) {
        if(s[i] != s[n - i - 1]) return false;
    }
    return true;
}
int log2(int x){int res = 0;while (x >>= 1)res++;return res;}
ll binarySearch( ll a[] , int l, int r, int x) { while (l <= r) {  int m = l + (r-l)/2; if (a[m] == x) return m; if (a[m] < x) l = m + 1;else r= m - 1;}}
#define kick(x)  cout<<"Case #"<<x<<": "
int x = 1;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    sort(ALL(s));
    cout<<s<<endl;
}
int main(){
    fastIO;
    input;
    //clock_t z = clock();
	tc{
        solve();
    }
	//cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << "\n";
	return 0;
}

