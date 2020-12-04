
// Sample code to perform I/O:

#include <iostream>
#include <vector>
using namespace std;

int max_n = 100000 +4; 
vector<int> visited(max_n,0);
vector<int> is_ssc(max_n,0);
vector<int> dum;
vector<int>dfs_stack;

void dfs(int node,vector< vector< int> > &grid ){
	if (visited[node] ==1)
		return;
	visited[node] = 1;
	for(auto child: grid[node]){
		dfs(child,grid);
    }
	dfs_stack.push_back(node);
	return;
}
int main() {
	// cout<<"start";
	int n,m;
	cin>>n>>m;
	// cout<<n<<" "<<m;
	// cout.flush();
	vector< vector< int> > grid(n,dum);
	vector< vector< int> > r_grid(n,dum);
	for (int i = 0;i<m;i++){
		int a,b;
		cin>>a>>b;
		grid[a-1].push_back(b-1);
		r_grid[b-1].push_back(a-1);
		// cout<<"d";
	}
	// cout<<" fionrof";
	for (int i = 0;i<n;i++){
		dfs(i,grid);
	}
	// for(auto i :dfs_stack )
	// 	cout<<i<<" ";
	for (int i = 0;i<n;i++){
		visited[i] = 0;
	}
	vector<int> dfs_main = dfs_stack;
	for (int i = dfs_main.size() - 1;i>=0;i--){
		if (visited[dfs_main[i]] == 1)
			continue;
		dfs_stack= dum;
		dfs(dfs_main[i],r_grid);
		if (dfs_stack.size() == 1){
			continue;
		}
		for(auto j:dfs_stack ){
			is_ssc[j] = 1;
		}
	}

	for (int i = 0;i<n;i++){
		cout<<is_ssc[i]<<" ";
	}
	return 0;





}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
