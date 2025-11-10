#include <stdio.h>

typedef struct student
{
    char name[20];
    char sec[2];
    char class[4];
} sdnt;

void show(sdnt s)
{
    printf("name : %s \nsec : %s \nclass : %s\n", s.name, s.sec, s.class);
}

int main()
{

    sdnt roll_1 = {"ramesh", "a", "x"};
    sdnt roll_2 = {"hitesh", "b", "xi"};

    show(roll_2);

    return 0;
}