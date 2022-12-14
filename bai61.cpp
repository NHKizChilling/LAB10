#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    system("cls");
    int a[1000];
    int sum = 0;
    srand((int)time(0));
    for(int i = 0; i < 1000; ++i)
    {
        a[i] = rand();
        if(i % 10 == 0 && i > 0)
            system("pause");
        printf("A[%d]=%d\n",i, a[i]);
        sum += a[i]; 
    } 
    printf("Trung binh la: %f", sum * 1.0 / 1000.0);
    return 0;
}