//average_speed    =  total distance/atime;

#include <iostream>
#include <cmath>
using namespace std;
#define route_limit 5

int main(){
double distance, hour, total_distace = 0, total_time_taken = 0, average_speed;

int route_counter;

for(route_counter = 0; route_counter < route_limit; route_counter++){
    cout<<"\n Enter Distane taken ";
    cin>>distance;
    total_distace = total_distace + distance;
}

cout<<"\n";
cout<<"\n";
cout<<"\n";
for(route_counter =0; route_counter<route_limit; route_counter++){
    cout<<"\n Enter time taken ";
    cin>>hour;
    total_time_taken = total_time_taken+hour*60; // to get second we multipy with 60sec
}
cout<<" \n Total distance is :" <<"  "<<total_distace<<"kg";
cout<<" \n Total time is :" <<" "<< total_time_taken<<"seconds";


average_speed = total_distace/total_time_taken;
cout<< "\n finaly ";
cout<<" \n The average speed is"<<" "<<average_speed<<endl;

}
