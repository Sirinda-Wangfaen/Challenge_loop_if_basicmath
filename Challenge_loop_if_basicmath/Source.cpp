#include<stdio.h>
#include<cmath>

int main() {
	double x, y, n, sum, ave, sd, sum2 = 0;
	scanf_s("%lf %lf", &x, &y);
	if (x == (int)x) {
		if (x > y) {
			n = abs(x - y) + 1;
			sum = ((x * (x + 1)) - (y * (y - 1))) / 2;
			ave = sum / n;
			while (x >= y) {
				printf("%.lf ", x);
				sum2 += pow(x, 2);
				x--;
			}
			sd = sqrt(((n * sum2) - pow(sum, 2)) / (n * (n - 1)));
		}
		else if (x < y) {
			n = abs(x - y) + 1;
			sum = ((y * (y + 1)) - (x * (x - 1))) / 2;
			ave = sum / n;
			while (x <= y) {
				printf("%.lf ", x);
				sum2 += pow(x, 2);
				x++;
			}
			sd = sqrt(((n * sum2) - pow(sum, 2)) / (n * (n - 1)));
		}
		printf("\nAverage = %.1lf", ave);
		printf("\nSD = %.2f", sd);
	}
	return 0;
}