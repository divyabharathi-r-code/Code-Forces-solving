#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin>> a>>b;
    int year=0;
    while(a<=b){
      b= b*2;
      a= a*3;
     year++;
    }
    cout<<year<<endl;
    return 0;

}
