//Completed
#include<stdio.h>

void runningSum(int *nums, int numsSize, int *result){
	int sum=0;

    for(int i=0; i<numsSize; i++) {
        sum+=nums[i];
        result[i]=sum;
    }
}

int main(){
	int n;
	printf("Enter length of array: ");
	scanf("%d", &n);
	int arr[n];
	int result[n];
	printf("Enter elements of array:\n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	runningSum(&arr,n,&result);
	for(int i=0; i<n; i++){
		printf("%d ", result[i]);
	}
	
	return 0;
}
