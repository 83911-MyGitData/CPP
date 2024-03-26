#include <iostream>
using namespace std;

class Time
(
    private:
        int h;
        int m;
        int s;

    public:
    Time(int h, int m,int s);
    {
        num1 = n1;
        num2 = n2; // Assignment
    }
        int getHour(){
            return h;
        }
        int getMinute(){
            return m;
        }
        int getSeconds(){
            return s;
        }
        void printTime(){
            cout<<h<<":"<<":"<<s<<":"<<endl;
        }
        void setHour(int h1){
            h = h1;
        }
        void setMinute(int m1){
            m = m1; 
        }
        void setSeconds(int s1){
            s = s1;
        }
    
);

int main()
{
    Time t1(10,10,10);
    Time t2(18,15,32):
    return 0;

    t1.printTime();
    t2.printTime();
}

/*Time()
Time(int h,int m,int s)
getHour()
getMinute()
getSeconds()
printTime()
setHour()
setMinute()
setSeconds()*/