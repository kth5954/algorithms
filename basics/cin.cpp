#include <bits/stdc++.h>
using namespace std;
string a;
string b, c;
void cin_no_space();
void cin_with_space();
int main()
{
    cin_no_space();
    cin_with_space();
    return 0;
}

void cin_no_space()
{
    cin >> a;
    cout << a << '\n';
}

void cin_with_space()
{
    cin >> b >> c;
    cout << b << ' ' << c << '\n';
}