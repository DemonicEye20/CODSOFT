#include <iostream>
using namespace std;
int main()
{
    int choice = 0;
    int Num1,Num2,Ans;
    cout << "Simple Calculator"
         << "\n1. Addition"
         << "\n2. Subtraction"
         << "\n3. Multiplication"
         << "\n4. Division"
         << "\n5. Quit\n";
    cin >> choice;
    while (choice != 5)
    {
        switch (choice)
        {
        case 1: //Addition of two numbers
        {
            cout << "Input 1st Number\n";
            cin >> Num1;
            cout <<"Input 2nd Number\n";
            cin >> Num2;
            int Ans = Num1 + Num2;
            cout << "Addition of two numbers is "
                 << Ans;
            break; 
        }
        case 2: //Subtraction of two numbers
        {
            cout << "Input 1st Number\n";
            cin >> Num1;
            cout <<"Input 2nd Number\n";
            cin >> Num2;
            int Ans = Num1 - Num2;
            cout << "Subtraction of two numbers is "
                 << Ans;
            break;             
        }
        case 3: //Multiplicatino of two numbers
        {
            cout << "Input 1st Number\n";
            cin >> Num1;
            cout <<"Input 2nd Number\n";
            cin >> Num2;
            int Ans = Num1 * Num2;
            cout << "Multiplication of two numbers is "
                 << Ans;
            break; 
        }
        case 4: //DIvivsion of two numbers
        {
            cout << "Input 1st Number\n";
            cin >> Num1;
            cout <<"Input 2nd Number\n";
            cin >> Num2;
            if(Num2!=0)
            {
                int Ans = Num1 / Num2;
                cout << "Division of two numbers is "
                     << Ans;
            }
            else if(Num2==0)
            {
                cout <<"Cannot Divide by 0\n";

            }
            else;
            break; 
        }
        case 5: //Quit
        {
            return 0;
        }
        default:
        {
            cout << "Incorrect choice. Choose again:\n";
            break;
        }
        }
    cout << "\nSimple Calculator"
         << "\n1. Addition"
         << "\n2. Subtraction"
         << "\n3. Multiplication"
         << "\n4. Division"
         << "\n5. Quit\n";
    cin >> choice;
    }
    
}