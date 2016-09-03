#include "Male.h"

#include <time.h>
#include <random>

using namespace std;

Male::Male()
{
    m_life_exp = 40;
    m_timeleft = rand()%m_life_exp +1 ;
}

// Functions
int Male::get_timeleft()
{
    return m_timeleft;
}

void Male::passing_day(){
    if (m_timeleft > 0) {
        m_timeleft--;
    }
}
