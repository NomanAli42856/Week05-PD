#include<iostream>
using namespace std;

float volpyr(float length , float width , float height,string unit);

main()
{
    system("cls");
    float length,width,height,result;
    string unit;
    cout << "Enter the length of pyramid : ";
    cin >> length;
    cout << "Enter the width of pyramid : ";
    cin >> width;
    cout << "Enter the height of pyramid : ";
    cin >> height;
    cout << "Enter the unit : ";
    cin >> unit;
    result = volpyr(length,width,height,unit);
    cout << result << " cubic " << unit;
}


float volpyr(float length , float width , float height,string unit)
{
   float volume;
   volume = (length*width*height)/3;
   if (unit == "centimeters")
   {
       volume = volume * 1000000;
       return volume;
   }
   if (unit == "kilometers")
   {
       volume = volume/1000000000;
       return volume;
   }
   if (unit == "millimeters")
   {
       volume = volume * 1000000000;
       return volume;
   }
}