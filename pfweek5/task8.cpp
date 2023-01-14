#include <iostream>
using namespace std;
float taxCalculate(char code, float price);
main()
{
    string name;
    char code;
    float price;
    cout << "Enter Vehicle Name: ";
    cin >> name;
    cout << "Enter Vehicle Code: ";
    cin >> code;
    cout << "Enter Vehicle Price: ";
    cin >> price;
    float taxprice = taxCalculate(code, price);
    cout << "The final price on a vehicle of type " << code << " after adding the tax is " << taxprice;
}
float taxCalculate(char code, float price)
{
    if(code == 'M')
    {
        float tax = price * 1.06;
        return tax;
    }
    if(code == 'E')
    {
        float tax = price * 1.08;
        return tax;
    }
    if(code == 'S')
    {
        float tax = price * 1.10;
        return tax;
    }
    if(code == 'V')
    {
        float tax = price * 1.12;
        return tax;
    }
    if(code == 'T')
    {
        float tax = price * .15;
        return tax;
    }
    return 0;                
}