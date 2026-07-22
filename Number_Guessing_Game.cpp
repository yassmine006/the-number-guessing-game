#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    srand(time(0));

    int level;
    int maxSize;
    int secretNumber;
    char choice;

    cout << "=====================================" << endl;
    cout << "     The Number Guessing Game     " << endl;
    cout << "=====================================" << endl;
    cout << "Guess the hidden number!" << endl;
    cout << "Good luck!" << endl;
    cout << "------------------------------------" << endl;
    cout << "1. Easy (0-50)" << endl;
    cout << "2. Medium (0-100)" << endl;
    cout << "3. Hard (0-500)" << endl;
    cout << "4.Exit" << endl;
    cout << "--------------------------------" << endl;

    do
    {
        cout << "choose the level : ";
        cin >> level;

        int guess = -1;
        int attempt = 0;

        switch (level)
        {

        case 1:
            maxSize = 51;
            break;

        case 2:
            maxSize = 101;
            break;

        case 3:
            maxSize = 501;
            break;

        case 4:
            cout << "Goodbye!\n";
            return 0;

        default:
            cout << "NOT IN THE CATEGORY";
            return 0;
        }

        secretNumber = rand() % maxSize;

        while (guess != secretNumber)
        {
            cout << "take a guess : ";
            cin >> guess;

            attempt++;

            if (guess < secretNumber)
            {
                cout << "TOO LOW ! GO HIGHER" << endl;
            }
            else if (guess > secretNumber)
            {
                cout << "TOO HIGH ! GO LOWER " << endl;
            }
            else
            {
                cout << "CORRECT !" << endl;
            }
            
        }

        cout << "You guessed the number in " << attempt << " attempts!" << endl;

        cout << "\nWould you like to play again? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');
    return 0;
}
