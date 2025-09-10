#include <iostream>
using namespace std;

int main()
{
    int i;
    int ax[5] = {10, 20, 60, 40, 30};

    try
    {
        cout << "Enter index: ";
        cin >> i;

        if (i < 0 || i >= 5)
        {
            throw i; 
        }

        cout << "ax[" << i << "] = " << ax[i] << endl;
    }
    catch (int aa)
    {
        cout << "Index " << aa << " is out of range." << endl;
    }
    catch (const char *e)
    {
        cout << e << endl;
    }
    catch (...)
    {
        cout << "Error" << endl;
    }
}
