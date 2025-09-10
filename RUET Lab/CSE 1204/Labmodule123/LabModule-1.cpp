#include<bits/stdc++.h>
using namespace std;

class Account{
    private:
        string name;
        int age;
        int acc_no;
        double balance;
    public:
        void create();
        void deposite();
        void withdraw();
        void checkbal();
        void display();
        int getAcc_no(){
            return acc_no;
        }
        int getbal(){
            return balance;
        }
};


void Account::create(){
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter age: ";
    cin>>age;
    cout<<"Enter acc-no: ";
    cin>>acc_no;
    balance=0;
}

void Account::checkbal(){
    cout<<name<<" your balance is "<<balance<<endl;
}

void Account::deposite(){
    cout<<"Amount of money you wanna deposit: ";
    int money;
    cin>>money;
    balance+=money;
}

void Account::withdraw(){
    cout<<"Amount of money you wanna withdraw: ";
    int money;
    cin>>money;
    balance-=money;
}

void Account::display(){
    cout<<"\nName: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Balance: "<<balance<<"\n"<<endl;
}

void menu() {
    cout << "** Main Menu ***\n";
    cout << "1. Open New Account\n";
    cout << "2. Close Old Account\n";
    cout << "3. Deposit Money\n";
    cout << "4. Withdraw Money\n";
    cout << "5. Check Balance\n";
    cout << "6. Exit\n";
    cout << "   Enter Your Option(1-6): ";
}

void deleteAccount(vector<Account>& accounts) {
    int index;
    cout << "Which index account you want to delete: ";
    cin >> index;

    if (index >= 0 && index < accounts.size()) {
        if (accounts[index].getbal() != 0) {
            cout << "Account cannot be deleted as it still has a balance.\n";
        } else {
            accounts.erase(accounts.begin() + index);
            cout << "Account deleted successfully.\n";
        }
    } else {
        cout << "Invalid account index.\n";
    }

}

int main(){
    string adminName="TZ"; int adminPass=1234;
    string urName; int pass; 
    cout<<"Enter userID: "; cin>>urName;
    cout<<"Enter pass: "; cin>>pass;

    if( !(urName==adminName && pass==adminPass) ){
        cout<<"You are not admin"<<endl;
        return 0;
    }

    vector<Account>ob;
    //int accCnt=0;

    while(1){
        menu();
        int key; cin>>key;
        if(key==1){
            Account newAccount;
            newAccount.create();
            ob.push_back(newAccount);
            newAccount.display();
        }else if(key==2){
            deleteAccount(ob);
        }else if(key==3){
            int indx;
            cout<<"What account you wanna deposite: "<<endl;
            cin>>indx;
            if(indx<0 || indx>=ob.size()){
                cout<<"Account doesnt exists"<<endl;
                continue;
            }
            ob[indx].deposite();
            ob[indx].display();
        }else if(key==4){
            int indx;
            cout<<"What account u wanna withdraw: "<<endl;
            cin>>indx;
            if(indx<0 || indx>=ob.size()){
                cout<<"Account doesnt exists"<<endl;
                continue;
            }
            ob[indx].withdraw();
            ob[indx].display();
        }else if(key==5){
            int indx;
            cout<<"Which account you wanna check balance: "<<endl;
            cin>>indx;
            if(indx<0 || indx>=ob.size()){
                cout<<"Account doesnt exists"<<endl;
                continue;
            }
            ob[indx].checkbal();
        }else if(key==6){
            return 0;
        }


    }

}