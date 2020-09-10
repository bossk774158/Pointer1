#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x;
	printf("Enter your height:");
	scanf("%d", &x);
	if (x < 0 || x>1 && x< 119)
	{
		printf("Error");
		}
	else if (x > 120 && x < 130)
	{
		printf("Is this a human or a dwarf?");
	}
	else if (x > 131 && x < 140)
	{
		printf("You're extremely short");
	}
	else if (x > 141 && x < 150)
	{
		printf("You're short");
	}
	else if (x > 151 && x < 160)
	{
		printf("You're average");
	}
	else if (x > 161 && x < 170)
	{
		printf("You're quite tall");
	}
	else if (x > 171 && x < 180)
	{
		printf("You're tall");
	}
	else if (x > 180 && x <190)
	{
		printf("You're very tall");
	}
	else if(x > 191 && x < 200)
	{
		printf("You're NBA Player!!");
	}
	else if(x>300)
	{
		printf("You're jinn!!");
	}
	return 0;
}