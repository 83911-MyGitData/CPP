#include <iostream>
using namespace std;

class Date{
private:
    int day;
    int month;
    int year;
public:
    Date()
    {
        day = 10;
        month = 10;
        year = 2010;
    }
    void acceptDate()
    {
        cout<<"Enter day"<<endl;
        cin>>day;
        cout<<"Enter month"<<endl;
        cin>>month;
        cout<<"Enter year"<<endl;
        cin>>year;

    }

     void displayDate()
     {
        cout<<day<<"-"<<month<<"-"<<year<<endl;
     }
};

class Person{
    private:
    string name;
    string address;
    Date birthdate;

    public:
    Person()
    {
        name = "";
        address = "";
        
    }

    void acceptPerson()
    {
        // Date::acceptDate();
        cout<<"Enter name"<<endl;
        cin>>name;
        cout<<"Enter address"<<endl;
        cin>>address;
        cout<<"Enter birthdate"<<endl;
        birthdate.acceptDate();

    }

    void displayPerson()
    {
        cout<<"Name is "<<name<<endl;
        cout<<"Address is  "<<address<<endl;
        cout<<"Birthdate is "<<endl;
        birthdate.displayDate();
    }
    


};

class Employee{
    private:
    int id;
    double sal;
    int dept;
    Date joining_date;

    public:
    Employee()
    {
        id = 0;
        sal = 0.0;
        dept = 0;
    }
    void acceptEmp()
    {
       // Date::acceptDate();
        cout<<"Enter id"<<endl;
        cin>>id;
        cout<<"Enter sal"<<endl;
        cin>>sal;
        cout<<"Enter dept"<<endl;
        cin>>dept;
        joining_date.acceptDate();
    }

    void displayEmp()
    {
        cout<<"Id is "<<id<<endl;
        cout<<"Sal is  "<<sal<<endl;
        cout<<"dept is "<<dept<<endl;
        cout<<"Joining date is "<<endl;
        joining_date.displayDate();
    }
};
int main()
{
    Employee e;
    Person p;
    e.acceptEmp();
    e.displayEmp();

   
    p.acceptPerson();
    p.displayPerson();

    return 0;

   
}