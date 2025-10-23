#include<stdio.h>
#include"arraylib.h"

  int main(void){
  	int n;
  	printf("enter the length:");
  	scanf("%d",&n);
  	int a[n];
  	printf("enter the element:");
  	for(int i=0;i<n;i++){
  		scanf("%d",&a[i]);
     }
	  int v; 
	  printf("enter the value:");
	  scanf("%d",&v);
	  
	   displayArray(a,n);
	   printf("Max at index %d\n",findMaxIndex(a,n));
	   printf("Min at index %d\n",findMaxIndex(a,n));
	   printf("Average of array is %f\n",findAverage(a,n));
	   if(linearSearch(a,n,v)!=-1){
	   printf("the value found at index %d\n",linearSearch(a,n,v));
     }
	   else{
	   
	   printf("not found");
	   }
	   reverseArray(a,n);
	   sortArray(a,n);
	   
       return 0;
  }