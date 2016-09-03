#ifndef DEF_FEMALE
#define DEF_FEMALE

#include <iostream>
#include <string>

class Female
{

public:

    Female();
    int get_timeleft();

private:
    int m_timeleft;
    int m_life_exp;


};

#endif
