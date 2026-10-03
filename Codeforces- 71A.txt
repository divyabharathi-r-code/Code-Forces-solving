#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    while (n--) {
        string s;
        cin >> s;
        char first = s[0];
        char last = s[s.length() - 1];
        
        if (s.length() > 10) {
            
            cout << first << s.length() - 2 << last << endl;
        } else {
            cout << s << endl;
        }
    }
    
    return 0;
}
