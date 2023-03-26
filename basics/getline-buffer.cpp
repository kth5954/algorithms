#include<bits/stdc++.h>
using namespace std;
int T;
string s;
int main(){
    cin >> T;
    string bufferflush; // this is to flush the buffer. cin does not flush the buffer
    getline(cin, bufferflush);
    for(int i = 0; i < T; i++){
        getline(cin, s);
        cout << s << '\n';
    }
    return 0;
 }