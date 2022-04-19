#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int apartment[27][27] = {0};
bool check[27][27] = {0};
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int count1 = 0;
vector<int> solve;


void dfs(int x, int y){
  check[x][y] = true;
  count1++;
  for(int i = 0; i < 4; i++){
    if(!check[x+dx[i]][y+dy[i]] && apartment[x+dx[i]][y+dy[i]] == 1){
      dfs(x+dx[i],y+dy[i]);
    }
  }
}

int main(){
  int n, temp;
  int c = 0;
  scanf("%d",&n);

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      scanf("%1d", &temp);
      apartment[i+1][j+1] = temp;
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0 ; j < n; j++){
      if(!check[i+1][j+1] && apartment[i+1][j+1] == 1){
        dfs(i+1,j+1);
        solve.push_back(count1);
        count1 = 0;
        c++;
      }
    }
  }
  sort(solve.begin(), solve.end());
  printf("%d\n", c);
  for(int i = 0; i < solve.size(); i++){
    printf("%d\n",solve[i]);

  }

}
