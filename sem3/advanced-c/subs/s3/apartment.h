#ifndef APARTMENT_H_
#define APARTMENT_H_

#include <stdlib.h>
#include <stdio.h>

typedef struct apartment
{
    char address[30];
    int rooms;
    double price;
} Apartment;


Apartment *apartment_filter_apts(int size, Apartment *apart_units, int max_price, int exact_rooms, int *res_size);
int load_flats_array(int size, Apartment *flat_list);
void print_apart_array(Apartment *a,size_t size);
void print_apartment_(Apartment *a);
#endif