#include <stdio.h>

int main(void) {
	int sentinel = 0;
	int size;
	int i;
	double sum;
	double average = 0;
	int counter = 0;
	int myArray [10];
	printf("Please enter positive integers, terminated with -1\n");
	scanf("%d",&sentinel);
	while (sentinel >= 0) {
		myArray[counter] = sentinel;
		scanf("%d", &sentinel);
		if (sentinel > 0)
		counter += 1;
	}
	size = counter;
/*	while(counter > 0) {
		
		temp = myArray[counter];
		printf("Temp value is : %d\n", temp);
		myArray[counter] = myArray[counter - 1];
		printf("myArray value is: %d\n", myArray[counter]);
		myArray[counter] = temp;
		counter -= 1;	
	}
*/	
	for (i = size - 1 ; i >= 0; i--) {
		printf("%d\n", myArray[i]);
		sum += myArray[i];
	}
	average = (sum / counter);
	printf("The average of the numbers entered is %f" , average);
}
