#ifndef CAT_H
#define CAT_H

#include <string>
using namespace std;

class cat{
    public:
        cat();
        virtual ~cat();

        void set_specie_cat(string x);
        string get_species_cat () const {return this->specie_cat;}

    private:
        string specie_cat;
};

#endif // CAT_H
