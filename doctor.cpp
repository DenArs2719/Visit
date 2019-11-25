#include "doctor.h"
#include "pacjent.h"

ofstream out("DateOfVisit.txt");

Doctor::Doctor(string name, string surname, int size_of_person)
{
    this->name = name;
    this->surname = surname;
    this->size_of_person = size_of_person;
}

string Doctor::setDate()
{
    string date;
    cout<<"Enter date "<<endl;
    getline(cin,date);
    this->date = date;
    return this->date;
}

string Doctor::getFreeDateVisit(Pacjent &p)
{
    bool czy = false;
    for(int i=0;i<this->size_of_person;i++)
    {
        if(p.getDateVisity() == this->schedule[i])
        {
            //string tmp = this->schedule[i];
            /*if(i<this->size_of_person-1)
            {
                out<<this->schedule[i]<<" "<<p.getName()<<" "<<p.getSurname()<<endl;
            }
            else
            {
                out<<this->schedule[i]<<" "<<p.getName()<<" "<<p.getSurname();
            }*/
            out<<this->schedule[i]<<" "<<p.getName()<<" "<<p.getSurname();
            out<<endl;
            czy = true;
            this->schedule[i] = " ";
            //return tmp;
        }
    }

    if(czy == true)
    {
        return "Welcome";
    }
    else
    {
        return "Sorry";
    }
}

string Doctor::getDate()
{
   return this->date;
}


void Doctor::setSchedule()
{
    ofstream out("DocSchedule.txt");

    for(int i=0;i<this->size_of_person;i++)
    {
        schedule[i] = setDate();
        if(i<size_of_person-1)
        {
            out<<this->schedule[i]<<endl;
        }
        else
        {
            out<<this->schedule[i];
        }

    }
}

void Doctor::showSchedule()
{
    for(int i=0;i<this->size_of_person;i++)
    {
        cout<<this->schedule[i]<<endl;
    }
}

int Doctor::getSizeOfPerson()
{
    return this->size_of_person;
}



string Doctor::getName()
{
    return this->name;
}

string Doctor::getSurname()
{
    return this->surname;
}

