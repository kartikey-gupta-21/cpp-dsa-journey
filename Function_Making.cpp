#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> r;
    vector<string> wc;
    vector<string> m;
    vector<string> c;
    cout << "input" << endl;
    for(int i = 0; i < n; i++)
    {
        string name, status;
        cin >> name >> status;

        if (status == "rat")
        {
            r.push_back(name);
        }
        else if (status == "woman" || status == "child")
        {
            wc.push_back(name);
        }
        else if (status == "man")
        {
            m.push_back(name);
        }
        else if (status == "captain")
        {
            c.push_back(name);
        }
    }
    for(const string& s : r)
        cout << s << '\n';

    for(const string& s : wc)
        cout << s << '\n';

    for(const string& s : m)
        cout << s << '\n';

    for(const string& s : c)
        cout << s << '\n';

    return 0;
}