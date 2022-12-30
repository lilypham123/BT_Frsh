// Cho mảng n phần tử, Viết đoạn code tính tổng
// các số chia hết cho 3 và k chia hết cho 5 trong mảng

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 100

void nhapMang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		a[i] = 1 + rand() % 20;
	}
}

void xuatMang(int a[], int n)
{
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}

int checkSo(int n)
{
	if(n % 3 == 0 && n % 5 != 0){
		return 1;
	}
	else
		return 0;
}

int main()
{
	int a[MAX], b[MAX];
	int n, m = 0;
	int tong = 0;
	do{
		printf("Nhap so luong phan tu mang: ");
		scanf("%d", &n);
		if(n < 0 || n > MAX){
			printf("So luong phan tu nhap vao khong hop le. Nhap lai\n");
		}
	}while(n < 0 || n > MAX);

	nhapMang(a, n);
	printf("Mang la: "); 
	xuatMang(a, n);

	for(int i = 0; i < n; i++){
		if(checkSo(a[i]) == 1){
			b[m++] = a[i];
		}
	}
	printf("\nMang so thoa man la: ");
	xuatMang(b, m);

	for(int i = 0; i < m; i++){
		tong += b[i];
	}
	printf("\nTong cac so thoa man yeu cau la S = %d", tong);

	getch();
	return 0;
}