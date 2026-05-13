// Program for function overloading

#include<iostream>
using namespace std;

class A{
    private:
        int h, w;
        float base, h1;
        float r;

    public:
        // Area of rectangle
        inline int area(int height, int width){
            h = height;
            w = width;
            return (h * w);
        }

        // area of circle
        float area(float radius){
            r = radius;
            return (3.14f * r * r);
        }

        // area of triangle
        float area (float b, float h){
            base = b;
            h1 = h;
            return (0.5f * base * h1);
        }
};

int main(){
    A obj;

    cout << "\nThe Area of Rectangle = " << obj.area(10, 20) << endl;

    cout << "The Area of Circle = " << obj.area(4.5f) << endl;

    cout << "The Area of Triangle = " << obj.area(6.0f, 7.0f) << endl;

    return 0;
}

/*
------------ Output --------------
➜  module1 git:(module-1) ✗ g++ function-overloading.cpp -o function-overloading    
➜  module1 git:(module-1) ✗ ./function-overloading 

The Area of Rectangle = 200
The Area of Circle = 63.585
The Area of Triangle = 21
➜  module1 git:(module-1) ✗ 
*/