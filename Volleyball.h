//
//  Volleyball.h
//  OO Concepts 2
//
//  Created by Jovhems Jean-Baptiste on 10/16/24.
//

//
//  volleyball.h
//  Created by Jovhems Jean-Baptiste on 10/15/24.
//

#ifndef VOLLEYBALL_H
#define VOLLEYBALL_H

#include <string>
#include "athlete.h"

class Volleyball : public Athlete {
private:
    std::string m_position;
    float m_reactionTime;

public:
    Volleyball();  // Default constructor
    Volleyball(std::string position, float reactionTime);  // Parameterized constructor

    std::string getPosition() const;
    void setPosition(std::string position);

    float getReactionTime() const;
    void setReactionTime(float reactionTime);
};

#endif  // VOLLEYBALL_H
