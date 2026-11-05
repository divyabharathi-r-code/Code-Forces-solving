#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string a;
    cin>>n;
    cin>>a;
    int move = 0;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            move++;
        }
    }
    cout<<move<<endl;
    return 0;
}
