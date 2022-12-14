#include <stdio.h>
#include <stdlib.h>

void input(int *a, int &n);
void sort(int *a, int n);
void insert(int *a, int *n);

int main()
{
    system("cls");
    int n,x;
    int a[n];
    input(a,n);
    sort(a,n);
    insert(a,&n);
    return 0;
}

void input(int *a, int &n)
{
    printf("So phan tu trong mang la: ");
    scanf("%d", &n);
    printf("Nhap phan tu\n");
    for(int i = 0; i < n; i++)
       scanf("%d", &a[i]);
}

void sort(int *a, int n)
{
    int mode;
    int tmp;
    do
    {
        printf("1.Tang dan\n");
        printf("2.Giam dan\n");
        printf("3.Thoat\n");
        printf("Chon: ");
        scanf("%d", &mode);
        if (mode == 3)
            system("break");
    }while(mode < 1 || mode > 3);
    switch (mode)
    {
    case 1:
    for(int i = 0; i <= n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for(int i = 0; i < n; i++)
        printf("A[%d] = %d\n", i, a[i]);
        break;
    case 2:
    for(int i = 0; i <= n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] < a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for(int i = 0; i < n; i++)
        printf("A[%d] = %d\n", i, a[i]);
        break;
    }
}

void insert(int *a, int *n)
{
    int x;
    printf("Nhap x: ");
    scanf("%d", &x);
    int i = *n;
    a[i] = x;
    i++;
    sort(a, i);
}