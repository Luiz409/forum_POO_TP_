#include "dog.h"
#include "cat.h"

dog::dog(){
    this->specie_dog = "mammal";
}

void dog::set_specie_dog(string x){
    this->specie_dog = x;
}

dog::~dog(){}

bool dog::operator==(const cat &c){
    return this->specie_dog == c.get_species_cat();
}
