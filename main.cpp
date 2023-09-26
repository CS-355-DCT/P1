// main.cpp

#include <iostream>
#include "scoreboard.h"

int main() {

Scoreboard scoreboard;
int choice = 1;
int score;
char teamMember[100];
    // Implement your menu-driven program here
	while (choice !=0 ){
		cout << "1. Add score" << endl;
		cout << "2. Get Total Score" << endl;
		cout << "Enter your choice" << endl;
		cout << "0. Quit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
	}		 
    // Prompt the user to add scores and display the total score
	if (choice == 1) {
		cout << "Enter team Name: ";
		cin >> teamMember;
		cout << "Enter the Score: ";
		cin >> score;
		scoreboard.addScore(teamMember, score);
		cout << "Goal !!" << endl;
	}

	else (choice == 2) {
		cout << "Total Score is : " << scoreboard.getTotalScore() << endl;
	}


    return 0;
}
