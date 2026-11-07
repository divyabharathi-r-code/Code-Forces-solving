#include <bits/stdc++.h>
using namespace std;
int main() {
    string a;
    cin>>a;
    int caps = 0;
    int low = 0;
    for(char c:a){
        if(isupper(c)){
            caps++;
        }else if (islower(c)){
            low++;
        }
    }
    if(caps> low){
        transform(a.begin(), a.end(), a.begin(), ::toupper);
    }else {
        transform(a.begin(), a.end(), a.begin(), ::tolower);
    }
    cout<<a<<endl;
    return 0;
}
