#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#include "complex.h"
#include "student.h"
#include "apartment.h"

void q1()
{
    Complex z1, z2, zplus, zmul, zsub;
    int res = get_users_complex(&z1);
    if (res == -1)
    {
        printf("Aborting q1");
        return;
    }
    res = get_users_complex(&z2);
    if (res == -1)
    {
        printf("Aborting q1");
        return;
    }
    zplus = complex_addition(z1, z2);
    printf("\nAddition:::");
    display_your_complex(zplus);
    zmul = complex_multiplication(z1, z2);
    printf("\nmultiplication:::");
    display_your_complex(zmul);
    zsub = complex_subtraction(z1, z2);
    printf("\nsubtraction:::");
    display_your_complex(zsub);
}

void q2()
{
    int Duds, N = 18;
    float average;
    Student my_students[N];
    if (load_student_array(N, my_students) == -1)
    {
        printf("Abort q2");
        return;
    };
    Duds = student_calc_avg(N, my_students, &average);
    printf("the class has %i under avg. with avg of %0.2f\n", Duds, average);
}
void q3()
{
    int N = 30, filtered_size;
    Apartment *all_flats = (Apartment *)malloc(sizeof(Apartment) * N);
    Apartment *filtered;

    /* every room count that appears in load_flats_array */
    int rooms_count = 6;
    int rooms[6] = {1, 2, 3, 4, 5, 6};

    /* price thresholds spanning the data (min 980000, max 6250000) */
    int prices_count = 8;
    int prices[8] = {900000, 1500000, 2000000, 2500000, 3000000, 4000000, 5000000, 6300000};
    int res = load_flats_array(N, all_flats);
    if (res == -1)
    {
        printf("Abort : loading apts failed");
        return;
    }
    for (int i = 0; i < prices_count; i++)
    {
        for (int j = 0; j < rooms_count; j++)
        {
            printf("FILTER ARGS: Max Price: %i, Rooms %i\n", prices[i], rooms[j]);
            filtered = apartment_filter_apts(N, all_flats, prices[i], rooms[j], &filtered_size);
            print_apart_array(filtered, filtered_size);
            free(filtered);
            printf("----------");
        }
    }
   
}

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; i++)
    {

        switch (argv[i][0])
        {
        case '1':
            q1();
            break;
        case '2':
            q2();
            break;
        case '3':
            q3();
            break;

        default:
            break;
        }
    }
    printf("done\n");
    return 0;
}