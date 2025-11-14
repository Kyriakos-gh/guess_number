//  guess_number.cpp
//  November 14, 2025
//  Kyriakos, kyke@otenet.gr

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    const int secret_num = (rand() % 10) + 1;     // Generate a random number between 1 and 10
    int user_num = 0;
    bool found = false;

    for (int i = 1; i <= 3; i++) {
        cout << "Enter number: ";
        cin >> user_num;
        if (secret_num == user_num) {
            cout << "You found the secret number, it was " << secret_num << "!\n";
            found = true;
            break;
        }
        else if (secret_num < user_num) {
            cout << "Secret number is smaller\n";
        }
        else {
            cout << "Secret number is bigger\n";
        }
    }
    if (!found) {
        cout << "You lost\n";
    }
    return 0;
}
