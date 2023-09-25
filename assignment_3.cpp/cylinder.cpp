#include "./cylinder.h"

cylinder::cylinder():radius(1.0),height(1.0)
{
}

cylinder::cylinder(double radius, double height):radius(radius),height(height)
{
}

double cylinder::getradius (){
    return this->radius;
}

double cylinder::getheight (){
    return this->height;
}

void cylinder::setradius (double radius){
    this->radius = radius;
}

void cylinder::setheight (double height){
    this->height = height;
}
void cylinder::acceptvalues()
{
    cout<< "Enter the radius of the cylinder : ";
    cin>>this->radius;;
    cout<< "Enter the height of the cylinder : ";
    cin>>this->height;
}

double cylinder::getvolume (){
    return 3.14*this->radius*this->radius*this->height;
}

void cylinder::printvolume()
{
    cout << "The volume of the cylinder is " <<getvolume()<<"."<<endl;
}
