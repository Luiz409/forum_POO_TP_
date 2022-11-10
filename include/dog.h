#ifndef DOG_H
#define DOG_H

#include "cat.h"
#include <string>
using namespace std;

class dog{
    public:
        dog();
        virtual ~dog();

        void set_specie_dog(string x);
        string get_species_dog () const {return this->specie_dog;}

        bool operator == (const cat &c);

    private:
        string specie_dog;
};

#endif // DOG_H
