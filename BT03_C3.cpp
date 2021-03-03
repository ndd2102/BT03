#include<iostream>
using namespace std;
bool sodoiguong(int n)
{
    int a[30], x = 0;
    for(int i = 0 ; n > 0; i++)
    {
        a[i] = n%10;
        n = n/10;
        x++;
    }
    for(int i = 0 ; i < x; i++)
    {
        if(a[i] != a[x -1 -i])
        return false;
    }
    return true;
}
int main()
{
    int n, a ,b;
    cin >> n;
    for(int i = 0 ; i < n; i++)
    {
        int count = 0;
        cin >> a >> b;
        for(int j = a; j < b; j++)
        {
            if(sodoiguong(j) == true)
                count ++;

        }
        cout << count;
    }
}
