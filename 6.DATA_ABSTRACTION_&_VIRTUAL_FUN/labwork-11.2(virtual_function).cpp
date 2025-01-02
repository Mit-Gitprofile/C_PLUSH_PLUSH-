
//QUE-1

/*Write a Program to perform some basic mathematical operations using an Abstract
class such as:
- the area of a circle
- the area of a triangle
- the area of a rectangle
- use one single pure virtual function named calculate() to perform all the above
operations*/


#include <iostream>
using namespace std;

class Shape{
    public:
        virtual float calculate()=0;
    
};

class Circle: public Shape{
    public: 
        float redious;
        
        float calculate(){
            float area;
            area=3.14*redious*redious;
            
            cout<<"the area of a circle :"<<area<<endl;
        }
};

class Tringle: public Shape{
    public: 
        float base;
        float height;
        
        float calculate(){
            float area;
            area=0.5*base*height;
            
            cout<<"the area of a Tringle :"<<area<<endl;
        }
};

class Rectengle: public Shape{
    public: 
        float length;
        float weidth;
        
        float calculate(){
            float area;
            area=length*weidth;
            
            cout<<"the area of a Tringle :"<<area<<endl;
        }
};


int main()
{
    Circle c1;
    c1.redious=5;
    c1.calculate();
    
    Tringle t1;
    t1.base=4;
    t1.height=6;
    t1.calculate();
    
    Rectengle r1;
    r1.length=5;
    r1.weidth=5;
    r1.calculate();

    return 0;
}