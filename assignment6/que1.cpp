#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
     void acceptDate()
    {
        cout<<"Enter day "<<endl;
        cin>>day;
        cout<<"Enter month "<<endl;
        cin>>month;
        cout<<"Enter year"<<endl;
        cin>>year;}
    
    void displayDate()
    {
        cout<<day<<"-"<<month<<"-"<<year<<endl;


    }

};

class Person
{
    private:
    string name;
    string address;
    Date birthdate;

    public:
     virtual void acceptData()
    {
        cout<<"Enter name"<<endl;
        cin>>name;
        cout<<"Enter address"<<endl;
        cin>>address;
        cout<<"Enter date of birth"<<endl;
        birthdate.acceptDate();
        

    }

    virtual void displayData()
    {
        cout<<"the name is "<<name<<endl;
        cout<<"The address is "<<address<<endl;
        cout<<"the date of birth is";
        birthdate.displayDate();

    }
};


class Employee : public Person
{
    private:
    int id;
    double sal;
    string dept;
    Date doj;
    

    public:

     void acceptData()
    {
        Person::acceptData();
        cout<<"Enter id"<<endl;
        cin>>id;
        cout<<"Enter sal"<<endl;
        cin>>sal;
        cout<<"Enter dept"<<endl;
        cin>>dept;
        doj.acceptDate();
        

    }

    void displayData()
    {
        Person::displayData();
        cout<<"the id is "<<id<<endl;
        cout<<"The sal is "<<sal<<endl;
        cout<<"the dept is"<<dept<<endl;
    }




};

int main()
{

    Person P;
    P.acceptData();
    P.displayData();


    // Employee e;
    // e.acceptData();
    // e.displayData();
    return 0;
}