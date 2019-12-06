#include <iostream>
using namespace std;

int prime(int n){
    if (n<2){
        cout << n << " is a composite number.";
        return 0;
    }
    for (int i=2; i*i<=n; i++) {
        if (n%i==0) {
            cout << n << " is a composite number.";
            return 0;
        }
    }
    cout << n << " is a prime number.";
}

int main(){
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int D;
        cin >> D;
        prime(D);
        cout << "\n";
    }
    
}