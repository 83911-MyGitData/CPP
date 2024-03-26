#include <iostream>
using namespace std;

class Cylinder{
    private:
        double radius;
        double height;
        static const double PI;
    public:
        Cylinder(double radius,double height){
            this->radius = radius;
            this->height = height;
        }
        int getRadius()
        {
            return radius;
        }

        int getHeight()
        {
            return height;
        }

        void printVolume()
        {
            cout<<" Area - "<< PI*radius*radius*height<<endl;

        }
};

const double Cylinder::PI = 3.14;


int main()
{   

    Cylinder c1(15.0,5.0);
    Cylinder c2(8.0,4.0);
    Cylinder c3(9.0,3.0);

    c1.printVolume();
    c2.printVolume();
    c3.printVolume();

    return 0;
}

/*#Cylinder()
Cylinder(double radius, double height)
getRadius()
setRadius()
getHeight()
setHeight()
getVolume()
printVolume()
*/