#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <deque>
#include <string>
#include <set>
#include <map>
#include <list>
#include <cmath>
#include <cstring>
#define endl "\n"
#define MOD 10007
#define lli long long
#define mp make_pair
#define pb push_back

using namespace std;

int dy[4] = {0, 1, 0, -1};
int dx[4] = {1, 0, -1, 0};
map<int, bool> m1, m2;

struct student
{
    string name;
    int kor;
    int mat;
    int eng;
};

bool compare(const student s1, const student s2){
    if(s1.kor == s2.kor && s1.mat == s2.mat && s1.eng == s2.eng){
        return s1.name < s2.name;
    }
    if(s1.kor == s2.kor && s1.eng == s2.eng){
        return s1.mat > s2.mat;
    }
    if(s1.kor == s2.kor){
        return s1.eng < s2.eng;
    }
    return s1.kor > s2.kor;
}

void solve(){
  
}


void print(){

}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    vector<student> v;
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        student s;
        cin >> s.name >> s.kor >> s.eng >> s.mat;
        v.pb(s);
    }

    sort(v.begin(), v.end(), compare);
  
    for(int i = 0; i < v.size(); i++){
        cout << v[i].name << endl;
    }
 }
