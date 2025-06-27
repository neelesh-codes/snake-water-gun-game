#include <iostream>
#include <vector>
#include <random>
using namespace std;

vector<char> digits = {'s', 'w', 'g'};
random_device rd;
mt19937 gen(rd());
uniform_int_distribution<> dis(0, digits.size() - 1);

char generateRandomDigit() {
    return digits[dis(gen)];
}

int main() {

    cout << "Flow of game: " << endl;
    cout << "\tThe snake can drink water" << endl;
    cout << "\tThe gun is not able to harm water." << endl;
    cout << "\tThe gun can kill snake." << endl;
    cout << "\tWant to quit the game type this:  q" << endl;

    while (true){
    char randomDigit = generateRandomDigit();
    char userChoice;

    // cout << "Generated random digit: " << randomDigit << endl;
    cout << "Enter your choice\ns for snake" << endl;
    cout << "g for gun" << endl;
    cout << "w for water " << endl;

    cin >> userChoice;
    if (userChoice == randomDigit){
        cout << "it's tie! Both answer are same." << endl;
        cout << "Computer : " << randomDigit << endl;
        cout << "You : " << userChoice << endl;
    }
    else if(userChoice == 'w' && randomDigit == 'g'){
        cout << "You are the winner." << endl;
        cout << "Computer : " << randomDigit << endl;
        cout << "You : " << userChoice << endl;
    }
    else if(userChoice == 's' && randomDigit == 'w'){
        cout << "You are the winner." << endl;
        cout << "Computer : " << randomDigit << endl;
        cout << "You : " << userChoice << endl;
    }
    else if (userChoice == 'g' && randomDigit == 's') {
        cout << "You are the winner.." << endl;
        cout << "Computer : " << randomDigit << endl;
        cout << "You : " << userChoice << endl;;
    }
    else if(userChoice == 'q'){
        cout << "Thank You for playing this game!." << endl;
        break;
    }
    else if(userChoice != 'g' || 'w' || 's' || 'q'){
        cout << "Invalid input please enter any other choice." << endl;
    }
    else{
        cout << "Computer is the winner." << endl;
        cout << "Computer : " << randomDigit << endl;
        cout << "You : " << userChoice << endl;
    }
    }
    return 0;
}