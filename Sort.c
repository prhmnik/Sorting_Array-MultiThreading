#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int Sort(int array[], int len)
{
	int i, j; //Index of arrays
	int counter; //This is show how many number lower than each element array
	int sortedArray[len]; // Sorted array
	for (i=0; i<len; i++)
	{
		counter = 0;
		for (j=0; j<len; j++)
		{
			if (array[i]>array[j])
			{
				counter++;
			}
		}
		sortedArray[counter] = array[i];
	}
	for (i=0; i<len; i++)
	{
		printf("%d \n", sortedArray[i]);
	}

}
int main(){

	int a[8] = {16,25,4,13,18,5,19,12};

	Sort(a, 8);

	pthread_t thread1, thread2, thread3, thread4, thread5, thread6, thread7, thread8;

	return 0;
}
