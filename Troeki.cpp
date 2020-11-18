#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	char A[1000];
	int i = 0;
	int k = 0;
	do {
		A[i] = getchar();
		if (A[i] == '\n') break;
		i++;
		if ((A[i] == 'б') && (A[i - 1] == ' '))
		{
			k++;
		}
	} while (1);
	printf("%c", k);
	_getch();
	return 0;
}