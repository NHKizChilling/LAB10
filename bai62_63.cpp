#include <stdio.h>
#include <stdlib.h>

void mang_cu(int *pt);
void mang_moi(int *pt);
void test(int *pt);

int main()
{
    system("cls");
    int a[10];
    mang_cu(a);
    mang_moi(a);
    test(a);
    return  0;
}

void mang_cu(int *pt)
{
    printf("Mang cu\n");
    for(int i = 0; i < 10; i++)
    {
        pt[i] = i;
        printf("A[%d] = %d\n", i ,  pt[i]);
    }
}

void mang_moi(int *pt)
{
    printf("Mang moi\n");
    for(int i = 0; i < 10; i++)
    {
        pt[i] = pt[i] + 10;
        printf("A[%d] = %d\n", i ,  pt[i]);
    }
}

void test(int *pt)
{
    printf("test\n");
    for(int i = 0; i < 10; i++)
    {
        printf("A[%d] = %d\n", i ,  pt[i]);
    }
}