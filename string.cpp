#include "bits/stdc++.h"
using namespace std;

string solve(string s, int pos, int k)
{
    string s1 = s.substr(pos,2);
    // cout<<s1;
    reverse(s1.begin(), s1.end());
    // cout << "s : " << s1 << endl;
    return s1;
}

int main()
{
    string s;
    cin>>s;
    int k = 2;
    string res = "";
    int pos = 0;
    int count = 0;
    int r = 2*k;
    int i = 0;
    while (i < s.size())
    {
        if (count % r == 0)
        {
            // cout<<i;
            pos = i;
            string s1 = solve(s, pos, k);
            // cout<<s1;
            res = res.append(s1);
            // cout<<res<<endl;
            i += k;
            count += k;
        }
        else
        {
            while (i < s.size() && ((count%r) != 0))
            {
                res += s[i];
                count++;
                i++;
            }
            // cout<<i<<res<<endl;
        }
    }

    // cout<<solve(s,4,2);
    cout << res << endl;
    return 0;
}