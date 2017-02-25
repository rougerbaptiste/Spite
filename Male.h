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

    int get_partner();
    void set_partner(int i);

    void passing_day();

    bool get_spite();

private:
    int m_life_exp;
    int m_timeleft;

    int m_sperm_daily;
    int m_sperm;

    int m_partner;

    bool m_spite;

};

#endif
