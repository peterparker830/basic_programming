#include <stdio.h>

int main () {
	float sallaryAmount, taxPercantage, sallaryPercentage, taxAmount, sallary;
      	printf("Введіть суму нарахування:\n");
      	scanf("%f", &sallaryAmount);
      	printf("Введіть відсоток податку:\n");
      	scanf("%f", &taxPercantage);
      	printf("Введіть відсоток нарахування:\n");
      	scanf("%f", &sallaryPercentage);
      	taxAmount = sallaryAmount * taxPercantage / sallaryPercentage;
      	printf("Cума податку = %.0f грн.\n", taxAmount);
      	sallary = sallaryAmount - taxAmount;
      	printf("Зарплатня = %.0f грн.\n", sallary);
	return 0;
}
