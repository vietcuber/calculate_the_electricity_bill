#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	
	float edmi;
	char c;
	printf("Amount to pay the electricity bill\n");
	do {
		printf("Enter electricity dial meter index: ");
		scanf_s("%f", &edmi);
		while (edmi <= 0) {
			printf("Re-enter the valid value: ");
			scanf_s("%f", &edmi);
		}
		if (edmi < 100)
			edmi = edmi;
		else if (edmi < 200)
			edmi = 99 + (edmi - 99) * 1.5;
		else if (edmi < 300)
			edmi = 249 + (edmi - 199) * 2;
		else
			edmi = 449 + (edmi - 299) * 2.5;
		printf("Amount to pay for the electricity bill: %.3fk VNĐ\n", edmi);
		printf("Enter Y if you wanna use again, enter N if you wanna stop: ");
		scanf_s(" %c", &c);
	} while (c == 'Y');
	return 0;
}