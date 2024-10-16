//
//  tennis.cpp
//  OO Concepts 2
//
//  Created by Jovhems Jean-Baptiste on 10/16/24.
//

#include "tennis.h"

// Default constructor
Tennis::Tennis() : m_serveSpeed(0), m_serveAndVolley(false) {}

// Parameterized constructor
Tennis::Tennis(int serveSpeed, bool serveAndVolley)
    : m_serveSpeed(serveSpeed), m_serveAndVolley(serveAndVolley) {}

int Tennis::getServeSpeed() const { return m_serveSpeed; }
void Tennis::setServeSpeed(int serveSpeed) { m_serveSpeed = serveSpeed; }

bool Tennis::getServeAndVolley() const { return m_serveAndVolley; }
void Tennis::setServeAndVolley(bool serveAndVolley) { m_serveAndVolley = serveAndVolley; }
