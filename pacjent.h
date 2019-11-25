#ifndef PACJENT_H
#define PACJENT_H
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Pacjent
{
    string name;
    string surname;
    string dateVisity;
    string hourVisity;

public:
    Pacjent(string name =" ",string surname = " ",string dateVisity = " ",string hourVisity = " ");
    void setName();
    void setSurname();
    void setDateVisity();
    void setHourVisity();

    string getName();
    string getSurname();
    string getDateVisity();
    string getHourVisity();

    bool operator>(Pacjent &p);
    bool operator<(Pacjent &p);

    ///override
    void setName(string name);
    void setSurname(string surname);
    void setDateVisity(string date);

};
#endif // PACJENT_H
