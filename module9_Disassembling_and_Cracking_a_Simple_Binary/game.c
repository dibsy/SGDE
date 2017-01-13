#include<stdio.h>
#include<string.h>
char password[]="SECRET";

void checkPass(char arr[]){
	if(strcmp(arr,password)==0){
		printf("\n You have been verified. Thanks for purchasing the game! \n\n\n\n");
	}else{
		printf("\n Sorry ! Please enter a correct password! \n\n\n\n");
	}
}

void main(){
	char pass[10];
	printf("Enter password before you can continue:");
	scanf("%s",pass);
	printf("\nYou have entered:%s\n",pass);
	checkPass(pass);

}
