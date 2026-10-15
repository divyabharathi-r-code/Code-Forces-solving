#include <vector>
using namespace std;
int main() {
    int n,k;
    cin>> n>>k;
    int next=0;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int kth_score = arr[k-1];
    for (int i=0; i<n; i++){
        if (arr[i] >= kth_score && arr[i]>0){
            next += 1;
        }
    } cout<< next;
    return 0;
}
