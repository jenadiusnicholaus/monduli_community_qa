
 //area_of_square   = length*length

 #include <iostream>
 #include<cmath>
  using namespace std;

  #define half 0.5

  int main(){
  // we need to declare some variable here
  double length, area_of_square = 0;
  cout<<"Enter length";
  cin>>length;

  //we need to do some math here

  area_of_square = pow(length,2);
  cout<<"area of triangle is :"<<area_of_square<< endl;
  }
