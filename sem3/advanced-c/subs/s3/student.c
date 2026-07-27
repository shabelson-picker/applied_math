#include <stdlib.h>
#include <stdio.h>
#include "student.h"



void print_student(Student *s)
{
    printf("[Student]:<name:%s> <id:%i> <grade:%i>\n", s->name, s->id_card, s->grade);
}

int student_calc_avg(int size, Student *stud_arr, float *average)
{
    int below_avg = 0;
    int integrator = 0;
    for (int i = 0; i < size; i++)
    {
        integrator += stud_arr[i].grade;
    }
    *average = integrator * 1.0 / size;
    printf("AVERAGE IS :%0.2f\n",*average);
    for (int i = 0; i < size; i++)
    {
        below_avg += (stud_arr[i].grade <= (*average)) ? 1 : 0;
    }
    return below_avg;
}

int load_student_array(int size, Student *stud_array)
{

    static Student students[20] = {
        {"Yossi Cohen", 312458761, 88},
        {"Dana Levi", 204873915, 74},
        {"Avi Mizrahi", 331902847, 91},
        {"Noa Peretz", 128374650, 63},
        {"Itay Biton", 295016483, 55},
        {"Shira Dahan", 340982175, 97},
        {"Omer Avraham", 217645308, 42},
        {"Tamar Friedman", 309871264, 85},
        {"Eitan Katz", 152039874, 70},
        {"Maya Shapira", 384019276, 100},
        {"Guy Azoulay", 263950184, 38},
        {"Lior Malka", 197462035, 79},
        {"Roni Gabay", 350281746, 66},
        {"Adi Sharon", 118293745, 93},
        {"Nir Barak", 276104839, 51},
        {"Hila Amar", 321987450, 82},
        {"Amit Ohayon", 209376154, 60},
        {"Yael Weiss", 364820917, 47},
        {"Doron Segal", 143065892, 76},
        {"Michal Ben-David", 298471036, 89}};

    if (size > 20)
    {
        printf("don't have enough students");
        
        return -1;
    }
    printf("1\n");
    for (int i = 0; i < size; i++)
    {
        stud_array[i] = students[i];
        print_student(&stud_array[i]);
    }
    printf("2\n");
 return 0;
}