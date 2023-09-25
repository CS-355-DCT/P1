// scoreboard.cpp

#include "scoreboard.h"
#include <iostream>

Scoreboard::Scoreboard() : totalScore(0) {}

void Scoreboard::addScore(const char* teamMember, int score) {
// Implement adding score here
	totalScore += score;
	cout << *teamMember << " has scored " << score << " points" << endl;
}

int Scoreboard::getTotalScore() const {
    return totalScore;
}
