#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *a = new int [n];
    double s = 0, tb = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
        s+= a[i];
    }
    tb = s/n;
    cout << tb;
    delete a;
}
