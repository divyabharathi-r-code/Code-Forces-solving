#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<long long> colors;
    for (int i = 0; i < 4; i++) {
        long long x;
        cin >> x;
        colors.insert(x);
    }
    cout << (4 - colors.size()) << "\n";
    return 0;
}
