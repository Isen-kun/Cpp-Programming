#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str = "23457";
    // sort(str.begin(), str.end());
    // reverse(str.begin(), str.end());
    sort(str.begin(), str.end(), greater<int>());
    cout << str;
    return 0;
}