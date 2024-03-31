/*#include <iostream>
using namespace std;


enum EAccountType
{
    SAVING,
    CURRENT,
    DMAT

};

class InsufficientFundsException
{
    private:
      int accno;
      double currentBalance;
      double withdrawAmount;
      string message;

    public:
        InsufficientFundsException(int accno,double currentBalance,double withdrawAmount)
        {
            this->accno = accno;
            this->currentBalance = currentBalance;
            this->withdrawAmount = withdrawAmount;
        }

        InsufficientFundsException(string message)
        {
           this->message = message ;
        }
        void displayMessage()
        {
            cout << "InsufficientFundsException Exception :" << endl;
            cout << "Message :" << message << endl; 
        }
};
class Account
{
    private:
        int accno;
        EAccountType e;
        double balance;
        
    public:
        Account()
        {
            int accno = 1;
            this->e = SAVING;
            double balance = 0.0;
        }
        Account(int accno,double balance)
        {
            this->accno = accno;
            this->e = SAVING;
            this->balance = balance;
        }

        void accept()
        {
            cout<<"Enter accountNO"<<endl;
            cin>>accno;
            cout<<"Enter balance"<<endl;
            cin>>balance;           
        }

        int getAccno()
        {
            return accno;
        }

        void display()
        {
            cout<<"The account no is "<<accno<<endl;
            cout<<"The balance no is "<<balance<<endl;
        }

        double deposit(double amount)
        {
            if(amount<0)
                throw InsufficientFundsException("There is nothing called -ve amount");
            cout<<"The deposit is "<<amount<<endl;
            double balance = amount + balance;
            return balance;

            
        }

        double withdraw(double amount)
        {
            cout<<"The withdrawal is "<<amount<<endl;
            if(balance<amount)
                throw InsufficientFundsException("you dont have sufficient balance");
            double balance = balance - amount;
            return balance; 
        }

        

        void acceptBalance(double amount,double balance)
        {
            cout<<"Enter balance"<<endl;
            cin>>balance;
        }
};
int main()
{

    int choice;
    Account *arr[5];
    int index =0;

    do{
        cout<<"O to exit"<<endl;
        cout<<"1 to enter account details"<<endl;
        cout<<"2 to enter deposit"<<endl;
        cout<<"3 to withdraw"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 0:
                cout<<"Thank you hope you liked the service"<<endl;
            break;

            case 1:
               if(index<5)
                {
                    for(int i=0;i<index;i++)
                    {
                        arr[i] = new Account();
                        arr[i]accept();
                        index++;
                    }
                }
            break;

            case 2:
                try{
                    int accno;
                    double a;
                    cout<<"enter account number"<<endl;
                    cin>>accno;
                    cout<<"enter amount to deposit"<<endl;
                    cin>>a;

                    for(int i =0;i<index;i++)
                    {
                        if(arr[i]->getAccno() == accno)
                        {
                            arr[i]->deposit(a);
                        }
                    }
                }
                catch(InsufficientFundsException e)
                {
                    e.displayMessage();
                }

            break;

            case 3:
            try{
                int accno;
                double a;
                cout<<"enter account number"<<endl;
                cin>>accno;
                cout<<"enter amount to withdraw"<<endl;
                cin>>a;

                for(int i=0;i<index;i++)
                {
                    if(arr[i]->getAccno()==accno)
                    {
                        arr[i]->withdraw(a);
                    }
                }
            }catch(InsufficientFundsException e)
            {
                e.displayMessage();
            }

            break;
        }
    }while(choice!=0);

    return 0;
}*/