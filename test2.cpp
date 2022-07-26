#include<stdio.h>
#include<iostream>



int main(void)
{
	char name[100];
	char surname[100];
    char fullname[100];
    bool havesname;
	
	printf("Please enter your name:");
	scanf("%s",&name); 
	printf("Your name is %s \n", name);
	printf("Beatiful name :)\n");
	printf("Do you have a surname ?\n");
	printf("If yes, so anwser 1, if you dont, anwser 0\n");
	scanf("%d", &havesname);
	
	if(havesname)
	{
	    printf("So whats your surname ?");
	    scanf("%s", &surname);
	    printf("So your fullname is : %s %s, thats really unique, nice to meet you ;)\n",&name,surname);
 	    printf("Thanks for anwsering !!");
    }
    else{
    	printf("Thats unusual...keep your secrets then -_-");
	}
	
}

