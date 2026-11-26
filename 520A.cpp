#include <iostream>
#include<unordered_set>
#include <cctype>
using namespace std;
int main() {
  int n;
  string s;
  cin>>n;
  cin>>s;
  if(n<26){
    cout<<"NO";
    return 0;
  }
  unordered_set<char> uni;
  for(char c:s){
   uni.insert(tolower(c));
  }
  if(uni.size() == 26){ 
      cout<<"YES";
    }else{
      cout<<"NO";
    }
  
  
  return 0;
}
