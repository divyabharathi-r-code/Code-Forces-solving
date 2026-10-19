#include <bits/stdc++.h>
using namespace std;
int main(){
    int matrix[5][5];
    int rowin=0;
    int colin=0;
    for(int i=0;i<5;i++){
        for (int j=0; j<5;j++){
            cin>>matrix[i][j];
            if( matrix[i][j]== 1){
               rowin = i;
               colin=j;
        }
        }
}
    int moves = abs(rowin -2)+abs(colin -2);
    cout<<moves<<endl;
    return 0;
}
