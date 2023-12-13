#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main()
{
    int RandNumber;
    int UserNumber;
    int choice = 0;
    int RU,UR;
    cout << "NUMBER GUESSING GAME"
         << "\n1. Easy (0-100)"
         << "\n2. Medium (0-500)"
         << "\n3. Hard (0-1000)"
         << "\n4. Quit\n";
    cin >> choice;
    while (choice != 4)
    {
        switch (choice)
        {
        case 1:
        {
            srand(time(0));
            RandNumber = (rand() % 100);
            cout << "Guess the number between 0 and 100:\n";
            //cout <<RandNumber;
            break;
        }
        case 2:
        {
            srand(time(0));
            RandNumber = (rand() % 500);
            cout << "Guess the number between 0 and 500:\n";
            break;
            //cout <<RandNumber;
        }
        case 3:
        {
            srand(time(0));
            RandNumber = (rand() % 1000);
            cout << "Guess the number between 0 and 1000:\n";
            break;
            //cout <<RandNumber;
        }
        case 4:
            break;
        default:
            cout << "Incorrect choice. Choose again:\n";
            break;
        }

        if (choice >= 1 && choice <= 3)
        {
            cin >> UserNumber;
            while(UserNumber!=RandNumber)
            {
                int RU=RandNumber-UserNumber;
                int UR=UserNumber-RandNumber;
                if(RU<10 && RU>=1 && RU>0)
                {
                    cout <<"You are Close, guess HIGHER\n";
                    cin>>UserNumber;
                }
                else if (RU<50 && RU>=10 && RU>0)
                {
                    cout <<"You are FAR, guess HIGHER\n";   
                    cin>>UserNumber;
                }
                else if(RU<150 && RU>=50 && RU>0)
                {
                    cout <<"You are Way Far,guess Higher\n";
                    cin>>UserNumber;
                }
                else if(RU>=150 && RU>0)
                {
                    cout <<"You are Way Too Far,guess Higher\n";
                    cin>>UserNumber;
                }
                else if (UR<10 && UR>=1 && RU<0)
                {
                    cout <<"You are Close, guess LOWER\n";
                    cin>>UserNumber;
                }
                else if(UR<50&& UR>=10 && RU<0)
                {
                    cout <<"You are FAR, guess LOWER\n";
                    cin>>UserNumber;
                }
                else if(UR<150 && UR>=50 && RU<0)
                {
                    cout <<"You are Way FAR, guess LOWER\n";
                    cin>>UserNumber;
                }
                else if(UR>=150 && RU<0)
                {
                    cout <<"You are Way Too FAR, guess LOWER\n";
                    cin>>UserNumber;
                }
                else;
                {}
                
            }
            cout << "You guessed the correct number!\n";
        }

        cout << "\nNUMBER GUESSING GAME"
             << "\n1. Easy (0-100)"
             << "\n2. Medium (0-500)"
             << "\n3. Hard (0-1000)"
             << "\n4. Quit\n";

        cin >> choice;
    }

    return 0;
}

