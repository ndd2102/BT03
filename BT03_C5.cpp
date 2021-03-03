#include <iostream>
using namespace std;
int main()
{
    int n, m, a[10][10];
    cin >> n >> m;
    int x = 0 , y =n - 1, z = m - 1 , so = 1;
    while (true)
    {

        for(int i = x; i < z; i++)
        {
            a[x][i] = so;
            so++;
        }
        if (so>n*m) break;
        for(int j = x ; j <= y; j++)
        {
            a[j][z] = so;
            so++;
        }
        if (so>n*m) break;
        for(int k = z-1; k >= x; k--)
        {
            a[y][k] = so;
            so ++;
        }
        if (so>n*m) break;
        for(int q = y - 1; q >x; q--)
        {
            a[q][x]= so ;
            so++;
        }
        if (so>n*m) break;
        x++;
        y--;
        z--;

    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
}
