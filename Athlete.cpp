//
//  Athlete.cpp
//  OO Concepts 2
//
//  Created by Jovhems Jean-Baptiste on 10/16/24.
//


#include "athlete.h"

// Default constructor
Athlete::Athlete() : m_height(0), m_weight(0), m_gender('U') {}

// Parameterized constructor
Athlete::Athlete(int height, int weight, char gender)
    : m_height(height), m_weight(weight), m_gender(gender) {}

int Athlete::getHeight() const { return m_height; }
void Athlete::setHeight(int height) { m_height = height; }

int Athlete::getWeight() const { return m_weight; }
void Athlete::setWeight(int weight) { m_weight = weight; }

char Athlete::getGender() const { return m_gender; }
void Athlete::setGender(char gender) { m_gender = gender; }
