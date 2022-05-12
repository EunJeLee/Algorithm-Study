#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define P pair<ll,ll>

int ccw(P A, P B, P C){
    // AB X BC
    P AB = make_pair(B.first-A.first, B.second-A.second);
    P BC = make_pair(C.first-B.first, C.second-B.second);

    ll tmp = AB.first*BC.second - AB.second*BC.first;
    if(tmp < 0) return -1;
    else if(tmp == 0) return 0;
    else return 1;
}

int main(){
    P A, B, C, D;
    cin >> A.first >> A.second;
    cin >> B.first >> B.second;
    cin >> C.first >> C.second;
    cin >> D.first >> D.second;

    int abc = ccw(A,B,C), abd = ccw(A,B,D);
    int cda = ccw(C,D,A), cdb = ccw(C,D,B);

    if(abc*abd==0 && cda*cdb==0){
        if(A > B) swap(A,B);
        if(C > D) swap(C,D);

        if(C <= B && A <= D) return cout << 1,0;
        return cout << 0,0;
    }
    else if(abc*abd<=0 && cda*cdb<=0) cout << 1;
    else cout << 0;
}
