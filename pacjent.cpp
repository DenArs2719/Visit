#include "pacjent.h"

Pacjent::Pacjent(string name, string surname, string dateVisity, string hourVisity)
{
    this->name = name;
    this->surname = surname;
    this->dateVisity = dateVisity;
    this->hourVisity = hourVisity;

}

void Pacjent::setName()
{
    string name;
    cout<<"Enter your name ";
    cin>>name;

    this->name = name;

}

void Pacjent::setSurname()
{
    string surname;
    cout<<"Enter your surname ";
    cin>>surname;

    this->surname = surname;
}

void Pacjent::setDateVisity()
{
    string date;
    cout<<"Enter  date of visit ";
    cin>>date;


    this->dateVisity = date;

}

void Pacjent::setHourVisity()
{
    string hour;
    cout<<"Enter hour of visit ";
    cin>>hour;

    this->hourVisity = hour;
}

string Pacjent::getName()
{
    return this->name;
}

string Pacjent::getSurname()
{
    return this->surname;
}

string Pacjent::getDateVisity()
{
    return this->dateVisity;
}

string Pacjent::getHourVisity()
{
    return this->hourVisity;
}

bool Pacjent::operator>(Pacjent& p)
{

    if(this->getDateVisity() > p.getDateVisity())
    {
        return true;
    }
    else
    {
        return false;
    }

}

bool Pacjent::operator<(Pacjent& p)
{

    if(this->getDateVisity()> p.getDateVisity())
    {
        return false;
    }
    else
    {
        return true;
    }

}


///override


void Pacjent::setName(string name)
{
    this->name = name;
}

void Pacjent::setSurname(string surname)
{
    this->surname = surname;
}

void Pacjent::setDateVisity(string date)
{
    this->dateVisity = date;
}


