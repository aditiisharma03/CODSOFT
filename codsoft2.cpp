#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() 
{

   srand(static_cast<unsigned int>(time(0)));


   int secretNumber = rand() % 100 + 1;

    int guess;
    bool guessed = false;

    while (!guessed)
   {

     cout << "Guess a number between 1 and 100:";
     cin >> guess;


      if (guess == secretNumber){
      cout << " Congratulations! You guessed the correct number"<<endl;
      guessed = true;
       } else if (guess < secretNumber){
       cout <<" Too low! Try again."<<endl;
       } else{
      cout << "Too high! Try again."<<endl;
       }
       
  }
   

  return 0;
}