#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, tbc = 0, sole = 0;
    cin >> n;
    int *a = new int[n];
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
        if(a[i] % 2 == 0) tbc += a[i];
        else sole ++;
    }
    sort(a,a+n);
    cout << a[0] << endl << a[n-1] << endl << tbc << endl << sole;
    delete []a;
}
