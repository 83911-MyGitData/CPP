// Q2. A shop sells book or tapes. The Book class holds id, title, author, and price; whereas Tape class
// holds id, title, artist, and price. There is 5% discount on tapes, while 10% discount on books.
// Assuming that each user purchase 3 products (either book or tape), calculate final bill. The program
// should be menu driven and should not cause memory leakage.

#include<iostream>
using namespace std;

class Product
{
    private:
    int id;
    string title;
    double price;

    public:
    double getPrice()
    {
        return price;
    }
    void setPrice(double p)
    {
        price=p;
    }

    void acceptProduct()
    {
        cout<<"Enter the id "<<endl;
        cin>>id;
        cout<<"Enter the title "<<endl;
        cin>>title;
        cout<<"Enter the price "<<endl;
        cin>>price;

    }
    void displayProduct()
    {
        cout<<"Id "<<id<<endl;
        cout<<"Title "<<title<<endl;
        cout<<"Price "<<price<<endl;
    }


};
class Book: public Product
{
    private:
    string author;

    public:
    void accept()
    {
        cout<<"Enter author "<<endl;
        cin>>author;
        Product::acceptProduct();
        setPrice(getPrice()-getPrice()*0.1);
        
    }
    void display()
    {
        cout<<"Author "<<author;
        Product::displayProduct();
    }
    
};

class Tape:public Product
{
    private:
    string artist;

    public:
    void accept()
    {
        cout<<"Enter artist "<<endl;
        cin>>artist;
        Product::acceptProduct();
        setPrice(getPrice()-getPrice()*0.05);
        
    }
    void display()
    {
        cout<<"Author "<<artist;
        Product::displayProduct();
    }

};
int main()
{
    int choice;
    int index=0;
    Product * arr[3];
    do{

    cout<<"0.EXIT"<<endl;
    cout<<"1.Book"<<endl;
    cout<<"2.Tape"<<endl;
    cout<<"3.Total Bill"<<endl;
    cout<<"Enter Choice"<<endl;
    cin>>choice;
    switch(choice){
        case 0:
        cout<<"Thank you"<<endl;
        break;
        case 1:
        if(index<3){
            arr[index]=new Book();
            arr[index]->acceptProduct();
            index++;
        }
        else
        cout<<"Array is full "<<endl;
        break;
        case 2:
        if(index<3){
            arr[index]=new Tape();
            arr[index]->acceptProduct();
            index++;
        }
        else
        cout<<"Array is full "<<endl;
        break;
        case 3:
        {
            double Total=0;
            for(int i=0;i<index;i++)
            Total =Total+arr[i]->getPrice();
            cout<<Total; 
        }
        break;
        default:
        cout<<"Wrong choice "<<endl;
        break;


    }
 }
    while(choice!=0);
    for(int i=0;i<index;i++)
       delete arr[i];
       return 0;

}