// scoreboard.h
#ifndef SCOREBOARD_H
#define SCOREBOARD_H

class Scoreboard {
public:
    Scoreboard();

    // Add a score for a team member
    void addScore(const char* teamMember, int score);

    // Get the total score for all team members
    int getTotalScore() const;

private:
    int totalScore;
};

#endif

