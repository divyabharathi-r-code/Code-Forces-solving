#include <iostream>
using namespace std;
int main() {
  int n;
  cin>> n;
  long long  n1, n2;
  for(int i=0; i<n; i++){
    cin >> n1 >> n2;
    long long rem = n1% n2;
    if (rem ==0){
      cout<<0<<endl;
    }else { 
      cout<<(n2-rem) <<endl;
    }
  }
 return 0;
  
}
