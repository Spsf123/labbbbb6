#include <iostream>
#include <cmath>
using namespace std;

float deg2rad(double a1){
    return (a1/180)*M_PI;
}
float rad2deg(double a2){
    return a2*180/(M_PI);
}
float findXComponent(double l1,double l2,double a3,double a4){
    return l1*cos(a3)+l2*cos(a4);
}
float findYComponent(double l1,double l2,double a3,double a4){
    return l1*sin(a3)+l2*sin(a4);
}
float pythagoras(double a,double b){
    return sqrt(pow(a,2) + pow(b,2));
}
void showResult(double c,double d){
    cout <<  "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " << c <<"\n";
    cout << "Direction of the resultant vector (deg) = "<< d << "\n";
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
