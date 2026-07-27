#include <stdio.h>
#include <stdlib.h>
#include "apartment.h"
#include "utils.h"

void print_apartment_(Apartment *a)
{
    printf("[Apartment]:<Addr:%s> <rooms:%i> <price:%f>\n", a->address, a->rooms, a->price);
}
void print_apart_array(Apartment *a,size_t size)
{
    RETURN_VOID_ON_NULL(a,"print apartment faild: null ptr");
    for(size_t i=0;i<size;i++)
    {
        printf("[%li]:",i);
        print_apartment_(a);
        a++;
    }
    printf("[done]");
}

int load_flats_array(int size,Apartment* flat_list)
{

    static Apartment flats[30] = {
        {"Herzl 12, Tel Aviv", 3, 2450000.0},
        {"Ben Yehuda 44, Tel Aviv", 2, 1980000.0},
        {"Dizengoff 105, Tel Aviv", 4, 3720000.0},
        {"Allenby 7, Tel Aviv", 1, 1250000.0},
        {"Jaffa 88, Jerusalem", 3, 2100000.0},
        {"King George 21, Jerusalem", 5, 4150000.0},
        {"Emek Refaim 33, Jerusalem", 4, 3890000.0},
        {"Bialik 9, Ramat Gan", 3, 2300000.0},
        {"Jabotinsky 150, Ramat Gan", 2, 1740000.0},
        {"Sokolov 62, Holon", 4, 2560000.0},
        {"Eilat 18, Holon", 3, 1990000.0},
        {"Rothschild 4, Rishon LeZion", 5, 3450000.0},
        {"Weizmann 27, Rishon LeZion", 2, 1620000.0},
        {"Ahad Ha'am 55, Petah Tikva", 3, 2080000.0},
        {"Hashomer 13, Petah Tikva", 4, 2740000.0},
        {"Balfour 31, Bat Yam", 2, 1480000.0},
        {"Ben Gurion 76, Bat Yam", 3, 1870000.0},
        {"Hanassi 40, Haifa", 4, 2350000.0},
        {"Moriah 112, Haifa", 5, 3120000.0},
        {"Herzliya 3, Herzliya", 6, 5600000.0},
        {"Sokolov 91, Herzliya", 3, 2890000.0},
        {"Usishkin 25, Netanya", 2, 1560000.0},
        {"Herzl 68, Netanya", 4, 2620000.0},
        {"Bar Ilan 14, Beer Sheva", 3, 1350000.0},
        {"Rager 200, Beer Sheva", 2, 980000.0},
        {"Hagalil 8, Kfar Saba", 4, 2980000.0},
        {"Tchernichovsky 37, Kfar Saba", 5, 3640000.0},
        {"Hayarkon 190, Ramat Hasharon", 6, 6250000.0},
        {"Hameyasdim 5, Modiin", 4, 2470000.0},
        {"Emek Dotan 22, Modiin", 5, 3080000.0}};

    if (size > 30)
    {
        printf("don't have enough flats");
        return -1;
    }
    for (int i = 0; i < size; i++)
    {
        flat_list[i] = flats[i];
        print_apartment_(&flat_list[i]);
    }
    return 0;
}


Apartment* apartment_filter_apts(int size, Apartment* apart_units,int max_price,int exact_rooms , int *res_size)
{
    printf("here");
    Apartment* filtered = (Apartment*)malloc(sizeof(Apartment) * size );
    *res_size = 0;
    RETURN_NULL_ON_NULL(filtered,"failed allcoation on start");
    int counter =0;
    for (int i=0;i<size;i++)
    {
        if (apart_units[i].price <= max_price && apart_units[i].rooms==exact_rooms)
        {
            filtered[counter++] = apart_units[i];
        }
    }
    printf("Counted %i apts",counter);
    Apartment* temp = (Apartment*)realloc(filtered,counter*sizeof(Apartment));
    if (temp ==NULL)
    {
        *res_size =0;
        printf("failed allcoation on post realloc");
        return NULL;
    }
    *res_size = counter;
    return temp;
}