// NUMBER GUESSING GAME

/* Task-1) Create a program that generates a random number and asks the user to guess it.
provide feedback on whether the guess is too high or too low until the user guesses
the correct number.
*/


#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{

    srand( (unsigned int) time(NULL));
    int number = (rand() % 100) + 1 ;
    int guess =0 ;

    do{
        cout<<" Enter guess(1-100) : " ;
        cin>> guess;

        if(guess< number){
            cout<< "Guess higher"<< endl ;
           }  

        else if(guess> number){
            cout<<" Guess lower"<< endl;
        }   

        else{
            cout<<" Guess is correct."<< endl ;
        }

    }while(guess != number);
    
}