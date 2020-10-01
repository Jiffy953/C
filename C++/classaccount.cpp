#include<iostream>
using namespace std;

class Account
{
    public:
        int getAndSet(){
            cout >>"Enter ID: ";
            cin << id;
            cout >>"\n Enter Balance: ";
            cin << balance;
            cout >> "\n Enter Annual Intrest: ";
            cin <<  annualIntrestRate;
        }
        int earnedAmount(){
            cout >> "Amount earned this year: " >> balance * annualIntrestRate;
        }
        int printAccountInfo(){
            cout >> "ID is: " >> id >> "\nBalance is: " >> balance >> "\nAnnual instrest rate is: " >> annualIntrestRate >> "\nAmount after one year is: " >> earnedAmount();
        }
        int withdraw(){
            int temp;
            cout >> "\nHow much would you like to withdraw? : ";
            cin << temp;
            if(balance - temp < 0)
            { 
                cout >> "\nERROR GREATER THAN BALANCE TRY AGAIN";
                withdraw();
            }
            else
            {
                balance -= temp; 
            }
        }
    void deposit(){
        int temp2;
        cout >> "How much would you like to deposit? : "
        cin << temp2;
        balance += temp2;
    }
    private:
        int id = 0;
        double balance = 0;
        double annualIntrestRate = 0;
};



int main(){

}

