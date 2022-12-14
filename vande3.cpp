#include <stdio.h>
#include <stdlib.h>

void input(int *a, int &n);
void output(int *a, int n);
int max(int *a, int n);
int min(int *a, int n);
int search(int *a, int n);
void append(int *a, int &n);
void insert(int *a, int &n);
void _delete(int *a, int &n);
void sort(int *a, int n);
int menu();

int main()
{
    system("cls");
    int n, x;
    int a[1000];
    input(a,n);
    int mode;
    do 
    {
        mode = menu();
        switch (mode)
        {
        case 1:
            input(a, n);
            break;
        case 2: 
            system("cls");
            output(a, n);
            break;
        case 3:
            printf("So lon nhat la: %d\n", max(a, n));
            break;
        case 4: 
            printf("So be nhat la: %d\n", min(a, n));
            break;
        case 5:
            x = search(a, n);
            if (x == -1)
                printf("Khong tim thay\n");
            else 
                printf("X o vi tri thu %d\n", x);
            break;
        case 6:
            append(a, n);
            break;
        case 7:
            insert(a, n);
            break;
        case 8:
            _delete(a, n);
            break;
        case 9:
            sort(a, n);
            break;
        case 10:
            printf("\nThoat chuong trinh");
            break;
        default:
            printf("Nhap lai");
            break;
        } 
    } while ( mode != 10);
    return 0;
}

int menu()
{
    int mode;
    printf("\nMenu\n");
    printf("=============\n");
    printf("1. Tao day so\n");
    printf("2. Hien thi day so\n");
    printf("3. Tim max\n");
    printf("4. Tim min\n");
    printf("5. Tim phan tu X\n");
    printf("6. Bo sung phan tu\n");
    printf("7. Chen phan tu vao vi tri k\n");
    printf("8. Xoa phan tu thu k\n");
    printf("9. Sap xep day so\n");
    printf("10. Thoat chuong trinh\n");
    printf("=============\n");
    printf("Chon: ");
    scanf("%d", &mode);
    return mode;
}

void input(int *a, int &n)
{
    system("cls");
    printf("So phan tu trong mang la: ");
    scanf("%d", &n);
    printf("Nhap phan tu\n");
    for(int i = 0; i < n; i++)
       scanf("%d", &a[i]);
}

void output(int *a, int n)
{
    printf("In Mang\n");
    for(int i = 0; i < n; i++)
        printf("A[%d] = %d\n", i, a[i]);
}

int max(int *a, int n)
{
    system("cls");
    int max_ = a[0];
    for (int i = 1; i < n; i++)
    {
        if(a[i] > max_)
            max_ = a[i];
    }
    return max_;
}

int min(int *a, int n)
{
    system("cls");
    int min_ = a[0];
    for (int i = 1; i < n; i++)
    {
        if(a[i] < min_)
            min_ = a[i];
    }
    return min_;
}

int search(int *a, int n)
{
    system("cls");
    int x;
    printf("Nhap so muon tim: ");
    scanf("%d", &x);
    for(int i = 0; i < n; i++)
    {
        if ( a[i] == x )
        {
            return i;
            break;
        }
        if ( i == n - 1 && a[i] != x)
            return -1;
    }
}

void append(int *a, int &n)
{
    printf("Nhap x: ");
    scanf("%d", &a[n]);
    n++;  
}

void insert(int *a, int &n)
{
    system("cls");
    int index;
    int x;
    printf("Nhap vi tri cua mang: ");
    scanf("%d", &index);
    printf("So muon them: ");
    scanf("%d", &x);
    if(index <= 0){
        index = 0;
    }
    if(index >= n){
        index = n;
    }
    for(int i = n; i > index; i--)
        a[i] = a[i-1];
    a[index] = x;
    n++;
}

void _delete(int *a, int &n)
{
    system("cls");
    int index;
    printf("Nhap phan tu muon xoa: ");
    scanf("%d", &index);
    for (int i = index; i < n; i++)
        a[i] = a[i+1];
    n--;
}

void sort(int *a, int n)
{
    system("cls");
    int tmp;
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
}