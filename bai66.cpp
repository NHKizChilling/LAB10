#include <stdio.h>
#include <stdlib.h>

void input(int *a, int &n);
void output(int *a, int n);
void _delete(int *a, int &n);

int main()
{
    system("cls");
    int n;
    int a[n];
    input(a, n);
    printf("Truoc khi xoa\n");
    output(a, n);
    printf("\nSau khi xoa\n");
    _delete(a, n);
    output(a, n);
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

void output(int *a, int n)
{
    for(int i = 0; i < n; i++)
    printf("A[%d] = %d\n", i, a[i]);
}

void _delete(int *a, int &n)
{
    int x;
    int count = 0;
    printf("Nhap so muon xoa: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if ( a[i] == x )
            count++;
        else
            a[i - count] = a[i];
    }
    n -= count;
}

