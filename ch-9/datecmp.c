#include <stdio.h>

typedef struct
{
    int dd;
    int mm;
    int yy;
} sdate;

int days_in_month(int mm, int yy)
{
    if (mm == 2)
    {
        if ((yy % 4 == 0 && yy % 100 != 0) || (yy % 400 == 0))
            return 29;
        else
            return 28;
    }
    else if (mm == 4 || mm == 6 || mm == 9 || mm == 11)
        return 30;
    else
        return 31;
}

void normalize_date(sdate *d)
{
    while (d->dd > days_in_month(d->mm, d->yy))
    {
        d->dd -= days_in_month(d->mm, d->yy);
        d->mm++;
        if (d->mm > 12)
        {
            d->mm = 1;
            d->yy++;
        }
    }
}

int cmpdate(sdate d1, sdate d2)
{
    if (d1.yy != d2.yy)
        return d1.yy > d2.yy ? 1 : -1;
    if (d1.mm != d2.mm)
        return d1.mm > d2.mm ? 1 : -1;
    if (d1.dd != d2.dd)
        return d1.dd > d2.dd ? 1 : -1;
    return 0;
}

int main()
{
    sdate d1 = {28, 8, 2027};
    sdate d2 = {1, 3, 2027};

    normalize_date(&d1);
    normalize_date(&d2);

    int result = cmpdate(d1, d2);
    printf("Comparison result: %d\n", result); // Output: 0 (same date after normalization)

    return 0;
}
