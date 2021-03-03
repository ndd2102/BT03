#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    int a[10] = {};
    for(int i = 0 ; i < n ; i++)
   {
       cin >> m;
       a[m]++;
   }
    for(int i = 0 ; i < 10 ; i++)
    cout << a[i] << ' ';
}
