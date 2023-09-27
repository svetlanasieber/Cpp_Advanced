#include <iostream>
#include <set>
#include <string>
#include <sstream>
#include <utility>

using namespace std;

int main()
{
    int n;
    cin >> n; cin.ignore();

    set<string> chemicalElements;

    for (int i = 0; i < n; i++) {
        string input;
        getline(cin, input);

        istringstream ss(input);
        string element;

        while (ss >> element) {
            chemicalElements.insert(element);
        }
    }

    for (set<string>::iterator it = chemicalElements.begin(); it != chemicalElements.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    //for (string el : chemicalElements)
    //    cout << el << " ";

    return 0;
}

