#ifndef STUDENT_H_
#define STUDENT_H_


typedef struct student
{
    char name[30];
    int id_card;
    int grade;
}Student;


int load_student_array(int size,Student* stud_array);
void print_student(Student *s);
int student_calc_avg(int size, Student *stud_arr, float *average);





#endif