#include <iostream>
using namespace std;

string removeDuplicates(string s, int k)
{
    string temp(1, s[0]);
    int i = 1;
    while (i < s.size())
    {
        int j = 1;
        bool light = false;
        while (j < k)
        {
            if (temp.size() >= j && temp[temp.size() - j] == s[i])
            {
                if (j == k - 1)
                    light = true;
            }
            else
            {
                temp.push_back(s[i]);
                break;
            }
            j++;
        }
        int f = 1;
        while (temp.size() > 0 && f < k)
        {
            if (light)
            {
                temp.pop_back();
            }
            f++;
        }
        light = false;
        i++;
    }
    return temp;
}

int main()
{
    // string s = "abbaca";
    string s = "deeedbbcccbdaa";
    int k = 3;
    // string s = "aa";
    cout << removeDuplicates(s,k) << endl;

    return 0;
}