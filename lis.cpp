#include <iostream>
using namespace std;

int main (){
    int N;
    cin >> N;
    int count = 1;
    for (int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a;
        if (i != 0)
        {
            if (a > b)
            {
                count++;
                b = a;
            }
        }
    }
    cout << count;
}