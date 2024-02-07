	#include<stdio.h>
//Function to PRINT unsorted array elements
void print(int arr[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
			printf("\t");
	}

}

//function to implement Bubble Sort
void bubble(int a[], int n){
	int i,j, temp;
	
	for (i=0;i<n;i++){
		for(j=i+1; j<n; j++){
			//checks for the condition and swaps values
			if(a[j]<a[i]){
				temp =a[i];
				a[i] = a[j];	
				a[j] = temp;
			}
		}
	}
}

void main(){
	int i, j ,n , temp;
	//int m = sizeof(a);
	
	printf("Enter the number of elements in the array:\n ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d integers for the array:\n", n	);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
	
	
	printf("Before Sorting the array, elements are\n");
	print(arr, n);
	
	bubble(arr,n);
	printf("\nAfter Sorting the array Elements\n");
	print(arr,n);
	
return 0;	
	
}