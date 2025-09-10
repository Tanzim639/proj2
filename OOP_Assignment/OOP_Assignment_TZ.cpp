#include <bits/stdc++.h>
using namespace std;
class Mycash
{
private:
    string name;
    float balance,c;
    static int cnt;

public:
    Mycash(string a, float b)
    {
        name = a;
        balance = b;
        cnt++;
    }
    static int getcnt()
    {
        return cnt;
    }
    float setcnt(float k)
    {
        c = k; return c;
    }
    void cshin()
    { 
        float k; cin >> k;
        balance += setcnt(k);
    }
    void cshout()
    { 
        float k;
        cin >> k;
        if (balance >= setcnt(k))
        {
            balance -= setcnt(k);
        }
        else cout << "Your Balance is less than this amount" << endl;
    }
    void dltacnt()
    { 
        name = '0';
        balance = 0;
        cout << "You have withdrawn your total money and this accnt is deleted" << endl;
    }
    void display()
    {
        cout << "Your current Balance is " << balance << " Taka" << endl;
    }
    int getbal()
    {
        return balance;
    }
};

int Mycash::cnt = 0;

int main()
{
    ofstream w("Mycash01", ios::app);
    if (w.is_open())
    {
        cout << "1.Create an Accnt " << endl;
        cout << "2.Log in " << endl;
        cout << "3.Exit" << endl;
        cout << "****Enter the expected option****" << endl;
        int mm = 0,  cd = 0;
        vector<Mycash> v;
        int pin;
        vector<int> p,ra;  
        int gp, bulb = 0;
        while (mm != 6)
        {
            int n; cin >> n;
            if (n == 1)
            {
                cd++;
                int pp = cd;
                string prof = "Profile";
                string sss = to_string(pp);
                string result = prof + sss;
                ofstream wr(result);
                if (wr.is_open())
                {
                    string a;
                    float b;
                    bulb = 1;
                    cout << "Please enter your Name ";
                    cin >> a; w << a << endl; wr << a << endl;
                    cout << "Set your pin code "; cin >> pin;
                    w << pin << endl; w << " " << endl; wr << pin << endl; wr << " " << endl;
                    p.push_back(pin);
                    cout << "Please add some cash in your accnt  ";
                    cin >> b; w << b << endl; wr << b << endl;
                    Mycash obj(a, b);
                    v.push_back(obj);
                    cout << "Your accnt code is " << cd << endl;
                    cout << "Your accnt has been created successfully" << endl;
                    obj.display();
                    wr.close();
                }
                else cerr << "Error" << endl;
            }
            else if (n == 2)
            {
                if (bulb == 0) cout << "NO Accnt EXIT" << endl;
                else
                {
                    int i;
                    cout << "Enter your accnt code" << endl; cin >> i;
                    int pp = i;
                    string prof = "Profile";
                    string jt = to_string(pp);
                    string result = prof + jt;
                    ifstream wr(result);
                    bool found = false;
                    for (int num : ra)
                    {
                        if (num == i)
                        {
                            found = true; break;
                        }
                    }
                    if (found==true) cout << "This account had been removed" << endl;
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
                                    while (getline(wr, line)) cout << line << endl;
                                    wr.close();
                                }
                                else cerr << "Failed to open" << endl;
                                v[i].display();
                                break;
                            }
                            else cout << "&&&Wrong PIN&&& You have one more chance" << endl;
                        }
                    }
                    cout << "1.Cash In" << endl;
                    cout << "2.Cash Out" << endl;
                    cout << "3.Remove accnt" << endl;
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
                            cout << "Enter your accnt code" << endl; cin >> i;
                            int pp = i;
                            string prof = "Profile";
                            string jt = to_string(pp);
                            string result = prof + jt;
                            ofstream wr(result);
                            bool found = false;
                            for (int num : ra)
                            {
                                if (num == i)
                                {
                                    found = true; break;
                                }
                            }
                            if (found==true) cout << "This accnt had been removed" << endl;
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
                                        v[i].setcnt(q); v[i].cshin(); v[i].display();
                                        cout << "Taka has been added in your accnt" << endl;
                                        break;
                                    }
                                    else cout << "&&&Wrong PIN&&& You have one more chance" << endl;
                                }
                            }
                        }
                        else if (nn == 2)
                        {
                            int i;
                            cout << "Enter your accnt code" << endl; cin >> i;
                            bool found = false;
                            for (int num : ra)
                            {
                                if (num == i)
                                {
                                    found = true; break;
                                }
                            }
                            if (found) cout << "This accnt had been removed" << endl;
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
                                        cout << "Enter the amount "; v[i].setcnt(q); v[i].cshout(); v[i].display();
                                        cout << q << " Taka has been withdrawn from your accnt" << endl;
                                    }
                                    else cout << "&&&Wrong PIN&&& You have one more chance" << endl;
                                }
                            }
                        }

                        else if (nn == 3)
                        {
                            int i;
                            cout << "Enter your accnt code" << endl; cin >> i;
                            bool found = false;
                            for (int num : ra)
                            {
                                if (num == i)
                                {
                                    found = true; break;
                                }
                            }
                            if (found) cout << "This accnt had been removed before" << endl;
                            else
                            {
                                int k = 2;
                                while (k--)
                                {
                                    cout << "Give the PIN CODE "; cin >> gp;
                                    if (p[i] == gp)
                                    {
                                        v[i].dltacnt(); ra.push_back(i);
                                    }
                                    else cout << "&&&Wrong PIN&&& You have one more chance" << endl;
                                }
                            }
                        }
                        else if (nn == 4)
                        {
                            int i;
                            cout << "Enter your accnt code" << endl; cin >> i;
                            bool found = false;
                            for (int num : ra)
                            {
                                if (num == i)
                                {
                                    found = true; break;
                                }
                            }
                            if (found) cout << "This accnt had been removed" << endl;
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
                                        cout << "Enter the receiver Accnt Code "; cin >> z;
                                        cout << "Enter the amount ";
                                        int q; cin >> q;
                                        if (v[i].getbal() == 0 || v[i].getbal() < q) cout << "Not enough money" << endl;
                                        else
                                        {
                                            v[z].setcnt(q); v[z].cshin(); v[i].setcnt(q); v[i].cshout();
                                            cout << q << " Taka has been tranferred to the account// "
                                                 << "Accnt Code of receiver " << z << endl;
                                        }
                                    }
                                    else cout << "&&&Wrong PIN&&& You have one more chance" << endl;
                                }
                            }
                        }
                        else if (nn == 5)
                        {
                            int i;
                            cout << "Enter your accnt code" << endl; cin >> i;
                            bool found = false;
                            for (int num : ra)
                            {
                                if (num == i)
                                {
                                    found = true; break;
                                }
                            }
                            if (found) cout << "This accnt had been removed" << endl;
                            else
                            {
                                int k = 2;
                                cout << "***MENUE***" << endl;
                                cout << "1.Gas Bill" << endl;
                                cout << "2.Electricity Bill" << endl;
                                cout << "3.Water Bill" << endl;
                                cout << "4.Internet Bill" << endl;
                                cout << "Press the expected number to pay bill" << endl;
                                int kk; cin >> kk;
                                if (kk == 1 || kk == 2 || kk == 3 || kk == 4)
                                {
                                    while (k--)
                                    {
                                        cout << "Give the PIN CODE "; cin >> gp;
                                        if (gp == p[i])
                                        {
                                            float q;
                                            cout << "Enter the amount you need to pay"; cin >> q;
                                            if (v[i].getbal() == 0 || v[i].getbal() < q) cout << "Not enough money" << endl;
                                            else
                                            {
                                                v[i].setcnt(q); v[i].cshout(); v[i].display();
                                                cout << q << "Payment is successful" << endl;
                                            }
                                        }
                                        else cout << "&&&Wrong PIN&&& You have one more chance" << endl;
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
                mm = n;
                cout << "Want to exit" << endl;
            }
            else cout << "Please press any number given in menu" << endl;
        }

        w.close();
    }
    else cerr << "Error" << endl;
}
