//
//  tennis.h
//  OO Concepts 2
//
//  Created by Jovhems Jean-Baptiste on 10/16/24.
//

//
//  tennis.h
//  Created by Jovhems Jean-Baptiste on 10/15/24.
//

#ifndef TENNIS_H
#define TENNIS_H

#include "athlete.h"

class Tennis : public Athlete {
private:
    int m_serveSpeed;
    bool m_serveAndVolley;

public:
    Tennis();  // Default constructor
    Tennis(int serveSpeed, bool serveAndVolley);  // Parameterized constructor

    int getServeSpeed() const;
    void setServeSpeed(int serveSpeed);

    bool getServeAndVolley() const;
    void setServeAndVolley(bool serveAndVolley);
};

#endif  // TENNIS_H
