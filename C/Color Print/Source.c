#include <Windows.h>
#include <stdio.h>

void main()
{
	HANDLE hC = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(hC, &csbi);
	printf("Default : %d\n", csbi.wAttributes);
	COLORREF a;
	int i;

	printf("\n  Literal\n");
	printf("BACKGROUND_BLUE : %d\n", BACKGROUND_BLUE);
	printf("FOREGROUND_BLUE : %d\n", FOREGROUND_BLUE);
	printf("BACKGROUND_GREEN : %d\n", BACKGROUND_GREEN);
	printf("FOREGROUND_GREEN : %d\n", FOREGROUND_GREEN);
	printf("BACKGROUND_RED : %d\n", BACKGROUND_RED);
	printf("FOREGROUND_RED : %d\n", FOREGROUND_RED);
	printf("BACKGROUND_INTENSITY : %d\n", BACKGROUND_INTENSITY);
	printf("FOREGROUND_INTENSITY : %d\n", FOREGROUND_INTENSITY);
	
	printf("\n  Text Color\n");
	for (i = 0; i < 16; i++){
		SetConsoleTextAttribute(hC, i);
		printf("\t%-3d\t", i);
		SetConsoleTextAttribute(hC, 7);
		printf("\t%d\n", i);
	}

	printf("\n  Background Color\n");
	for (i = 0; i < 256; i += 16){
		SetConsoleTextAttribute(hC, i);
		printf("\t%-3d\t", i);
		SetConsoleTextAttribute(hC, 7);
		printf("\t%d\n", i);
	}

	getchar();
}