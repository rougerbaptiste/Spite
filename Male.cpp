#include "Male.h"

#include <time.h>
#include <random>

using namespace std;

Male::Male()
{
    m_life_exp = 40;
    m_timeleft = rand()%m_life_exp +1 ;

    m_sperm_daily = 10;
    m_sperm = rand()%100 +1;

    m_partner = -1;
    m_spite = rand()%1>0.5;
}

// Functions
int Male::get_timeleft()
{
    return m_timeleft;
}

int Male::get_sperm()
{
    return m_sperm;
}

int Male::get_partner()
{
    return m_partner;
}

void Male::set_partner(int i)
{
    m_partner = i;
}

bool Male::get_spite()
{
    return m_spite;
}


void Male::passing_day(){
    if (m_timeleft > 0) {
        m_timeleft--;
        m_sperm += m_sperm_daily;
        if (m_sperm > 100) {
            m_sperm = 100;
        }
    }
}
