#include <sstream>
#include<bits/stdc++.h>
#include <ctime>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>pbds;  // *variable.find_by_order(value) => will give value at that index
typedef tree<int,null_type,greater<int>,rb_tree_tag,tree_order_statistics_node_update>pbdsgreater; // variable.order_of_key(value) => total no of element less than value
typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update>pbdsmultiset;  // *variable.lower_bound(value) , *variable.upper_bound(value)

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);

#define int long long
#define db long double

#define minpqint priority_queue<int, vector<int>, greater<int>>
#define minpqpi priority_queue<pi,vpi,greater<pi>>
#define maxpqint priority_queue<int>
#define maxpqpi priority_queue<pi> 

#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" ";_print(x); cerr<<endl;
#else
#define debug(x)
#endif

void _print(int a){cerr<<a;}
void _print(char a){cerr<<a;}
void _print(string a){cerr<<a;}
void _print(bool a){cerr<<a;}
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template<class T> void _print(vector<T> v){cerr<<"[";for(T i:v){_print(i);cerr<<" ";}cerr<<"]";}
template<class T> void _print(set<T> s){cerr<<"[";for(T i:s){_print(i);cerr<<" ";}cerr<<"]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

int dx4[] = {-1,0,1,0};
int dy4[] = {0,1,0,-1};
// int dx4[] = {0, 1, 0, -1};// acc to question west->south->east->north 
// int dy4[] = {-1, 0, 1, 0};// acc to question west->south->east->north
// int change[] = {2,3,0,1};// acc to question west->south->east->north
int dx8[] = {-1,-1,0,1,1,1,0,-1};
int dy8[] = {0,1,1,1,0,-1,-1,-1};
string dir = "URDL";

const int mod = 1e9+7;;
const int modl = 1e18;
const int inf = 1e9+7;
const int infn = -1e9+7;

int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
int gcd(int a, int b) { if (b == 0) return a; return gcd(b, a % b);}
int power(int base,int n,int mod) {int ans =  1; while(n>0){if(n%2==0){n/=2;base = mod_mul(base,base,mod);}else{ans = mod_mul(ans,base,mod); n--;}} return ans;}


//fuction overloading
class Geeks {
public:
    // Function with 1 int parameter
    void func(int x)
    {
        cout << "value of x is " <<x << endl;
    }
    // Function with same name but
    // 1 double parameter
    void func(double x)
    {
        cout << "value of x is " <<x << endl;
    }
    // Function with same name and
    // 2 int parameters
    void func(int x, int y)
    {
        cout << "value of x and y is " <<x << ", " << y << endl;
    }
};

signed main()
{
  fio;
  #ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);  
  #endif
    // try to use map,set instead of unordered_map,set in cf....
    srand(time(NULL));
    Geeks obj1;
 
    // Function being called depends
    // on the parameters passed
    // func() is called with int value
    obj1.func(7ll);
 
    // func() is called with double value
    obj1.func(9.132);
 
    // func() is called with 2 int values
    obj1.func(85, 64);
  return 0;
}