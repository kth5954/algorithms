#include<bits/stdc++.h>
using namespace std;
int main() {
    string a = "love is";
    a += " pain!";
    a.pop_back();
    cout << a << " : " << a.size() << '\n';
    cout << char(*a.begin()) << '\n';
    cout << char(*a.end()) << '\n';
    a.insert(0, "test ");
    cout << a << " : " << a.size() << '\n';
    a.erase(0, 5); // 앞에서 5개 지우기
    cout << a << " : " << a.size() << '\n';

    auto it = a.find("love"); // a에서 "love"를 찾아서 그 위치를 반환
    // string::npos는 찾지 못했을 때 반환하는 값, 즉, 찾았다면 it != string::npos는 true
    if (it != string::npos) {
        cout << "found at " << it << '\n';
    }
    else {
        cout << "not found" << '\n';
    }
    cout << it << '\n';
    cout << string::npos << '\n';
    cout << a.substr(5, 2) << '\n'; // a에서 5번째부터 2개를 가져옴

    return 0;
}