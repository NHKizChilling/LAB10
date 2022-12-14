#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random(int *pt);
void sort(int *pt);

int main()
{
    system("cls");
    int Arr[100];
    random(Arr);
    sort(Arr);
    return 0;
}

void random(int *pt)
{
    printf("Truoc khi sap xep\n");
    srand((int)time(0));
    for(int i = 0; i < 100; ++i)
    {
        pt[i] = rand();
        printf("A[%d]=%d\n",i, pt[i]);
    } 
}

void sort(int *pt)
{
    printf("Sau khi sap xep\n");
    int tmp;
    for(int i = 0; i <= 100; i++)
    {
        for(int j = i + 1; j < 100; j++)
        {
            if(pt[i] > pt[j])
            {
                tmp = pt[i];
                pt[i] = pt[j];
                pt[j] = tmp;
            }
        }
    }
    for(int i = 0; i < 100; i++)
        printf("A[%d] = %d\n", i, pt[i]);
}