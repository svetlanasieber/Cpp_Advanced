#include <iostream>
#include <map>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    map<string, int> usernames;
    vector<string> namesVector;


    int n;
    cin >> n; cin.ignore();

    for (int i = 0; i < n; i++) {
        string user;
        cin >> user;

        map<string, int>::iterator un = usernames.find(user);
        if (un == usernames.end())
            namesVector.push_back(user);

        usernames[user]++;
    }

    for (string name : namesVector)
        cout << name << endl;
        

    return 0;
}

