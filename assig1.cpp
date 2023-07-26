#include<stdio.h>
#include<stdlib.h>

char generateRandomAlphanumeric();		//Declaration of function generateRandomAlphanumeric	

//Creating a Function to genrate random Alphanumeric Character
char generateRandomAlphanumeric(){                       
    const char alphanumeric[] = "ABCDEF0123456789";   //create an array named alphanumeric that stores desirable alphanumeric characters
    int num_choices = sizeof(alphanumeric) - 1;       //create a num_choice integer to store the value for Scaling factor
    return alphanumeric[rand() % num_choices];        //returning a random alphanumeric value (with Scaling Factor num_choices) 
}

int main(){
    char x;								//declaring character type variable to store random alphanumeric value
    x = generateRandomAlphanumeric();				//storing the random alphanumeric character by calling the generateRandomAlphanumeric function
	
    printf("The Randomly Generate Character is %c\n\n", x);	//printing the random alphanumeric character that is store in variable x
	
	//try with more variable
    char y,z,a;
    y = generateRandomAlphanumeric();
    z = generateRandomAlphanumeric();						//all the variables have different random alphanumric charactar and it will store in them
    a = generateRandomAlphanumeric();			
	    
    	
    printf("The Randomly Generate Character is %c\n", y);
    printf("The Randomly Generate Character is %c\n", z);
    printf("The Randomly Generate Character is %c\n", a);	//all the variables print diffrent diffrent random alphanumeric characters that store in them
    
}
