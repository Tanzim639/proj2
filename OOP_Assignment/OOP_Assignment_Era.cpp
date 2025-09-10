#include <bits/stdc++.h>
using namespace std;
class My_cash
{
private:
    string name;
    float bal;
    float c;
    static int cont;

public:
    My_cash(string a, float b)
    {
        name = a;
        bal = b;
        cont++;
    }
    static int getcont()
    {
        return cont;
    }
    float setcont(float k)
    {
        c = k;
        return c;
    }
    void cashIn()
    {
        float k;
        cin >> k;
        bal += setcont(k);
    }
    void cashOut()
    {
        float k;
        cin >> k;
        if (bal >= setcont(k))
        {
            bal -= setcont(k);
        }
        else
            cout << "Your Balance is less than this amount" << endl;
    }
    void deleteAcc()
    {
        name = '0';
        bal = 0;
        cout << "You have withdrawn your total money and this account is deleted" << endl;
    }
    void display()
    {
        cout << "Your current Balance is " << bal << " Taka" << endl;
    }
    int balanVal()
    {
        return bal;
    }
};

int My_cash::cont = 0;

int main()
{
    ofstream w("My_cash01", ios::app);
    if (w.is_open())
    {
        cout << "1.Create an Account " << endl;
        cout << "2.Log in " << endl;
        cout << "3.Exit" << endl;
        cout << "****Enter the expected option****" << endl;
        int aab = 0, bp = 0;
        vector<My_cash> v;
        vector<int> p, ra;
        int gp, batti = 0;
        while (aab != 3)
        {
            int n;
            cin >> n;
            if (n == 1)
            {
                bp++;
                int pa = bp;
                string pf = "Profile";
                string str = to_string(pa);
                string rs = pf + str;
                ofstream wr(rs);
                if (wr.is_open())
                {
                    string a;
                    float b;
                    batti = 1;
                    cout << "Please enter your Name ";
                    cin >> a;
                    w << a << endl;
                    wr << a << endl;
                    cout << "Set your pin code ";
                    cin >> batti;
                    w << batti << endl;
                    w << " " << endl;
                    wr << batti << endl;
                    wr << " " << endl;
                    p.push_back(batti);
                    cout << "Please add some cash in your account  ";
                    cin >> b;
                    w << b << endl;
                    wr << b << endl;
                    My_cash obj(a, b);
                    v.push_back(obj);
                    cout << "Your account code is " << bp << endl;
                    cout << "Your account has been created successfully" << endl;
                    obj.display();
                    wr.close();
                }
                else
                    cerr << "Error" << endl;
            }
            else if (n == 2)
            {
                if (batti == 0)
                    cout << "NO Account EXIT" << endl;
                else
                {
                    int i;
                    cout << "Enter your account code" << endl;
                    cin >> i;
                    int pa = i;
                    string pf = "Profile";
                    string jt = to_string(pa);
                    string rs = pf + jt;
                    ifstream wr(rs);
                    bool found = false;
                    for (int num : ra)
                    {
                        if (num == i)
                        {
                            found = true;
                            break;
                        }
                    }
                    if (found == true)
                        cout << "This account had been removed" << endl;
                    else
                    {
                        int k = 2;
                        while (k--)
                        {
                            cout << "Give the PIN CODE ";
                            cin >> gp;
                            if (gp == p[i])
                            {
                                if (wr.is_open())
                                {
                                    string line;
                                    while (getline(wr, line))
                                        cout << line << endl;
                                    wr.close();
                                }
                                else
                                    cerr << "Failed to open" << endl;
                                v[i].display();
                                break;
                            }
                            else
                                cout << "&&&Wrong PIN&&& You have one more chance" << endl;
                        }
                    }
                    cout << "1.Cash In" << endl;
                    cout << "2.Cash Out" << endl;
                    cout << "3.Remove account" << endl;
                    cout << "4.Send Money" << endl;
                    cout << "5.Pay Bill" << endl;
                    cout << "6.Logout" << endl;
                    int m = 0;
                    while (m != 5)
                    {
                        int nn;
                        cin >> nn;
                        if (nn == 1)
                        {
                            int i;
                            cout << "Enter your account code" << endl;
                            cin >> i;
                            int pa = i;
                            string pf = "Profile";
                            string jt = to_string(pa);
                            string rs = pf + jt;
                            ofstream wr(rs);
                            bool found = false;
                            for (int num : ra)
                            {
                                if (num == i)
                                {
                                    found = true;
                                    break;
                                }
                            }
                            if (found == true)
                                cout << "This account had been removed" << endl;
                            else
                            {
                                int k = 2;
                                while (k--)
                                {
                                    cout << "Give the PIN CODE ";
                                    cin >> gp;
                                    if (gp == p[i])
                                    {
                                        float q;
                                        cout << "Enter the amount ";
                                        v[i].setcont(q);
                                        v[i].cashIn();
                                        v[i].display();
                                        cout << "Taka has been added in your account" << endl;
                                        break;
                                    }
                                    else
                                        cout << "&&&Wrong PIN&&& You have one more chance" << endl;
                                }
                            }
                        }
                        else if (nn == 2)
                        {
                            int i;
                            cout << "Enter your account code" << endl;
                            cin >> i;
                            bool found = false;
                            for (int num : ra)
                            {
                                if (num == i)
                                {
                                    found = true;
                                    break;
                                }
                            }
                            if (found)
                                cout << "This account had been removed" << endl;
                            else
                            {
                                int k = 2;
                                while (k--)
                                {
                                    cout << "Give the PIN CODE ";
                                    cin >> gp;
                                    if (gp == p[i])
                                    {
                                        float q;
                                        cout << "Enter the amount ";
                                        v[i].setcont(q);
                                        v[i].cashOut();
                                        v[i].display();
                                        cout << q << " Taka has been withdrawn from your account" << endl;
                                    }
                                    else
                                        cout << "&&&Wrong PIN&&& You have one more chance" << endl;
                                }
                            }
                        }

                        else if (nn == 3)
                        {
                            int i;
                            cout << "Enter your account code" << endl;
                            cin >> i;
                            bool found = false;
                            for (int num : ra)
                            {
                                if (num == i)
                                {
                                    found = true;
                                    break;
                                }
                            }
                            if (found)
                                cout << "This account had been removed before" << endl;
                            else
                            {
                                int k = 2;
                                while (k--)
                                {
                                    cout << "Give the PIN CODE ";
                                    cin >> gp;
                                    if (p[i] == gp)
                                    {
                                        v[i].deleteAcc();
                                        ra.push_back(i);
                                    }
                                    else
                                        cout << "&&&Wrong PIN&&& You have one more chance" << endl;
                                }
                            }
                        }
                        else if (nn == 4)
                        {
                            int i;
                            cout << "Enter your account code" << endl;
                            cin >> i;
                            bool found = false;
                            for (int num : ra)
                            {
                                if (num == i)
                                {
                                    found = true;
                                    break;
                                }
                            }
                            if (found)
                                cout << "This account had been removed" << endl;
                            else
                            {
                                int k = 2;
                                while (k--)
                                {
                                    cout << "Give the PIN CODE ";
                                    cin >> gp;
                                    if (gp == p[i])
                                    {
                                        int z;
                                        cout << "Enter the receiver Account Code ";
                                        cin >> z;
                                        cout << "Enter the amount ";
                                        int q;
                                        cin >> q;
                                        if (v[i].balanVal() == 0 || v[i].balanVal() < q)
                                            cout << "Not enough money" << endl;
                                        else
                                        {
                                            v[z].setcont(q);
                                            v[z].cashIn();
                                            v[i].setcont(q);
                                            v[i].cashOut();
                                            cout << q << " Taka has been tranferred to the account// "
                                                 << "Account Code of receiver " << z << endl;
                                        }
                                    }
                                    else
                                        cout << "&&&Wrong PIN&&& You have one more chance" << endl;
                                }
                            }
                        }
                        else if (nn == 5)
                        {
                            int i;
                            cout << "Enter your account code" << endl;
                            cin >> i;
                            bool found = false;
                            for (int num : ra)
                            {
                                if (num == i)
                                {
                                    found = true;
                                    break;
                                }
                            }
                            if (found)
                                cout << "This account had been removed" << endl;
                            else
                            {
                                int k = 2;
                                cout << "***MENUE***" << endl;
                                cout << "1.Gas Bill" << endl;
                                cout << "2.Electricity Bill" << endl;
                                cout << "3.Water Bill" << endl;
                                cout << "4.Internet Bill" << endl;
                                cout << "Press the expected number to pay bill" << endl;
                                int kk;
                                cin >> kk;
                                if (kk == 1 || kk == 2 || kk == 3 || kk == 4)
                                {
                                    while (k--)
                                    {
                                        cout << "Give the PIN CODE ";
                                        cin >> gp;
                                        if (gp == p[i])
                                        {
                                            float q;
                                            cout << "Enter the amount you need to pay";
                                            cin >> q;
                                            if (v[i].balanVal() == 0 || v[i].balanVal() < q)
                                                cout << "Not enough money" << endl;
                                            else
                                            {
                                                v[i].setcont(q);
                                                v[i].cashOut();
                                                v[i].display();
                                                cout << q << "Payment is successful" << endl;
                                            }
                                        }
                                        else
                                            cout << "&&&Wrong PIN&&& You have one more chance" << endl;
                                    }
                                }
                            }
                        }
                        else if (nn == 6)
                        {
                            m = nn;
                            cout << "Logout" << endl;
                        }
                    }
                }
            }
            else if (n == 3)
            {
                aab = n;
                cout << "Want to exit" << endl;
            }
            else
                cout << "Please press any number given in menu" << endl;
        }

        w.close();
    }
    else
        cerr << "Error" << endl;
}
