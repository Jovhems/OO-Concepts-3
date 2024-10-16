//
//  athlete.h
//  OO Concepts 2
//
//  Created by Jovhems Jean-Baptiste on 10/16/24.
//

//
//  athlete.h
//  Created by Jovhems Jean-Baptiste on 10/15/24.
//

#ifndef ATHLETE_H
#define ATHLETE_H

class Athlete {
protected:
    int m_height;
    int m_weight;
    char m_gender;

public:
    Athlete();  // Default constructor
    Athlete(int height, int weight, char gender);  // Parameterized constructor

    int getHeight() const;
    void setHeight(int height);

    int getWeight() const;
    void setWeight(int weight);

    char getGender() const;
    void setGender(char gender);
};

#endif  // ATHLETE_H
