#ifndef DEF_MALE
#define DEF_MALE

#include <iostream>
#include <string>

class Male
{

public:

    Male();
    int get_timeleft();
    void passing_day();

private:
    int m_timeleft;
    int m_life_exp;

};

#endif
