
#include<iostream>

using namespace std;

class Address
{
private:
    string building;
    string street;
    string city;
    int pin;

public:
    
    Address()
    {
        cout<<"Address is="<<endl;
        building="Sunbeam";
        street="shanivar peth";
        city="Karad";
        pin=410115;
    }
    

    Address(string b,string s, string c,int p){
        building= b;
        street= s;
        city=c;
        pin =p;


    }


    
    void setBuilding(string building )
    {
        this->building = building;
    }
    void setstreet(string street )
    {
        this->street = street;
    }
    void setcity(string city )
    {
        this->city = city;
    }
    void setpin(int pin )
    {
        this->pin = pin;
    }
    
    
  
    string getbuilding()
    {
        return building;
    }
    string getstreet()
    {
        return street;
    }
    string getcity()
    {
        return city;
    }
    int getpin()
    {
        return pin;
    }
void acceptAddress(){
    cout<<"Enter the building "<<endl;
    cin>>building;
    cout<<"Enter the street "<<endl;
    cin>>street;
    cout<<"Enter the city "<<endl;
    cin>>city;
    cout<<"Enter the pin"<<endl;
    cin>>pin;
}
void displayAddress(){
    cout<<"Building "<<building<<endl;
    cout<<"street "<<street<<endl;
    cout<<"city "<<city<<endl;
    cout<<"pin "<<pin<<endl;


}
};

int main(){
    Address A1;
    A1.acceptAddress();
    A1.displayAddress();

    A1.setBuilding("SUNBEAM");
    cout<<"building   "<<A1.getbuilding()<<endl;

}