#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define CLEARBIT(byte, pos)

// Viết chương trình clear 1 bit ở vị trí bất kỳ của biến 32 bit

int main()
{
    int byte;
	printf("Nhap vao 1 so 32bit: ");
	scanf("%d", &byte);
    int pos;
    printf("Nhap pos: ");
    scanf("%d", &pos);
    byte &= ~(1<<pos);
    printf("So sau set bit la: %d", byte);
	getch();
    return 0;
}
