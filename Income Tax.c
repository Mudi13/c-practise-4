#include<stdio.h>
int main()
{
    float income,it,tax;
    scanf("%f",&income);

    if (income<=100000)
    {
        income=income;
    }
    else if ((income>100001)&&(income<=150000))
    {
        income=income*90/100;
    }
    else if ((income>=150001)&&(income<=250000))
    {
        income=income*80/100;
        income=income-5000;
    }

    else if ((income>250000))
    {
        income=income*70/100;
        income=income-25000;
    }

    printf("income after tax= %f",income);

return 0;
}