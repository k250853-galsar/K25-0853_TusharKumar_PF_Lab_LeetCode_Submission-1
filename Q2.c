//Completed
#include<stdio.h>

void shuffle(int *nums, int n, int *result){
	int j=0;    
    for(int i=0; i<n; i++){
        result[j]=nums[i];
        j+=2;
    }
    j=1;
    for(int i=n; i<2*n; i++){
        result[j]=nums[i];
        j+=2;
    }
}

int main(){
	int n;
	printf("Enter length of array: ");
	scanf("%d", &n);
	int arr[n];
	int result[n];
	printf("Enter elements of array (double of length of array):\n");
	for(int i=0; i<2*n; i++){
		scanf("%d", &arr[i]);
	}
	shuffle(&arr,n,&result);
	for(int i=0; i<2*n; i++){
		printf("%d ", result[i]);
	}
	
	return 0;
}
