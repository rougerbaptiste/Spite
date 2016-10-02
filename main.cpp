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


        int i (0), i2(0), day(0);
        while (day < day_length) {


                ///////
                // Finding the dead individuals
                //
                vector<int> deadMales;
                for (i=0; i < maleNumber; i++){ // allows to determine the number of dead males and their index
                        if(males[i].get_timeleft() <= 0){
                                deadMales.push_back(i);
                        }
                }

                vector<int> deadFemales;
                for (i=0; i < femaleNumber; i++){ // allows to determine the number of dead females and their index
                        if(females[i].get_timeleft() <= 0){
                                deadFemales.push_back(i);
                        }
                }

                ////////
                // Applying death of individuals
                //

                for (i=0; i < int(deadMales.size()); i++){
                        females[males[i].get_partner()].set_partner(-1);
                        males[i].set_partner(-1);
                }

                for (i = 0; i < int(deadFemales.size()); i++){
                        males[females[i].get_partner()].set_partner(-1);
                        females[i].set_partner(-1);
                }


                ////////
                // Pairing the individuals
                //
                for (i = 0; i < maleNumber; i++){
                        if(males[i].get_partner() < 0){
                                for(i2 = 0; i2 < femaleNumber; i2++){
                                        if(females[i].get_partner() < 0){
                                                males[i].set_partner(i2);
                                                females[i].set_partner(i);
                                        }
                                }
                        }
                }


                ////////
                // Mating the individuals
                //

                for (i = 0; i < femaleNumber; i++){
                        if( females[i].get_cycle() >= 100 && females[i].get_partner() != 0 ){
                                females[i].set_spitePartner(males[females[i].get_partner()].get_spite());
                        }
                }


                for(i = 0; i < maleNumber; i++){
                        males[i].passing_day();
                }
                for(i = 0; i < femaleNumber; i++){
                        females[i].passing_day();
                }

                day++;
        }

        cout << day << endl;
        return 0;
}
