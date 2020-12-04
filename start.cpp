#include <vector>
#include <cmath>
#include <algorithm>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <string>
#include <cassert>
#include <unordered_map> 
using namespace std;

// macro for data structure
typedef long long ll;
typedef long long LL;
typedef pair<int,int> pii;
typedef vector<int> vec;
typedef vector<vector< int > > mat;

// macro for loop
#define forup(i,a,b) for(int i=a; i<b; ++i)
#define fordn(i,a,b) for(int i=a; i>b; --i)

#define rep(i,a) for(int i=0; i<a; ++i)
 
#define dforup(i,a,b) for(i=a; i<b; ++i)
#define dfordn(i,a,b) for(i=a; i>b; --i)                               
#define drep(i,a) for(i=0; i<a; ++i)
 
 // macro to take input
#define gi(x) scanf("%d",&x)
#define gll(x) cin>>x
#define gd(x) scanf("%lf",&x)
#define gs(x) scanf("%s",x)
 
 // macro to take print
#define pis(x) printf("%d ",x)
#define pin(x) printf("%d\n",x)
#define pls(x) cout<<x<<" "
#define pln(x) cout<<x<<"\n"
#define pds(x) printf("%.12f ",x)
#define pdn(x) printf("%.12f\n",x)
#define pnl() printf("\n")

#define fs first
#define sc second
#define pb push_back

void p_vec(vector <int> &arr){
    for (int i = 0 ;i < arr.size(); i++ )
        cout<<arr[i]<<" ";
    cout<<endl;
    return;
}
void p_mat(vector < vector < int> > &arr){
    for (auto i: arr){
       for (auto j: i)
           cout<<j<<" ";
       cout<<endl; 
    }
    return;
}
const int infi = INT8_MAX;
const int mod = 1000000007;
const int inv=1000000000;
const int minv=-inv;
const int max_n=200000+5;
bool cmp(const vector<int> &a,const vector<int> &b) 
{ 
    if (a[0] == b[0])
        return a[1]>b[1];
	return a[0]<b[0]; 
} 
void solve(){
//    int n;
}

int main()
{
    int test = 1;
   for (int i = 0;i<test;i++){
       solve();
   }

}
