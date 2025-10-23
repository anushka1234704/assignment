#include "mylib.h"

int reverseDigits(int n){
	int r,rev=0;
	while(n>0){
		r=n%10;
		rev=rev*10+r;
		n=n/10;
		
	}
	return rev;
}
	

int isArmstrong(int num){
	int count=0,r,sum=0,temp,flag;
	temp=num;
	flag=num;
	while(num>0){
		num=num/10;
		count++;
	}
	while(temp>0){
		r=temp%10;
		int power=1;
		for(int i=0;i<count;i++){
			power=power*r;
		}
		sum=sum+power;
		temp=temp/10;
	}
	if(sum==flag){
		return 1;
	}
	return 0;
}
int isAdams(int num){
	int N,r,rev_2,temp;
	temp=num;
    N=num*num;
    rev_2=reverseDigits(N);
   temp=reverseDigits(num)*reverseDigits(num);
   if(temp==rev_2){
	return 1;
}
return 0;}

int isPrime(int num){
	for(int i=2;i<num;i++){
		if(num%i==0){
			return 0;
		}
	}
	return 1;
	}
	int isPrimePallindrome(int num){
		if(reverseDigits(num)&&isPrime(num)==num){
			return 1;
		}
		return 0;
	}
