#ifndef DOCTOR_H
#define DOCTOR_H
#include "pacjent.h"
#include <string>
#include <iostream>
using namespace std;
class Doctor
{
    int size_of_person;
    string name;
    string surname;
    string schedule[256];
    string date;


public:

    Doctor(string name = " ",string surname = " ",int size_of_person = 0);
    string getName();
    string getSurname();
    string setDate();
    void setSchedule();
    void showSchedule();
    int getSizeOfPerson();
    string getDate();
    string getFreeDateVisit(Pacjent &p);
};

#endif // DOCTOR_H
