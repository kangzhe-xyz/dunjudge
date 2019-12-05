#include <iostream>
using namespace std;

int main () {
    long int n, k, gift;
    cin >> n >> k;
    gift = 0;
    for (int i = 0; i < n; i++)
    {
        long int yest, today;
        cin >> today;
        if (i != 0){
            if (today + k <= yest)
            {
                gift++;
            }
        }
        yest = today;
    }
    cout << gift;
}