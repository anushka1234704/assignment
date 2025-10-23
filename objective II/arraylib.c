#include <stdio.h>
#include "arraylib.h"

int findMaxIndex(int arr[],int size){
	int a=0;
	for(int b=0;b<size;b++){
		if(arr[b]>arr[a]){
			a=b;
		}
	}
	return a;
}
int findMinIndex(int arr[],int size){
	int a=0;
	for(int i=0;i<size;i++){
		if(arr[i]<arr[a]){
			a=i;
		}
	}
	return a;
}
float findAverage(int arr[],int size){
	int s=0;
	for(int i=0;i<size;i++){
		s=s+arr[i];
		
	}
	int avgerage=s/size;
	return avgerage;
}
void displayArray(int arr[],int size){
	for(int i=0;i<size;i++){
		printf("%d",arr[i]);
		
	}
	printf("\n");
}
void reverseArray(int arr[],int size){
	for(int a=0;a<size/2;a++){
		int temp=arr[a];
		arr[a]=arr[size-1 -a];
		arr[size-1- a]=temp;
	}
	for(int a=0;a<size;a++){
		printf("%d",arr[a]);
		
	}
	printf("/n");
}
void sortArray(int arr[],int size){
	for(int i=0;i<size-1;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<size;i++){
		printf("%d",arr[i]);
		
	}
	printf("\n");
}
int linearSearch(int arr[],int size,int value){
	for(int i=0;i<size;i++){
		if(arr[i]==value){
			return i;
		}
	}
	return -1;
}