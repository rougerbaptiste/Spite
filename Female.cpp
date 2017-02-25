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

    m_spitePartner = false;

    m_gestating = false;
    m_gestation = 0;
    m_birthReady = false;
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



bool Female::get_gestating()
{
    return m_gestating;
}

int Female::get_gestation()
{
    return m_gestation;
}



void Female::set_gestating()
{
    m_gestating = true;
}

void Female::set_spitePartner(bool spite)
{
    m_spitePartner = spite;
}


void Female::passing_day()
{
    if (m_timeleft > 0) {
        m_timeleft--;
        m_cycle--;
        if(m_cycle < 0){
            m_cycle = m_maxCycle;
        }
        if (m_gestating == true){
            m_gestation += 10;

            if (m_gestation >=100){
                m_birthReady = true;
            }
            if (m_gestation >200){
                m_gestating = false;
                m_gestation = 0;
                m_birthReady = false;
            }
        }
    }
}
