#include <iostream>
using namespace std;

float circleRadius(int radius){
    //area of a circle = pi(r^2)
    float area =3.14*(radius*radius);

    return area;

}
int main(){

    int radius = 0;
    cout << " what is the radius of your circle:"  ;
    cin >> radius;
    // calls area function 
    float area = circleRadius(radius);

    cout << " Area of the circle is: " << area << endl;
            return 0;
}