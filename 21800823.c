#include <stdio.h>
#include <stdlib.h>
#include"21800823.h"
#define MAX_LEN 2048

void buttler(int n, long buttlernumber){
	int arrc[buttlernumber];
	int i=0;
	for (i = 0; n > 0; i++)
	{
		arrc[i] = n % 2;
		n = n / 2;
	}
	printf("binary representation> "); for (int j = i - 1; j >= 0; j--)
	{
		printf("%d", arrc[j]);
	}
	printf("\n");
}
int sort_digits(int n){
	int arr[MAX_LEN];
	int temp;
	int num = 0;
	int i = 0;


	while(n){
		arr[i] = n % 10;
		n = n / 10;
		i++;
	}

	for(int j = 0; j < i; j++){
		for(int k = 0; k < i-1; k++){
			if(arr[k] > arr[k+1]){
				temp = arr[k];
				arr[k] = arr[k+1];
				arr[k+1] =temp;
			}
		}
	}

	for(int j = 0; j < i; j++)
		num = (num * 10) + arr[j];
 
	return num;
}
	
				

