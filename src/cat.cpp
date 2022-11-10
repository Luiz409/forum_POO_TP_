#include "cat.h"

cat::cat(){
    this->specie_cat = "mammal";
}

void cat::set_specie_cat(string x){
    this->specie_cat = x;
}

cat::~cat(){}
