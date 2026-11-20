//ACTIVITY 3:EVALLUATING CLASS DESIGN
//Learning outcome: Evaluate encasulation violations 
//===============================
#include <iostream>
using namespace std;
//================================
//THE BAD DESIGN (Violation of encapsulation)
//==============================
class BadBankAccount {
    public:
    //Everything is public! Anoyone can change the balance directly.
    double balance;
    BadBankAccount(){
        balance=0.0;
    }
};
//================================
//THE GOOD DESIGN (Proper encapsulation)
//=============================
class GoodBankAccount{
    private:
    //Data is hidden. It can only be changed through the methods.
    double balance;
    public:
    GoodBankAccount(){
        balance=0.0;
    }
    void deposit(double amount){
        if (amount >0){
            balance+=amount;
        }
    }
    double getBalance(){
        return balance;
    }

};
int main() {
    cout<<"---Testing BAD Design---"<<endl;
    BadBankAccount badAccount;
    //Direct access!No validation.We can hack the account.
    badAccount.balance=-5000;//Impossible in real life!
    cout<<"Bad Account Balance: "<<badAccount.balance<<endl;

    cout<<"\n--Testing GOOD Design---"<<endl;
    GoodBankAccount goodAccount;
    //goodAccount.balance=-5000;//Error!Private! The compiler will block this
    //We must use the safe method
    goodAccount.deposit(1000);
    cout<<"Good Account Balance: "<<goodAccount.getBalance()<<endl;
    return 0;


}