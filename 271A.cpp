#include <iostream>
using namespace std;

int main() {
    int y;
    cin >> y;
    
    while (true) {
        y++;
        int a = y / 1000;       // Thousands digit
        int b = (y / 100) % 10; // Hundreds digit
        int c = (y / 10) % 10;  // Tens digit
        int d = y % 10;         // Units digit
        
        if (a != b && a != c && a != d && b != c && b != d && c != d) {
            cout << y << endl;
            break;
        }
    }
    
    return 0;
}
