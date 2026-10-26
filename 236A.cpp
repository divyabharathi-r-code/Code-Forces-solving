#include <bits/stdc++.h>
using namespace std;
int main(){
    string name;
    cin>> name;
    
    unordered_set<char> dis(name.begin(), name.end());
    if(dis.size() % 2 ==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!";
    }
        
    return 0;
}
