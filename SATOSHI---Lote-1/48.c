// 1 � 2/4 + 3/9 � 4/16 + 5/25 + ... + 15/225

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	unsigned char t;
	char m;
	double f;
	
	m = 1;
	t = 1;
	f = 0.0;
	
	for(t = 1; t <= 15; t++)
	{
		f += (m) * ((double)t/(double)(t*t));
		m *= -1;
	}
	
	printf("%lf\n", f);
	getch();
	return 0;
}