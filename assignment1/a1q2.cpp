#include <iostream>
using namespace std;

class Date{
    private:
        int date;
        int month;
        int year;
    public:
        void initDate(){
            date = 10;
            month = 10;
            year = 2024;

        }
        void printDateOnConsole(){
            cout<<date<<"/"<<month<<"/"<<year<<endl;

        }
        void acceptDateFromConsole(){
            cout<<"enter date"<<endl;
            cin>>date;
            cout<<"enter month"<<endl;
            cin>>month;
            cout<<"enter year"<<endl;
            cin>>year;

        }
        bool isLeapYear(){
            if((year % 100 != 0) && (year% 4 == 0))
                return true;

            else 
                return false;
        }
};

int main()
{   
    Date d1;
    int choice;

   do{
        cout<<"0 Exit"<<endl;
        cout<<"1 Print date"<<endl;
        cout<<"2 accept date"<<endl;
        cout<<"3 to know if the year is leap yaer or not"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;

        switch(choice)
    {
        case 0: 
            cout<<"Thank you for choicing the app"<<endl;
            break;
        case 1: 
            d1.printDateOnConsole();
            break;
        case 2:
            d1.acceptDateFromConsole();
            break;
        case 3:
           
            if ( d1.isLeapYear()  ==1)
                cout<<"Leap year"<<endl;
            else
                 cout<<"Not leap year"<<endl;
            break;
        default:
            cout<<"Wrong choice"<<endl;
            break;
    }
    }while(choice != 0);

    return 0;
}