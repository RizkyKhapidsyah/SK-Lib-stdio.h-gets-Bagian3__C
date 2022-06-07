#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
	Source by Programiz (https://www.programiz.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {

	char name[256];
	printf("Enter full name: ");
	gets(name);

	printf("Your name is: %s\n", name);

	_getch();
	return 0;
}