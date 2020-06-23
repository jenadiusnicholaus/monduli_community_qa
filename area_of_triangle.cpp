//area_of_triangle = 0.5*width*height;

 #include <iostream>
 #include<cmath>

 using namespace std;
#define half
 int main()
 {
 // we need to declare variable here
  double width, height, area_of_tringle = 0;
  cout<<"Enter width and height";
  cin>> width>>height;

  //now some math here
  area_of_tringle = half(width*height);
  cout<<" The area of the triangle is :"<<area_of_tringle;






 }
