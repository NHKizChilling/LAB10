#include <stdio.h>
#include <stdlib.h>

void input(int *a, int *n);
void output(int *a, int n);
int max(int a[], int n);
int min(int a, int n);
int search(int a[], int n, int x);
void append(int *a, int *n, int x);
void insert(int a, int n, int x);
void _delete(int a, int &n, int k);
void sort(int a, int n);

int main()
{
    system("cls");
    int n, x;
    int a[n];
    input(a, &n);
    output(a, n);
    append(a,&n,x);
    return 0;
}

void input(int *a, int *n)
{
    
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", n);
    printf("Nhap so:\n");
    for (int i = 0; i < *n; i++)
        scanf("%d", &a[i]);
}

void output(int *a, int n)
{
   printf("In Mang\n");
   for (int i = 0; i < n; i++)
   {
       printf("Arr[%d] = %d\n", i, *a);
       a = a + 1;
   }
}

int max(int a[], int n)
{
    int max_ = a[0];
    for (int i = 1; i < n; i++)
    {
        if(a[i] > max_)
            max_ = a[i];
    }
    return max_;
}

int min(int a[], int n)
{
    int min_ = a[0];
    for (int i = 1; i < n; i++)
    {
        if(a[i] > min_)
            min_ = a[i];
    }
    return min_;
}

int search(int a[], int n, int x)
{
    for(int i = 0; i < n; i++)
    {
        if ( a[i] == x )
        {
            return i;
            break;
        }
        if ( i == n-1 && a[i] != x)
            return -1;
    }
}

void append(int *a, int *n, int x)
{
    int a[*n];
    a[n] = x;
    n++;
}