#include "Female.h"

#include <time.h>
#include <random>

using namespace std;

Female::Female()
{

    m_lifeExp = 40;
    m_timeleft = rand()%m_lifeExp +1 ;

    m_maxCycle = 10;
    m_cycle = rand()%m_maxCycle +1;

    m_partner = -1;

}

// Functions
int Female::get_timeleft()
{
    return m_timeleft;
}

int Female::get_cycle()
{
    return m_cycle;
}

int Female::get_partner()
{
    return m_partner;
}

void Female::set_partner(int i)
{
    m_partner = i;
}


void Female::passing_day()
{
    if (m_timeleft > 0) {
        m_timeleft--;
        m_cycle--;
        if(m_cycle < 0){
            m_cycle = m_maxCycle;
        }
    }
}
