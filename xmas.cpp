#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int gifts[n];
    int receive[n];
    for (int i = 0; i < n; i++) {
        cin >> gifts[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i+1 == gifts[j])
            {
                receive[i] = j+1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << receive[i] << endl;
    }
}