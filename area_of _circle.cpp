// varible usege in miath
#include <iostream>
#include <cmath>
#include <iomanip> // for adding some manipulation


using namespace std;

#define p 3.14

int main(){
    double area_of_circle,area_of_triangle,area_of_square, average_speed;
    int radius;
    cout<<"Enter radius :";
    cin>> radius;
        area_of_circle = p*pow(radius,2);
        //area_of_triangle = 0.5*width*height;
        //area_of_square   = length*length;
        //average_speed    = distance/time;

     cout<< "The area of the circle is: "<< area_of_circle;

}
