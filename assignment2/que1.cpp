#include<iostream>
using namespace std;

class BoxVolume()
{
    private:
    int l;
    int b;
    int w;

    public:

    BoxVolume(){
        l = 6;
        b = 7;
        w = 4;
    }

    BoxVolume(int length,int breadth,int width){
        l = length;
        b = breadth;
        w = width;
    }

    BoxVolume(int length)
    {
        l = length;
        b = length;
        w = length;
    }
    void Volume{
        cout<<l*b*w<<endl;
    }


};

int main()
{
    int choice;
    do{
        cout<<"0 Exit"<<endl;
        cout<<"1 Print date"<<endl;
        cout<<"2 accept date"<<endl;
        cout<<"3 to know if the year is leap yaer or not"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice; 
    }
    while(choice!=0)

    BoxVolume b;
    b.Volume()
    
    return 0;
}