#include <iostream>
#include <string>
#include <vector>
using namespace std;
class BankAccount {
private:
    string userId;
    string password;
    double balance;
public:
    BankAccount(string id,string pass) {
        userId = id;
        password = pass;
        balance = 0.0;
    }
    bool authenticate(string id,string pass) {
        return (userId == id && password == pass);
    }
    void deposit(double amount) {
        if (amount>0) {
            balance+=amount;
            cout<<"Successfully deposited $"<<amount<<"\n";
        } 
        else{
            cout<<"Invalid deposit amount."<<endl;
        }
    }
    void withdraw(double amount){
        if(amount>balance){
            cout<<"Insufficient funds! Current balance: $"<<balance<<endl;
        } 
        else if(amount<=0){
            cout<<"Invalid withdrawal amount."<<endl;
        } 
        else{
            balance-=amount;
            cout<<"Successfully withdrew $"<<amount<<endl;
        }
    }
    void displayBalance(){
        cout<<"Your current balance is: $"<<balance<<endl;
    }
};
int main() {
    string id, pass;
    int choice;
    BankAccount*currentUser = nullptr;
    cout<< "--- Welcome to the Bank System ---\n";
    while(true){
        cout<<"\n1. Create Account\n2. Login\n3. Quit\nSelection: ";
        cin>>choice;
        if(choice==1) {
            cout << "Enter User ID: ";
            cin >> id;
            cout << "Enter Password: ";
            cin >> pass;
            currentUser = new BankAccount(id, pass);
            cout << "Account created successfully!"<<endl;
        } 
        else if(choice == 2) {
            if(currentUser == nullptr) {
                cout << "No account exists. Please create one first."<<endl;
                continue;
            }
            cout << "User ID: ";
            cin >> id;
            cout << "Password: ";
            cin >> pass;
            if (currentUser->authenticate(id, pass)) {
                cout << "\nLogin Successful!"<<endl;
                int subChoice = 0;
                while (subChoice != 4) {
                    cout << "\n1. Withdraw\n2. Deposit\n3. Balance\n4. Logout\nSelection: ";
                    cin >> subChoice;
                    double amount;
                    switch (subChoice) {
                        case 1:
                            cout << "Enter amount to withdraw: ";
                            cin >> amount;
                            currentUser->withdraw(amount);
                            break;
                        case 2:
                            cout << "Enter amount to deposit: ";
                            cin >> amount;
                            currentUser->deposit(amount);
                            break;
                        case 3:
                            currentUser->displayBalance();
                            break;
                        case 4:
                            cout << "Logging out..."<<endl;
                            break;
                        default:
                            cout << "Invalid option."<<endl;
                    }
                }
            } 
            else {
                cout << "Invalid ID or Password."<<endl;
            }

        } 
        else if (choice == 3) {
            cout << "Goodbye!"<<endl;
            break;
        } 
        else {
            cout << "Invalid selection. Try again."<<endl;
        }
    }
    delete currentUser;
    return 0;
}