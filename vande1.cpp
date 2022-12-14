#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cau1_1(int n);
void cau1_2(int n);
void cau1_3(int n);
int input();

int main()
{
    system("cls");
    int n = input();
    cau1_1(n);
    cau1_2(n);
    cau1_3(n);
    return 0;
}

int input()
{
    int n;
    printf("Nhap so luong phan tu mang: ");
    scanf("%d",&n);
    return n;
}

void cau1_1(int n)
{
    int arr[n];
    printf("Cau 1.1\n");
    for(int i = 0; i < n; i++)
    {
        arr[i] = i+1;
        printf("a[%d]=%d\t",i,arr[i]);
    }
}

void cau1_2(int n)
{
    int arrb[n];
    srand((int)time(0));
    printf("\n\nCau 1.2\n");
    for(int i = 0; i < n; ++i)
    {
        arrb[i] = rand();
        printf("b[%d]=%d\n",i, arrb[i]);
    }    
}

int aTob()
{
    int input;
    printf("nhap so: ");
    scanf("%d", &input);
    return input;
}

void cau1_3(int n)
{
    int a, b;
    int k,i = 0;
    printf("\nCau 1.3\n");
    a = aTob();
    do
    {
        b = aTob();
        if(a>b)
            printf("Nhap lai");
    } while ( b <= a);
    int arr[n];
    printf("Nhap so vao mang\n");
    do 
    {
        scanf("%d", &arr[i]);
        if(arr[i] < a ||  arr[i] > b)
            printf("Nhap lai\n");
        else 
            i++;
    }while( i < n );
    for(int j = n-1; j >= 0; j--)
        printf("C[%d]=%d\n", j, arr[j]);
}