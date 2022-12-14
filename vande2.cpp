#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int so_nguyen_to(int k);
void output_array(int a[], int n);
void sum_chinh_phuong(int a[], int n);
void count_so_doi_xung(int a[], int n);
void avg_so_boi_3(int a[], int n);

int main()
{
	system("cls");
	int n;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d",&n);
	int a[n];
	printf("Nhap so:\n");
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	output_array(a, n);
	sum_chinh_phuong(a,n);
	count_so_doi_xung(a,n);
	avg_so_boi_3(a,n);
	return 0;
}

int so_chinh_phuong(int k)
{
	for( int i = 0; i*i <= k; i++ )
	{
		if ( i*i == k )
			return 1;
	}
}

int so_nguyen_to(int k)
{
	int count = 0;
	for(int i = 1; i <= k; i++)
	{
		if(k % i == 0)
			count++;
	}
	if(count == 2)
		return 1;
	else 
		return 0;
}

int so_doi_xung(int k)
{
	int tmp; 
	int sum = 0;
	int r; 
	if ( k < 10 )
		return 0;
	else 
	{
		for(tmp = k; tmp != 0; tmp = tmp / 10)
	{
		r = tmp % 10;
		sum = sum * 10 + r;
	}
	if (sum == k)
		return 1;
	else 
		return 0;
	}
}

int so_boi_3(int k)
{
	int sum = 0;
	int r;
	for(k; k != 0; k /= 10)
	{
		r = k % 10;
		sum += r;
	}
	if(sum % 3 == 0)
		return 1;
	else 
		return 0;
}

void output_array(int a[], int n)
{
	printf("Cac so trong mang A la:\n");
	for (int i = 0; i < n; i++)
	{
		i *= 1.0;
		if ( i % 10 == 0 )
		{
			printf("\n");
			printf("A[%d] = %d ",i, a[i]);
		} else 
			printf("A[%d] = %d ",i, a[i]);
	}
}

void sum_chinh_phuong(int a[], int n)
{	
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if ( so_chinh_phuong(a[i]) == 1)
			sum += a[i];
	}	
	printf("\nTong so chinh phuong la: %d\n", sum);
}

void count_so_doi_xung(int a[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if ( so_doi_xung(a[i]) == 1)
			count++;
	}	
	printf("\nSo cac so doi xung la: %d\n", count);
}

void avg_so_boi_3(int a[], int n)
{
	int sum = 0;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if ( so_boi_3(a[i]) == 1)
		{
			sum += a[i];
			count++;
		}
	}	
	printf("\nTrung binh cac so boi 3 la: %.2f\n", (1.0 * sum)/ (1.0 * count));
}