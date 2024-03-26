#include <iostream>
using namespace std;

class Employee
{

private:
    int id;
    double salary;

public:
    Employee()
    {
        cout << "Inside Employee constructor" << endl;
    }
    Employee(int id, double salary)
    {
        cout << "Inside Employee(int,double)" << endl;
    }
    void setId(int id)
    {
        this->id = id;
    }

    int getId()
    {
        return id;
    }

    void setSalary(double salary)
    {
        this->salary = salary;
    }

    double getSalary()
    {
        return salary;
    }

    void accept(int n1, double n2)
    {
        cout << "Enter id" << endl;
        setId(n1);
        cout << "Enter salary" << endl;
        setSalary(n2);
    }

    void display()
    {
        cout << "Id is" << getId() << endl;
        cout << "salary is " << getSalary() << endl;
    }

    virtual ~Employee()
    {
        cout << "~Employee()" << endl;
    }
};

// manager class

class Manager : virtual public Employee
{
private:
    double bonus;

protected:
    void acceptManger()
    {
        Employee::accept();
        acceptManager();
    }

    void displayManger()
    {
        Employee::display();
        displayManager();
    }

public:
    Manager()
    {
        cout << "Inside Manager()" << endl;
    }
    Manager(int, double, double)
    {
        cout << "Inside Manager(int,double,double)" << endl;
    }

    void setBonus(double bonus)
    {
        this->bonus = bonus;
    }

    double getBonus()
    {
        return bonus;
    }

    void accept(double b1)
    {
        cout << "enter Bonus" << endl;
        setBonus(b1);
    }

    void display()
    {
        cout << "Bonus is " << endl;
        getBonus();
    }

    ~Manager()
    {
        cout << "~Manager()" << endl;
    }
};

// Salesman class
class Salesman : virtual public Employee
{
private:
    double comm;

public:
    Salesman()
    {
        cout << "Inside Salesman()" << endl;
    }
    Salesman(int id, double salary, double commission)
    {
        cout << "Inside Salesman(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displaySalesman();
    }
    ~Salesman()
    {
        cout << "~Salesman()" << endl;
    }
};

// salesmanager class

class SalesManager : public Manager, public Salesman
{
public:
    SalesManager()
    {
        cout << "Inside Salesmanager()" << endl;
    }
    SalesManager(int id, double salary, double bonus, double comm)
    {
        cout << "Inside SalesManager(int,double,double,double)" << endl;
    }

    ~SalesManager()
    {
        cout << "~Salesmanager()" << endl;
    }

    void accept()
    {
        Employee::accept();
        acceptManager();
        acceptSalesman();
    }

    void display()
    {
        Employee::display();
        displayManager();
        displaySalesman();
    }
};
int main()
{
    return 0;
}