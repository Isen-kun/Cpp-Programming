#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str = "stasjkebfkjnkkbkjj";
    int cnt[26] = {0};

    for (int i = 0; i < str.size(); i++)
    {
        cnt[str[i] - 'a']++;
    }

    char most;
    int freq = cnt[0];
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] > freq)
        {
            freq = cnt[i];
            most = i + 'a';
        }
    }

    cout << "The most repeated letter was " << most << " and " << freq << " no of times.";
    return 0;
}