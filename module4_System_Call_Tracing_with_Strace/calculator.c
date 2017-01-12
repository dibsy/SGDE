#include<stdio.h>
int add(int a,int b){
	int sum=0;
	sum = a+b;
	return sum;
}

int sub(int a ,int b){
	int sub=0;
	sub = a-b;
	return sub;
}

int main(int argc, char **argv){
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	printf("Sum of %d and %d = %d",a,b,add(a,b));
	printf("Sub of %d and %d = %d",a,b,sub(a,b));
}
