#include <stdio.h> 



int main(){
    int age;
    printf("Whats your age?");
    scanf("%d", &age);

   
    
    if ( age < 3){
        printf("Nowadays babys are insane !!!");
    }
    else if (age == 3){
    	printf("Noadays babays are insane !!!");
	}
    else if (age <= 10){
        printf("You should be watchin discovery kids.");
    }
    else if(age < 18){
        printf("I mean, you good but how about your homework? ");
    }
    else if(age == 18){
        printf("Welcome to real life, good luck :( ");
    }
    else if (age > 18 && age <= 40 ){
        printf("Its rough buddy.");
    }
    else if (age > 40 && age < 90){
        printf("You have a lot of experience, thats really usefull.");
    }
    else if (age == 90){
    	printf("Really ? are you tryna challenge Queen Elizabeth ??");
	}
    else if (age > 90 && age < 120 ){
        printf("Really ? are you tryna challenge Queen Elizabeth ??");
    }
   else if (age >= 120){
        printf("Try again");
    }
    else{
	}
}
	

