#ifndef RECEPRION_H
#define RECEPTION_H
#include "doctor.h"
#include "pacjent.h"

class Reception
{
public:

    void show(int &decision,Doctor &d)
    {

        cout<<"1. Show schedule of doctor "<<endl;
        cout<<"2. Show name and surname of doctor"<<endl;
        cout<<"3. Want visit "<<endl;
        switch(decision)
        {
        case 1:
            d.showSchedule();
            break;
        case 2:
            cout<<d.getName()<<" "<<d.getSurname()<<endl;
            break;
        case 3:
            Pacjent p;
            p.setName();
            p.setSurname();
            p.setDateVisity();
            cout<<d.getFreeDateVisit(p)<<endl;;
            break;


        }
    }
};
#endif // RECEPRION_H
