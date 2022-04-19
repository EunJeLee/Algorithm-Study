#include <iostream>

using namespace std;

int check = 100000000;
int N, M, ans;
int friend1[101][101];
int d[101][101];
long long int shortdis[101];



void FloydWarshall(){
  for(int k = 1; k <= N; k++)
  for(int i = 1; i <= N; i++)
  for(int j = 1; j <= N; j++){
    if(d[i][k] + d[k][j] < d[i][j]){
      d[i][j] = d[i][k] + d[k][j];
    }
  }
}

int main(){
  cin >> N >> M;

  for(int i = 0; i < M; i++){
    int a, b;
    cin >> a >> b;
    friend1[a][b] = friend1[b][a] = 1;
  }

  for(int i = 1; i <= N; i++)
  for(int j = 1; j <= N; j++){
    if(friend1[i][j] == 0 && i != j)friend1[i][j] = 100000;
    d[i][j] = friend1[i][j];
  }

  FloydWarshall();

  for(int i = 1; i <= N; i++)
  for(int j = 1; j <= N; j++){
    shortdis[i] = shortdis[i] + d[i][j];
    }

  for(int i = 1; i <= N; i++){
    if(check > shortdis[i]){
      ans = i;
      check = shortdis[i];
    }
  }

  cout << ans << "\n";

  return 0;
}
