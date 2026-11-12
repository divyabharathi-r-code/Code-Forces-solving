
#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string a;
    if (!(cin >> n >> a)) return 0;

    int dcount = 0;
    int acount = 0;

    for (char c : a) {
        if (c == 'D') {
            dcount++;
        } else if (c == 'A') {
            acount++;
        }
    }

    if (dcount == acount) {
        cout << "Friendship\n";
    } else if (dcount > acount) {
        cout << "Danik\n";
    } else {
        cout << "Anton\n";
    }

    return 0;
}
