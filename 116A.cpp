#include <iostream>
using namespace std;
int main(){
    int n;
    int exit;
    int enter, current=0, max_cap=0 ;
   
    cin>>n;
    for(int i=0; i<n; i++){
        cin>> exit >>enter;
        current -= exit;
        current += enter;
        max_cap = max(max_cap, current);
        }
    
    cout<<max_cap<<endl;
    return 0;
}
