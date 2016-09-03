#include <iostream>
#include "Female.h"
#include "Male.h"

#include <vector>
#include <time.h>
#include <random>

using namespace std;

int main()
{

    int day_length (100);

    Female test;
    Male test2;
    int i (0);
    while (i < day_length) {


        cout << "Female : " << test.get_timeleft() << endl;
        cout << "Male : " << test2.get_timeleft() << endl << endl;



        i++;
    }

    return 0;
}
