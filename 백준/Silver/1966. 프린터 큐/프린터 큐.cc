#include <iostream>
#include <vector>
#include <queue>

using namespace std;
queue<pair<int, int>> q; // priority, pos

void printQueue(int step) {
    cout << "erase step : " << step << endl;
    queue<pair<int, int>> q2;
    q2 = q;
    while(!q2.empty()) {
        cout << q2.front().first << " ";
        q2.pop();
    }
    cout << endl << endl << endl;
}
void solve(){
    int n, m;

    cin >> n >> m;
    int cnt = 0;
    int priority;

    vector<int> v;

    int answer = 0;

    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        q.push({tmp, i});
        v.push_back(tmp);

        if(i == m){
            priority = tmp;
        }
        
    }
    
    int check = 0;

    for(int i = 9; i > 0; i--){
        int size = q.size();
        // printQueue(i);
        int aa = 0;
        bool flag = false;
        int sizee = v.size();
        for(int j = 0; j < sizee; j++){
            if(i == v[j]) {
                aa = j;
                flag = true;
            }
        }
        

        if(i > priority && flag){
            for(int j = 0; j <= aa; j++){
                int item = q.front().first;

                if(item == i){
                    q.pop();
                    answer++;
                }
                else if(item < i){
                    q.push(q.front());
                    q.pop();
                }
            }
        }
        else if(i == priority) {
            // cout << "here" << endl;
            for(int j = 0; j < size; j++){
            
                int idx = q.front().second;
                int item = q.front().first;
                // cout << idx << " " << item << endl;

                if(item == priority){
                    if(idx == m){
                        check = 1;
                        break;
                    }
                    else{
                        answer++;
                        q.pop();
                    }
                }
                else {
                    q.pop();
                }
            }
        }
        if(check) break;

        queue<pair<int, int>> q2;
        q2 = q;
        int ssize = q2.size();
        v.clear();
        for(int j = 0; j < ssize; j++){
            pair<int, int> tmp = q2.front();
            v.push_back(tmp.first);
            q2.pop();
        }
    }

    cout << answer + 1 << endl;

}

void input(){
    int T;
    cin >> T;
    while(T--){
        while (!q.empty())
            q.pop();
        solve();
    }
}

int main(){
    input();

    return 0;
}