#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

vector<string> records_parsing(string s){
    vector<string> str;
    string tmp;
    
    for(int i = 0; i < s.length(); i++){
        if(s[i] != ' ') tmp += s[i];
        else if(s[i] == ' '){
            str.push_back(tmp);
            tmp = "";
        }
    }
    str.push_back(tmp);
    return str;
}

int time_diff(string s1, string s2){
    int in = ((s1[0] - '0') * 10 + s1[1] - '0') * 60 + (s1[3] - '0') * 10 + s1[4] - '0';
    int out = ((s2[0] - '0') * 10 + s2[1] - '0') * 60 + (s2[3] - '0') * 10 + s2[4] - '0';
    return out - in;
}


vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    vector<vector<string>> parsed_records;
    map<string, string> m;
    map<string, int> m2;

    int record_len = records.size();
    
    for(int i = 0; i < record_len; i++){
        vector<string> tmp = records_parsing(records[i]);
        parsed_records.push_back(tmp);
    }
    
    for(int i = 0; i < record_len; i++){
        if(parsed_records[i][2] == "IN") m[parsed_records[i][1]] = parsed_records[i][0];
        if(parsed_records[i][2] == "OUT"){
            string car_number = parsed_records[i][1];
            m2[parsed_records[i][1]] += time_diff(m[parsed_records[i][1]], parsed_records[i][0]);
            m.erase(car_number);
        }
    }
    for (auto iter : m) {
        m2[iter.first] += time_diff(iter.second, "23:59");
    }
    

    for (auto iter : m2){
        if(iter.second <= fees[0]) answer.push_back(fees[1]);
        else{
            if((iter.second - fees[0])%fees[2] == 0) answer.push_back(fees[1] + (iter.second - fees[0])/fees[2] * fees[3]);
            else answer.push_back(fees[1] + ((iter.second - fees[0])/fees[2]+1) * fees[3]);
        }
    }

    

    
    return answer;
}