  /*
                              ॐ नमो नारायणाय
  
                              ॐ नमः शिवाय
  
                              ॐ हरे कृष्ण
  */
  #include <bits/stdc++.h>
  #ifndef ONLINE_JUDGE
  #include <E:\c++\debug.h>
  #else
  #define debug(x...)
  #endif
  #include <ext/pb_ds/assoc_container.hpp>
  #include <ext/pb_ds/tree_policy.hpp>
  using namespace std;
  using namespace __gnu_pbds;
  typedef long long ll;
  typedef unsigned long long llu;
  typedef long double ld;
  using vll = vector<ll>;
  using vii = vector<int>;
  using pll = pair<ll, ll>;
  using ll = long long int;
  using pii = pair<int, int>;
  using ull = unsigned long long int;
  typedef tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
  //=============Typedefines=============//
  #define        nn           "\n"
  #define        F            first
  #define        S            second
  #define        pi           acos(-1.0)
  #define        MOD          1000000007
  #define        inf          1<<30 //2^30
  #define        pb           emplace_back
  #define        no           cout<<"NO"<<nn;
  #define        yes          cout<<"YES"<<nn;
  #define        all(a)       a.begin(),a.end()
  #define        SORT(a)      sort(a.begin(),a.end()) 
  #define        FILL(a,n)    fill(a.begin(),a.end(),n) 
  #define        FIND(a,n)    find(a.begin(),a.end(),n) 
  #define        REVERSE(a)   reverse(a.begin(),a.end()) 
  #define        REPLACE(a,n) replace(a.begin(),a.end(),n) 
  #define        maximum(a)   *max_element(a.begin(),a.end()) 
  #define        minimum(a)   *min_element(a.begin(),a.end()) 
  #define        un(x)        x.erase(unique(all(x)), x.end())
  #define        next_permutation(a) next_permutation(a.begin(),a.end()) 
  #define        _00_         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

  //=============Functions===============//
  inline int countBit(ll n) { return __builtin_popcountll(n); }
  inline int setBit(int n,int pos) { return n = n | (1 << pos); }
  inline int resetBit(int n,int pos) { return n = n & ~(1 << pos); }
  inline bool checkBit(int n,int pos) { return (bool)(n & (1 << pos)); }
  ll To_int(string str) {stringstream ss(str); ll x = 0; ss >> x ; return x ;}
  bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
  string decToBinary(int n){string s="";int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
  template<typename T>T gcd(T a, T b) {if (a < 0)return gcd(-a, b); if (b < 0)return gcd(a, -b); return (b == 0) ? a : gcd(b, a % b);}
  template<typename T>T lcm(T a, T b) {if (a < 0)return lcm(-a, b); if (b < 0)return lcm(a, -b); return a * (b / gcd(a, b));}
  ll bigmod(ll a, ll p,ll m){ll res = 1;ll x = a; while (p){if (p & 1){res = (res * x) % m;}x = (x * x) % m;p = p >> 1;} return res;}
  ll powermod(ll x, ll y, ll p){ll res=1;x=x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}
  ll binaryToDecimal(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}

  const int d4i[4] = {-1, 0, 1, 0};
  const int d4j[4] = {0, 1, 0, -1};
  const int d8i[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
  const int d8j[8] = {0, 1, 1, 1, 0, -1, -1, -1};
  const int dxk[8] = {2, 1, -1, -2, -2, -1, 1, 2};
  const int dyk[8] = {1, 2, 2, 1, -1, -2, -2, -1}; // Knight Direction (horse)

  void input()
  {
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  };
  class TrieNode
  {
  public:
    TrieNode *next[10];
    bool isTerminal;
    ll cnt;
    TrieNode()
    {
      cnt = 0;
      isTerminal = false;
      for (int i = 0; i < 10; i++)
        next[i] = NULL;
    }
  } * root;
  bool insert(string &str, int len)
  {
    TrieNode *curr = root;
    for (int i = 0; i < len; i++)
    {
      int id = str[i] - '0';
      if (curr->next[id] == NULL)
        curr->next[id] = new TrieNode();
      curr = curr->next[id];
      if (curr->isTerminal == true)
        return true;
      curr->cnt++;
      // debug(curr->cnt);
    }
    curr->isTerminal = true;
    if(curr->cnt>1)
    return true;
    return false;
  }
void del(TrieNode* cur)
{
    for (int i = 0; i < 10; i++)
        if (cur->next[i])
            del(cur->next[i]);
    delete (cur);
}
  int32_t main()
  {
    _00_
        cin.exceptions(ios::badbit | ios::failbit);
    // input();
    ll t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
      cout << "Case " << tc << ": ";
      root = new TrieNode();
      ll n;
      cin >> n;
      bool flag = false;
      while (n--)
      {
        string s;
        cin >> s;
        if (!flag)
          flag = insert(s, s.size());
      }
      if (!flag)
        cout << "YES" << nn;
      else
        cout << "NO" << nn;
        del(root);
    }
    return 0;
  }
  /* stuff you should look for
   * int overflow, array bounds
   * special cases (n=1?)
   * do something instead of nothing and stay organized
   * WRITE STUFF DOWN
   * DO NOT GET STUCK ON ONE APPROACH
   */