#include <stdio.h>
#include <stdlib.h>
#define ROW 9
void main()
{
	int row, col;
	printf("\n");
	for (row = 1; row <= ROW; ++row)
	{
		for (col = 1; col <= row; col++)
			printf("%5d", col * row);
		printf("\n");
	}
	system("pause");
}
# ВАРИАНТ ТРИ
#include <stdio.h>
#include <stdlib.h>
#define START_ROW 4
#define END_ROW 7
#define COL 10
void main()
{
	int row, col;
	printf("\n");
	for (row = START_ROW; row <= END_ROW; ++row)
	{
		for (col = 1; col <= COL; col++)
			printf("%5d", row * 10 + col);
		printf("\n");
	}
	system("pause");
}
