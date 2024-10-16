//
//  main.cpp
//  OO Concepts 2
//
//  Created by Jovhems Jean-Baptiste on 10/15/24.
//

#include <iostream>
#include <string>
using namespace std;

// Base class: Athlete
class Athlete {
protected:
    int m_height;
    int m_weight;
    char m_gender;

public:
    // Default constructor
    Athlete() : m_height(0), m_weight(0), m_gender('U') {}

    // Parameterized constructor
    Athlete(int height, int weight, char gender) : m_height(height), m_weight(weight), m_gender(gender) {}

    // Getters and Setters
    int getHeight() const { return m_height; }
    void setHeight(int height) { m_height = height; }

    int getWeight() const { return m_weight; }
    void setWeight(int weight) { m_weight = weight; }

    char getGender() const { return m_gender; }
    void setGender(char gender) { m_gender = gender; }
};

// Derived class: Volleyball
class Volleyball : public Athlete {
private:
    string m_position;
    float m_reactionTime;

public:
    // Default constructor
    Volleyball() : m_position(""), m_reactionTime(0.0f) {}

    // Parameterized constructor
    Volleyball(string position, float reactionTime) : m_position(position), m_reactionTime(reactionTime) {}

    // Getters and Setters
    string getPosition() const { return m_position; }
    void setPosition(string position) { m_position = position; }

    float getReactionTime() const { return m_reactionTime; }
    void setReactionTime(float reactionTime) { m_reactionTime = reactionTime; }
};

// Derived class: Tennis
class Tennis : public Athlete {
private:
    int m_serveSpeed;
    bool m_serveAndVolley;

public:
    // Default constructor
    Tennis() : m_serveSpeed(0), m_serveAndVolley(false) {}

    // Parameterized constructor
    Tennis(int serveSpeed, bool serveAndVolley) : m_serveSpeed(serveSpeed), m_serveAndVolley(serveAndVolley) {}

    // Getters and Setters
    int getServeSpeed() const { return m_serveSpeed; }
    void setServeSpeed(int serveSpeed) { m_serveSpeed = serveSpeed; }

    bool getServeAndVolley() const { return m_serveAndVolley; }
    void setServeAndVolley(bool serveAndVolley) { m_serveAndVolley = serveAndVolley; }
};

// Main function to test the classes
int main() {
    // Create an Athlete object
    Athlete sport(72, 140, 'M');
    cout << "Athlete: " << sport.getHeight() << " "
    << sport.getWeight() << " "
    << sport.getGender() << endl;
    
    // Tennis objects
    Tennis martina;
    martina.setServeSpeed(100);
    martina.setGender('F');
    
    Tennis bjorn(150, false);
    bjorn.setGender('M');
    
    if (martina.getGender() == 'F')
        cout << "Martina serve speed: " << martina.getServeSpeed() << endl;
    
    // Volleyball objects
    Volleyball kerri;
    kerri.setGender('F');
    kerri.setPosition("Opposite Hitter");
    
    Volleyball giba("Outside Hitter", 23.2);
    giba.setGender('M');
    
    if (kerri.getGender() == 'F')
        cout << "Kerri is an " << kerri.getPosition() << endl;
    
    return 0;}
