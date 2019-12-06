#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    long int N, m;
    long int s = 0;
    long int count = 0;
    cin >> N >> m;
    long int a[m];
    for (long int i=0; i<m; i++) {
        cin >> a[i];
    }
    if (m==1) {
        N>=a[0]?count=1:count=0;
    } else {
        sort(a, a+m);
        for (long int i=0; i<N; i++) {
            s += a[i];
            if (s>=N) {
                break;
            }
            count++;
        }
    }
    cout << count;
}