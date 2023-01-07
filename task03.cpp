#include<iostream>
using namespace std;

float taxCalculator(char type,float price);

main()
{
    system("cls");

    float tax,price,finprice;
    char code;
    cout << "Enter the price of the vechile : ";
    cin >> price;
    cout << "Enter the code of the vechile : ";
    cin >> code;
    tax= taxCalculator(code,price);
    finprice = price + tax;
    cout << "Price after the tax : " << finprice ;
}


float taxCalculator(char type,float price)
{
   float tax;
   if (type == 'M')
   {
       tax=0.06*price;
       return tax;
   }
   if (type == 'E')
   {
       tax=0.08*price;
       return tax;
   }
   if (type == 'S')
   {
       tax=0.1*price;
       return tax;
   }
   if (type == 'V')
   {
       tax=0.12*price;
       return tax;
   }
   if (type == 'T')
   {
       tax=0.15*price;
       return tax;
   }
}