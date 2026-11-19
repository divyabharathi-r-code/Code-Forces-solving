#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  int n;
  cin>>n;
  int a;
  int sum = 0;
  for(int i =0;i<n; i++){
    cin>> a ;
    sum += a;
  }
  double ave = static_cast<double>(sum)/n;
  cout<< fixed << setprecision(12) << ave;
  return 0;
}
