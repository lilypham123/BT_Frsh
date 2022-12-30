// Nhập bán kính. Viết hàm trả về 2 giá trị chu vi và diện tích hình tròn

#include <stdio.h>
#include <conio.h>
#define pi 3.14

typedef struct TT
{
	float chuvi;
	float dientich;
};

TT tinhtoan(int n)
{
	TT A;
	A.chuvi = 2*pi*n;
	A.dientich = pi*n*n;
	return A;
}

int main()
{
	int bk;
	
	printf("Nhap vao ban kinh: ");
	scanf("%d", &bk);

	TT A = tinhtoan(bk);
	printf("Chu vi hinh tron la: C = %f", A.chuvi);
	printf("\nDien tich hinh tron la: S = %f", A.dientich);

	getch();
	return 0;
}