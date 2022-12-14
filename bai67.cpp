#include <stdio.h>
#include <stdlib.h>

void input(int *a, int &n);
int max1st(int *a, int n);
void output(int *a, int n);
int max2nd(int *a, int n);

int main()
{
    system("cls");
    int n;
    int a[n];
    int *max;
    input(a, n);
    output(a, n);
    printf("So lon nhat la: %d", max1st(a,n));
    printf("\nSo lon thu 2 la: %d", max2nd(a,n));
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

int max1st(int *a, int n)
{
    int max = a[0];
    for(int i = 1; i < n; i++)
    {
        if ( max < a[i] )
        {
            max = a[i];
        }
    }
    return max;
}

void output(int *a, int n)
{
    for(int i = 0; i < n; i++)
    printf("A[%d] = %d\n", i, a[i]);
}

int max2nd(int *a, int n)
{
    int max_1st, max_2nd;
    if (a[0] > a[1]){
        max_1st = a[0];
        max_2nd = a[1];
    }else{
        max_1st = a[1];
        max_2nd = a[0];
    }
    for(int i = 2; i < n; i++){
        if(a[i] >= max_1st){
            max_2nd = max_1st;
            max_1st = a[i];
        }else if (a[i] > max_2nd){
            max_2nd = a[i];
        }
    }
    return max_2nd;
}