#include <iostream>

using namespace std;

int relat[101][101];
int d[101][101];
bool check = true;
int N, K;

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
  cin >> N >> K;

  for(int i = 0; i < K; i++){
    int a, b;
    cin >> a >> b;
    relat[a][b] = relat[b][a] = 1;
  }
  for(int i = 1; i <= N; i++)
  for(int j = 1; j <= N; j++){
    if(relat[i][j] == 0 && i != j){
      relat[i][j] = 999;
    }
    d[i][j] = relat[i][j];
  }

  FloydWarshall();

  for(int i = 1; i <= N; i++)
  for(int j = 1; j <= N; j++){
    if(d[i][j] > 6){
      cout << "Big World!" << "\n";
      return 0;
    }
  }

  cout << "Small World!" << "\n";
  return 0;
}
