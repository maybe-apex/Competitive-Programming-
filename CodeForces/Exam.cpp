#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n <= 2)
        cout << "1\n1";
    else if (n == 3)
        cout << "2\n1 3";
    else
    {
        cout << n << endl;
        for (int i = 2; i <= n; i += 2)
            cout << i << " ";
        for (int i = 1; i <= n; i += 2)
            cout << i << " ";
    }

    return 0;
}