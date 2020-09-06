#include<stdio.h>
#include<math.h>

float result(float, float);

int main()
{
	float a[2];
	float* n = a;
	for (int i = 0; i < 2; i++)
	{
		if (scanf_s("%f", &a[i]) != 1)
		{
			printf("ERROR");
			return 1;
		}
		else if (a[i] < 0 || a[i] == 0)
		{
			printf("ERROR");
			return 1;
		}
	}
	printf("%.6f", result(*n, *(n + 1)));
	return 0;
}

float result(float a, float b)
{
	int r = sqrt((a * a) + (b * b));
	return r;
}
