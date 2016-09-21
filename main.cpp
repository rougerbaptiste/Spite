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

    int const day_length (40);
    int const maleNumber (10);
    int const femaleNumber (10);


    Female females [femaleNumber];
    Male males [maleNumber];


    int i (0), day(0);
    while (day < day_length) {

        vector<int> deadMales;
        for (i=0; i < maleNumber; i++){
            if(males[i].get_timeleft() <= 0){
                deadMales.push_back(i);
            }
        }

        cout << deadMales.size() << endl;

        for(i = 0; i < maleNumber; i++){
            males[i].passing_day();
        }
        for(i = 0; i < femaleNumber; i++){
            females[i].passing_day();
        }


        day++;
    }

    return 0;
}
