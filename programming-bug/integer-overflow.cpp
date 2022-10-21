#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int int_over_flow(int a, int b) {
  return a + b;
}

long long fix(int a, int b) {
  long long result = (long long)a+b;
  return result;
}

int main(int argc, char const *argv[])
{
    int a = INT_MAX;
    int b = 100000;
    cout << int_over_flow(a,b) << endl;
    cout << fix(a,b) << endl;

    return 0;
}