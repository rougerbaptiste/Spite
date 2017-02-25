#ifndef DEF_FEMALE
#define DEF_FEMALE

#include <iostream>
#include <string>

class Female
{

public:

    Female();
    int get_timeleft();
    int get_cycle();

    int get_partner();
    void set_partner(int i);

    bool get_gestating();
    int get_gestation();

    void set_gestating();
    void set_spitePartner(bool spite);


    void passing_day();

private:
    int m_timeleft;
    int m_lifeExp;

    int m_maxCycle;
    int m_cycle;

    int m_partner;

    bool m_spitePartner;

    bool m_birthReady;
    bool m_gestating;
    int m_gestation;

};

#endif
