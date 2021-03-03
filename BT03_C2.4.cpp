#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int **a = new int *[n];
    for(int i = 0 ; i <= n ; i++)
        a[i] = new int [n];
    for(int i = 0 ; i <= n; i++)
        for(int j = 0 ; j <= n; j++)
            a[i][j] = 0;
    a[1][1] = 1;
    for(int i = 2 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= n; j++)
        {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for(int i = 1; i <= n ; i ++)
    {
        for (int j = 1 ; j <= n; j ++)
        {
           cout << a[i][j] << ' ' ;
           if(j > i - 1) break;
        }
        cout << endl;
    }
    for (int i=0; i<n; i++) delete a[i];
    delete []a;
}
