#include <iostream>

using namespace std;
int pell(int n)
{
    int cont = 0;
    for (int i=1; i<=n; i++)
    {
        if (i%2 == 1)
        {
            do
            {
                n=n-i;
                cont++;
            }
            while (n <= 0);
        }
    }
    return cont;
}
int main()
{
    int n;
    cin >> n;
    cout << pell(n);
    return 0;
}
