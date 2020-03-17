#include <stdio.h>

int main(void){
	int n;
	printf("Choose a natural number:\n");
	scanf("%d", &n);

	int vector[n];

	for(int i=1; i <= n; i++){
		vector[i] = i;
		printf(" %d", vector[i]);

		if(vector[i] == vector[n]){
			printf("\n ");
		}

	}

for(int j = 1; j < n; j++){
	
	for(int i=j; i <= n; i++){

		if(vector[i] == vector[n]){

			for(int k = 1; k < j; k++){
				printf("%d ",vector[k]);	
			}				


		printf("%d\n ",vector[j]);
	}

		else{

			printf("%d ",vector[i+1]);
		}

	}

}
	return 0;
}
