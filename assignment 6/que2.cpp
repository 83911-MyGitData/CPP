#include <iostream>
using namespace std;

class Product{
    private:
        int id;
        string title;
        double price;
    public:
        virtual void acceptData()
        {
            cout<<"Enter ID"<<endl;
            cin>>id;
            cout<<"Enter title"<<endl;
            cin>>title;
           cout<<"Enter price"<<endl;
            cin>>price;
        }

        virtual void displayData()
        {
            cout<<"ID - "<<id<<endl;
            cout<<"Title - "<<title<<endl;
            cout<<"Price - "<<price<<endl;
        }
};


class Book: public Product
{
    private:
        string author;

    public:
        void acceptData(){
            Product::acceptData();
            cout<<"Enter author"<<endl;
            cin>> author;
        }

         void displayData()
         {
            Product::displayData();
            cout<<"author - "<<author<<endl;
         }

};

class Tape: public Product
{
    private:
        string artist;

    public:
        void acceptData(){
            Product::acceptData();
            cout<<"Enter artist"<<endl;
            cin>> artist;
        }

         void displayData()
         {
            Product::displayData();
            cout<<"artist - "<<artist<<endl;
         }

};


int main()
{
    int choice;
    Product *arr[3];
    int index = 0;

    do{
        cout<<"Enter 0 to exit"<<endl;
        cout<<"Enter 1 to buy book"<<endl;
        cout<<"Enter 2 to buy Tape"<<endl;
        

        switch(choice)
        {
            case 0:
            cout<<"Tq"<<endl;
            break;

            case 1:
            if(index<3)
            {
                Product[index] = new Book();
                Product[index]->acceptData();
                index++;
            }
            else
            cout<<"Discount for only 3 items"<<endl;
            break;

            case 2:
            if(index<3)
            {
                Product[index] = new Tape();
                Product[index]->acceptData();
                index++;
            }
            else
            cout<<"Discount for only 3 items"<<endl;
            break;
        }
    }while(choice>!=0)


    return 0;
}