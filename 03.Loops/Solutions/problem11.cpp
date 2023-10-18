#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    int secret = 69, guess = 0;
    do {
        cin >> guess;
        if(guess > secret) {
            cout << "Too high!" << endl;
        } else if(guess < secret) {
            cout << "Too low!" << endl;
        }
    } while(guess != secret);
    cout << "Congratulations! You guessed the number!" << endl;
    return 0;
}
