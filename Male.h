#ifndef DEF_MALE
#define DEF_MALE

#include <iostream>
#include <string>

class Male
{

public:

    Male();
    int get_timeleft();
    int get_sperm();
    void passing_day();


private:
    int m_life_exp;
    int m_sperm_daily;
    int m_timeleft;
    int m_sperm;

};

#endif
