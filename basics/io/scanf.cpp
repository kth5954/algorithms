#include <bits/stdc++.h>
using namespace std;
int a;
double b;
char c;
int d, e;

void scanf_1();
void scanf_2();
int main()
{
    scanf_1();
    scanf_2();

    return 0;
}

void scanf_1()
{
    scanf("%d %lf %c", &a, &b, &c);
    printf("%d %lf %c", a, b, c);
}

void scanf_2()
{
    scanf("%d.%d", &d, &e);
    printf("\n%d %d\n", d, e);
}