#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#define endl "\n"

using namespace std;


vector<string> v;
int idx[5];
int dx[2] = {-1, 1};


void affect(int x, int direct){
    if(direct == 1){
        idx[x] = ( idx[x] + 7 ) % 8;
    }
    else idx[x] = (idx[x] +1 ) % 8;
}

void solve(int num, int direct){
    queue<pair<int, int>> q;
    vector<pair<int, int>> ans;
    int visited[5] = {0,};

    q.push({num, direct});
    ans.push_back({num, direct});
    visited[num] = 1;

    while(!q.empty()){
        int indx = q.front().first;
        int dir = q.front().second;
        
        // cout << "q의 원소들은 " << indx << " " << dir <<endl;
        
        q.pop();

        for(int i = 0; i < 2; i++){
            int nidx = indx + dx[i];

            if(nidx > 4 || nidx < 1) continue;
            if(visited[nidx]) continue;
            if(i == 0 && v[indx-1][(idx[indx]+6)%8] == v[nidx-1][(idx[nidx]+2)%8]){
                // cout << "치킨!!\n";
                continue;
            }
            if(i == 1 && v[indx-1][(idx[indx]+2)%8] == v[nidx-1][(idx[nidx]+6)%8]){
                // cout << "훌랄라\n";
                continue;
            }
            visited[nidx] = 1;
            q.push({nidx, (-1) * dir});
            ans.push_back({nidx, (-1)*dir});
        }
    }
    
    for(int i = 0; i < ans.size(); i++){
        // cout << "ans check : " << ans[i].first << " " << ans[i].second << endl;
        affect(ans[i].first, ans[i].second); 
    }

}

void input(){
    for(int i = 1 ; i <= 4; i++){
        string s;
        cin >> s;
        idx[i] = 0;
        v.push_back(s);
    }

    int N;
    cin >> N;

    for (int k = 0; k < N; k++)
    {
        int a, b; // a : 바퀴번호, b : 회전방향 (1 시계, -1 반시계)
        cin >> a >> b;
        solve(a, b);
    }

    int answer = 0;
    for (int i = 1; i <= 4; i++)
    {
        answer += (v[i - 1][idx[i]]- '0') * (1 << (i-1));
    }
    cout << answer << endl;
}

int main(){
    input();
    return 0;
}