//Header files 
#include <iostream>
#include <iomanip> 
#include <cctype> //toupper
using namespace std;

//Function prototype 
bool fahrenheitToCelsius(double fahrenheit, double& celsius);

int main() {

        //Variables
        char answer;
        double fahrenheit;
        double celsius;
        bool flag;
        string greaterThanZero;

        cout << "Temperature conversion" << endl;
        cout << "======================" << endl;

        do {

                cout << "Enter temperature in Fahrenheit: ";
                cin >> fahrenheit;

                flag = fahrenheitToCelsius(fahrenheit, celsius); //fahrenheitToCelsius is called with two parameters, celsius is passed by reference 

                if (flag) {
                        greaterThanZero = "true";
                }
                else {
                        greaterThanZero = "false";
                }

                //Prints results 
                cout << fixed << showpoint << setprecision(1) << celsius << " degrees Celsius." << endl;
                cout << endl;

                cout << "One more time (Y/N)? ";
                cin >> answer;
                cout << endl;

        } while (toupper(answer) == 'Y');

        return 0;
}

//fahrenheitToCelsius function returns boolean to check if ceslsius if above zero 
bool fahrenheitToCelsius(double fahrenheit, double& celsius) {

        //Conversion 
        celsius = 5.0 / 9.0 * (fahrenheit - 32);

        //Return true or false depending if degree is below zero 
        if (celsius > 0) {
                return true;
        }
        else {
                return false;
        }
}
