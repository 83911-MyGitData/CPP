#include <iostream>
using namespace std;

class Student(
 private:
     int roll_no;
     string name;
     int marks;

 public:
     void initStudent(){
        roll_no = 31;
        name = "Sneha";
        marks = 117;
     }
void printStudentOnConsole(){
    cout<<"The roll no is "<<roll_no<<endl;
    cout<<"the name is "<<name<<endl;
    cout<<"Marks - "<<marks<<endl;
}
void acceptStudentFromConsole(){ 
    cout<<"Enter roll no "<<endl;
    cin>>roll_no;
    cout<<"Enter name "<<endl;
    cin>>name;
    cout<<"Enter marks "<<endl;
    cin>>marks;

}
    
);

int main()
{
    int choice;
    Student s1;
    cout<<"Enter 0 to exit"<<endl;
    cout<<"Enter 1 to enter details"<<endl;
    cout<<"Enter 2 to see details"<<endl;

    while(choice!=0){
        switch(choice)
        {
            case 1:
            s1.acceptStudentFromConsole();
            case 2:
            s1.printDateOnConsole();
            default:
            cout<<"ENTER VALID VALUE"<<endl;
        }
    }

    printf("Thank you for using the app");
    return 0;
}