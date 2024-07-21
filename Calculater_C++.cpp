#include <iostream>
using namespace std;

class CalculatorApplication {
public:
    void chooseOperation(char ch) {
        switch (ch) {
            case '*': {
                int num1 = getInteger();
                int num2 = getInteger();
                cout << "Multiply Result -> " << (num1 * num2) << endl;
                break;
            }
            case '+': {
                int num3 = getInteger();
                int num4 = getInteger();
                cout << "Addition -> " << (num3 + num4) << endl;
                break;
            }
            case '-': {
                int num5 = getInteger();
                int num6 = getInteger();
                cout << "Subtraction -> " << (num5 - num6) << endl;
                break;
            }
            case '/': {
                int num7 = getInteger();
                int num8 = getInteger();
                if (num8 == 0) {
                    cout << "Divide by zero error" << endl;
                    break;
                }
                cout << "Division -> " << (num7 / num8) << endl;
                break;
            }
            case '%': {
                int num9 = getInteger();
                int num10 = getInteger();
                if (num10 == 0) {
                    cout << "Divide by zero error" << endl;
                    break;
                }
                cout << "Modulo -> " << (num9 % num10) << endl;
                break;
            }
            default:
                cout << "Unknown Operation" << endl;
        }
    }

    bool exitProgram() {
        int times = 0;
        const int retry = 5;
        while (times < retry) {
            cout << "Do you want to continue? (y/n): ";
            string exitInput;
            cin >> exitInput;
            char ch1 = exitInput[0];
            if (exitInput.length() == 1 && (ch1 == 'n' || ch1 == 'N')) {
                return true;
            } else if (exitInput.length() == 1 && (ch1 == 'y' || ch1 == 'Y')) {
                return false;
            } else {
                cout << "Wrong input, please try again" << endl;
                times++;
            }
        }
        if (times >= retry) {
            cout << "Maximum retry count exceeded! Exiting forcefully" << endl;
            return true;
        }
        return false;
    }

    int getInteger() {
        cout << "Enter a number -> ";
        int num;
        cin >> num;
        return num;
    }
};

int main() {
    CalculatorApplication obj;
    cout << "Welcome to Calculator Application - By Himanshu Singh" << endl;

    while (true) {
        cout << "Choose an Operation: ( 1. *)" << endl;
        cout<<  "Choose an Operation: ( 2. +)" <<endl;
        cout<<  "Choose an Operation: ( 3. -)" <<endl;
        cout<<  "Choose an Operation: ( 4. %)" <<endl;
        cout<<  "Choose an Operation: ( 5. /)" <<endl;
        cout << "Tell me -> : ";
        string input;
        cin >> input;
        char ch = input[0];
        if (input.length() != 1) {
            cout << "Wrong input, please try again" << endl;
        } else {
            obj.chooseOperation(ch);
        }
        bool exit = obj.exitProgram();
        if (exit) {
            break;
        }
    }
    cout << "Thanks for using our service" << endl;
    return 0;
}
