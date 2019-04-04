#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"21300333.h"
#include"21800823.h"
#define MAX_LEN 2048

typedef enum {FALSE,TRUE} bool;

int main(int argc, char* argv[]){
	int i, j ,k;
	int n1 = 2;
	int n2 = 2;
	char* input = malloc(MAX_LEN*sizeof(char));
	bool is_number;
	int reverse;
	int sort;
	char s[33 + 1];
	char prime1[] ="False";
	char prime2[] ="True";
	

	while(fgets(input, sizeof(input), stdin) != NULL) {

		if(input[strlen(input) - 1] == '\n')
			input[strlen(input) - 1] = 0;

		if(strcmp(input, "quit") == 0){
			printf("(bye)\n");
			break;
		}

		is_number = TRUE;

		for(i = 0; i < strlen(input); i++){
			if(!isdigit(input[i])){
				printf("Entered input is not a number\n");
				is_number = FALSE;
				break;
			}
		}
	
		if(is_number){
			reverse = reverse_digits(atoi(input));
			sort = sort_digits(atoi(input));

			n1 = atoi(input);
			n2 = sort;
			j = 0;
			k = 0;

			while(n1){
				n1 = n1 / 10;
				j++;
			}
			while(n2){
				n2 = n2 / 10;
				k++;
			}

			if(sort == 0 && reverse == 0);
			else{
				printf("reverse> %d \n",reverse);
				printf("sort> ");
				if(j != k){
					for(i = 0; i < j-k; i++)
						printf("0");
				}
				printf("%d \n",sort);
				buttler(atoi(input),MAX_LEN);
				if(isPrime(atoi(input)))
					printf("isPrime > %s \n",prime2);
				else
					printf("isPrime > %s \n",prime1);
			}

			//printf("reverse> %d \nsort> %d \n", reverse, sort);
			
		}
	}
	free(input);

	return 0;
}


