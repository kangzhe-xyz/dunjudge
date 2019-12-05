#include <iostream>
using namespace std;

int main() 
{
    int h, w;
    int potato = 0;
    cin >> h >> w;
    char farm[h][w];
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            char x;
            cin >> x;
            if (x == '#')
            {
                potato++;
            }
        }
    }
    cout << potato;
}