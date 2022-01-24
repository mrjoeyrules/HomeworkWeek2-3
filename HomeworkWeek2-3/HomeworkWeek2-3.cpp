#include <iostream>
#include <string>
using namespace std;

double doubleValidation(string inputMessage)
{
    bool loopControl = true;
    string rawValue;
    while (loopControl)
    {
        cout << inputMessage << endl;
        cin >> rawValue;
        try
        {
            double convertedValue = stod(rawValue);
            loopControl = false;
            return convertedValue;
        }
        catch (const std::exception&)
        {
            cout << "Value " << rawValue << " couldn't be converted to Double, Try again" << endl;
        }
    }
}


int main()
{
    double dollar = 1;
    double pound = 0;
    double conversionRate = doubleValidation("Enter the conversion rate for pounds per dollar: \n");
    while (true)
    {
        pound = 0;
        pound = dollar * conversionRate;
        cout << "Dollar Pound" << endl;
        cout << dollar << "      " << pound << endl;
        dollar++;
        if (pound > 10)
        {
            break;
        }
        else
        {
            continue;
        }

    }
    
}
