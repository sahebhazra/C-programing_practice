#include <stdio.h>
typedef struct
{
    int dd;
    int mm;
    int yyyy;
} sdate;


int date_cmp(sdate d1, sdate d2)
{
    if (d1.yyyy != d2.yyyy)
    {
        return d1.yyyy > d2.yyyy ? 1 : -1;
    }
    if (d1.mm != d2.mm)
    {
        return d1.mm > d2.mm ? 1 : -1;
    }
    if (d1.dd != d2.dd)
    {
        return d1.dd > d2.dd ? 1 : -1;
    }

    return 0; // Dates are equal
}
int main()
{
    sdate d1 = {29, 6, 2020};
    sdate d2 = {29, 6, 2020};
    int a = date_cmp(d1, d2);
    printf("%d\n", a);

    return 0;
}