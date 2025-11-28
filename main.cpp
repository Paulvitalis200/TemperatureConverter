#include <iostream>

using namespace std;

// Temperature Converter
// Convert Celsius to Fahrenheit and vice versa. Let the user choose the conversion direction.

/*
 * 1. Create two variables. fhrenheitTemp and celsiusTemp
 * 2. Create variables for storing value of fahrenheit to celsius
 * 3. Create variable for storing value of celsius to fahrenheit
 * 4. Prompt user to select whether they would like to convert fahrenheit to celsius or vice versa.
 * 5. Press 1 for fahrenheit to celsius and 2 for celsius to fahrenheit and 3 to exit program
 * 6. Check if the input is valid. If not valid, reprompt user
 * 6. Create the variables to store the user input
 * 7. Prompt user to enter value.
 * 8. Check if value is valid, if not valid, prompt user to enter valid value. Provide user with way to exit. If they
 * enter exit, exit the program.
 * 9. Convert value respectively depending on what the choice value was. either 1 or 2
 * 10. Print out value to the terminal
 */
int main() {
    double result = 0;

    int userConversionTypeChoice = 0;

    while (true) {
        cout << "Press 1 for fahrenheit to celsius. Press 2 for celsius to fahrenheit. Press 3 to exit" << endl;

        if (cin >> userConversionTypeChoice) {
            if (userConversionTypeChoice == 3) {
                return 0;
            }
            break;
        } else {
            cout << "Please enter a valid choice" << endl;
            cin.clear();

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    double temperature = 0;
    while (true) {
        cout << "Enter value to convert: ";

        if (cin >> temperature) {
            if (userConversionTypeChoice == 1) {
                result = (temperature - 32) / (static_cast<double>(9) / 5);
            } else {
                result = temperature * (static_cast<double>(9) / 5) + 32;
            }
            break;
        } else {
            cout << "Enter a valid value." << endl;

            cin.clear();

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    cout << "Temperature: " << result << endl;


    return 0;
}