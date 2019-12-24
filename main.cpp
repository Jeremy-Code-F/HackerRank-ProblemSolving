#include<bits/stdc++.h>

using namespace std;

//Challenge - https://www.hackerrank.com/challenges/birthday-cake-candles/problem
int birthdayCakeCandles(vector<int> ar){
    map<int, int> mp;
    int tallestCandle = 0;

    for(int i = 0; i < ar.size(); i++){
        if(ar[i] > tallestCandle){
            tallestCandle = ar[i];
        }
        mp[ar[i]]++;
    }

    return mp[tallestCandle];
}

//Challenge - https://www.hackerrank.com/challenges/time-conversion/problem
string timeConversion(string s){
    string timeCode = s.substr(s.length() - 2);
    string hourTimeThing = s.substr(0, 2);
    cout << hourTimeThing << endl;

    if(timeCode == "PM" && stoi(hourTimeThing) < 12){
        cout << "Time has PM" << endl;
        int hourTime = stoi(s.substr(0, 2)) + 12;
        cout << s.substr(2, s.length() - 2) << endl;
        return (to_string(hourTime) + string(s.begin() + 2, s.begin() + s.length() - 2));
    }else if(timeCode == "AM" && stoi(hourTimeThing) >= 12){
        int hourTime = stoi(s.substr(0, 2)) - 12;
        cout << s.substr(1, s.length() - 2) << endl;
        return ("0" + to_string(hourTime) + string(s.begin() + 2, s.begin() + s.length() - 2));
    }

    return s.substr(0, s.length() - 2);
}


int main(){

    string result = timeConversion("12:45:54PM");
    cout << "Result: " << result << endl;
    return 0;
}