#include "doctor.h"
#include "reception.h"
#include "pacjent.h"
#include "list.h"
int main()
{
    Reception reception;
    int decision = 1;
    Doctor doctor("D","Y",2);
    doctor.setSchedule();
    while(decision != 0)
    {
        cout<<"Enter decision ";
        cin>>decision;

        reception.show(decision,doctor);
    }

    List<Pacjent> list;

    ifstream in("DateOfVisit.txt");
    if(!in.is_open())
    {
        cout<<"sry ,bad file "<<endl;
    }
    else
    {
        while(!in.eof())
        {
            string date;
            string name;
            string surname;

            in>>date;
            in>>name;
            in>>surname;

            try
            {
                Pacjent p;

                p.setDateVisity(date);
                p.setName(name);
                p.setSurname(surname);

                list.insert(p);
            }
            catch(exception &e)
            {
                cout<<e.what()<<endl;
            }
        }
        in.close();
    }

    ofstream out("Rezult.txt");

    int size = list.getSize();

    out<<"Rezult"<<endl;

    for(int i=0;i<size;i++)
    {
        Pacjent p;
        p = list.pop();
        if(i<size-1)
        {
         out<<p.getDateVisity()<<" "<<p.getName()<<" "<<p.getSurname()<<endl;
        }
        else
        {
            out<<p.getDateVisity()<<" "<<p.getName()<<" "<<p.getSurname();
        }
    }

    out.close();



    return 0;


}
