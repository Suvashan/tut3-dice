#include <time.h>
#include <stdio.h>
#include <iostream>

class Dice 

{
public:
	
	
	int NoOfRolls;													//Variables created to store the Number of Rolls,
	int CurrentDiceValue;											// The Current Dice Value being produced by the random function
	int total;														// and the total dice rolls

	int roll(void){


		NoOfRolls++;												// Function created to generate the random number, this function
																	// works hand in hand with the 'srand' function in the cpp file
        CurrentDiceValue =  rand() % 5 + 1;

		total = total + CurrentDiceValue;

		return CurrentDiceValue;
		}

	Dice::Dice(){

		NoOfRolls = 0;												//Initialisation of variables used in class 
		CurrentDiceValue = 0;
		total = 0;

	}

	float Average(int y){
	


	   
   return (float)total/NoOfRolls;

   }

};

