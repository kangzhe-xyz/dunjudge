#include <iostream>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;
    int adjM[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            adjM[i][j] = 0;
        }
        
    }
    for (int i = 0; i < e; i++)
    {
        int e1, e2;
        cin >> e1 >> e2;
        adjM[e1 - 1][e2 - 1] = 1; 
        adjM[e2 - 1][e1 - 1] = 1; 
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adjM[i][j];
        }
        cout << "\n";
    }
}