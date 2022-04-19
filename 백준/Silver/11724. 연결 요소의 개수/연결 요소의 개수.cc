#include <iostream>
#include <vector>
#define endl "\n"
#define pb push_back

using namespace std;

int check[1001];
vector<int> tree[1001];

void dfs(int a){
	check[a] = 1;
	for(int i = 0; i < tree[a].size(); i++){
		if(check[tree[a][i]] != 1){
			dfs(tree[a][i]);
		}
		else continue;
	}

}

int main(){
	int n, m;
	int ans = 0;
	cin >> n >> m;

	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;

		tree[x].pb(y);
		tree[y].pb(x);
	}

	for(int i = 0; i < n; i++){
		if(!check[i+1]){
			dfs(i+1);
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
