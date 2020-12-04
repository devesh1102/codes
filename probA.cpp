// ######################################################

// ######################################################
// ############Created by Devesh Kumar###################
// #############devesh1102@gmail.com####################
// ######################################################
 
// ######################################################

// clang++ -std=c++14 probA.cpp

// library

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
template <class T> 

void p_vec(T &arr){
    for (int i = 0 ;i < arr.size(); i++ )
        cout<<arr[i]<<" ";
    cout<<endl;
    return;
}

template <class T> 
void p_mat(T &arr){
    for (auto i: arr){
       for (auto j: i)
           cout<<j<<" ";
       cout<<endl; 
    }
    return;
}

template <class T> 
void p_wt_mat(T &grid){
    for (auto i: grid){
       for (auto j: i)
           cout<<"("<<j.first<<" "<<j.second<<")";
       cout<<endl; 
    }
    return;
}

const int infi = INT_MAX;
const int mod = 1000000007;
const int inv=1000000000;
const int minv=-inv;
const int max_n=200000+5;

int b[max_n];
vector<int> chl[max_n];
 
int depth[max_n];
LL res;
vector<int> sol;
vector<pii> q;
bool used[max_n];
set<pii,greater<pii> > Sdec;
set<pii,greater<pii> >::iterator it;





bool cmp(const vector<int> &a,const vector<int> &b) 
{ 
    if (a[0] == b[0])
        return a[1]>b[1];
	return a[0]<b[0]; 
} 
int l_max = 1000;

// vector<int> arr(l_max,0);
// vector<int> dp(l_max,0);
// vec ini;
// mat grid;
// vec people;

void solve(){

}
vec arr;
int find_gcd(int a,int b){
    if (b%a ==0)
        return a;
    return find_gcd(b%a,a);
}
vector<int> updater(vec &arr){
    vector<int> result;
    int gcd = arr[0];
    for(auto i:arr){
        if (i>gcd)
            gcd = find_gcd(gcd,i);
        else
            gcd = find_gcd(i,gcd);

    }
    for (auto i:arr){
        result.push_back(i/gcd);
    }
    return result;
}
int helper(vec &arr){
    p_vec(arr);
    int n = int(arr.size());
    int flag = 0;
    int excess = 0;
    int gcd = arr[0];
    for(auto i:arr){
        if (i==1)
            flag = 1;
        excess = excess + i- 1;
    }
    // for(int )
    // vector<int> dum;
    if (flag == 1){
        return excess%2;
    }
    // for (int i = 0;i<n;i++ ){
    //     dum.append(arr[i]/gcd);
    // }
    for(int i = 0;i<n;i++){
    
        arr[i] = arr[i] -1;
        if (i!= 0 && arr[i-1] == arr[i]){
            arr[i]++;
            continue;
        }
        vector<int>dum = updater(arr);
        if (helper(dum) == 0)
            return 1;
        arr[i] = arr[i] +1;
    }
    return 0;

}
    

// This is a test\n
// this is second line \n
// this is last line \n
// This is final line \n


// curr = \n 
void tail(char *filename, int n){

    file *start = open(filename);
    ulong size = fsize(filename);
    file *last = seek (filename, size - 1);
    string curr = "";

    int itr = 1;
    while(n>0){
        char a[0];
        int is_empty = read (last, 1, a);
        last = seek(filename, size - 1 -itr)
        itr++;

        if (is_empty == 0){
            break;
        }
        while(1){
            curr = curr + a[0];
            int is_empty = read (last, 1, a);
            if (is_empty == 0){
                break;
            }
            if (a[0] == '\n'){
                break;
            }
        }
        cout<<reverse(curr);
        curr = "\n";
        n--;
    }
    

int main()
{
    int n;
    cin>>n;
    for (int i = 0;i<n;i++){
        int dum;
        cin>>dum;
        arr.push_back(dum);
    }
    cout<<helper(arr);
    // vec ini (n,0);
    // mat grid
}



// int main()
// {
//     int tests = 1;
//     // cin>>tests;
//     for(int i =0;i<tests;i++){
//         solve();    }
// }
