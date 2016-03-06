#include "Dice.h"
#include <stdio.h>
#include <iostream>
#include <time.h>


using namespace std;

int main(){
	
	srand(time(NULL));									// Function used to call random numbers

	Dice Dice1;											//Creation of an object of the class

	Dice1.roll();					
	
	cout << Dice1.CurrentDiceValue<< endl;					



return 0;

}
