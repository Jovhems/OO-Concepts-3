//
//  Volleyball.cpp
//  OO Concepts 2
//
//  Created by Jovhems Jean-Baptiste on 10/16/24.
//

#include "volleyball.h"

// Default constructor
Volleyball::Volleyball() : m_position(""), m_reactionTime(0.0f) {}

// Parameterized constructor
Volleyball::Volleyball(std::string position, float reactionTime)
    : m_position(position), m_reactionTime(reactionTime) {}

std::string Volleyball::getPosition() const { return m_position; }
void Volleyball::setPosition(std::string position) { m_position = position; }

float Volleyball::getReactionTime() const { return m_reactionTime; }
void Volleyball::setReactionTime(float reactionTime) { m_reactionTime = reactionTime; }
