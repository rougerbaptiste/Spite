#include "Female.h"

#include <time.h>
#include <random>

using namespace std;

Female::Female()
{

    m_life_exp = 40;
    m_timeleft = rand()%m_life_exp +1 ;


}

// Functions
int Female::get_timeleft()
{
    return m_timeleft;
}
