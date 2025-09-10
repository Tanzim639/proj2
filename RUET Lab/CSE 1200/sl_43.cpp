#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    if (N % 4 == 1 || N % 4 == 2)
        cout << "NO" << endl;
    else if (N % 4 == 3)
    {
        cout << "YES" << endl;
        cout << N / 2 << endl;
        for (int i = 2; i <= N / 2; i += 2)
            cout << i << " " << N - i << " ";
        cout << N << endl << N / 2 + 1 << endl;
        for (int i = 1; i <= N / 2; i += 2)
            cout << i << " " << N - i << " ";
    }
    else
    {
        cout << "YES" << endl;
        cout << N / 2 << endl;
        for (int i = 2; i <= N / 2; i += 2)
            cout << i << " " << N - i + 1 << " ";
        cout << endl << N / 2 << endl;
        for (int i = 1; i <= N / 2; i += 2)
            cout << i << " " << N - i + 1 << " ";
    }
}
