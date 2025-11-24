//Completed
#include<stdio.h>
#include<stdlib.h>

int comp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main(){
	int n;
	printf("Enter length of array: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter elements of array:\n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
		if(arr[i]%2==0) arr[i]=0;
		else arr[i]=1;
	}
	qsort(arr, n, sizeof(arr[0]), comp);
	
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}

	return 0;
}
