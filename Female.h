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

    void passing_day();

private:
    int m_timeleft;
    int m_lifeExp;

    int m_maxCycle;
    int m_cycle;


};

#endif
