#include <iostream>
#include "Female.h"
#include "Male.h"

#include <vector>
#include <time.h>
#include <random>

using namespace std;

int main()
{
    srand (time(NULL));

    int day_length (40);

    Female test;
    Male test2;
    int i (0);
    while (i < day_length) {

        cout << "Male : " << test2.get_timeleft() << endl;
        cout << "Sperm : " << test2.get_sperm() << endl << endl;


        test.passing_day();
        test2.passing_day();
        i++;
    }

    return 0;
}
