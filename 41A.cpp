#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>> s >> t;
    string b=s;
    reverse(b.begin(), b.end());
    if(b == t){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
