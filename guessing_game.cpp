#include<iostream>
#include<cstdlib>// for random number
#include<ctime>//for time
using namespace std;

class guessinggame
{
   public:
   int random;	  
   
   guessinggame()
   {
     srand(time(0));
     random = rand()%100+1;
   }
   void start();
};

void guessinggame::start()
{
   int guessno;
   int attempt=0;
   cout<<"WELCOME TO GUESSING NUMBER GAME:\n";
   cout<<"SHALL WE START!!\n\n";
   cout<<"I HAVE SELECTED A NUMBER FROM 1 TO 1OO. CAN YOU GUESS IT ?\n"<<endl;
   
   while(guessno!=random)
   {
      cout<<"ENTER YOUR GUESS NUMBER:";
      cin>>guessno;

      if(guessno<random)
      {
	      cout<<"Too cold!! Try again\n"<<endl;
      }
      else if(guessno>random)
      {
              cout<<"Too Hot!! Try again\n"<<endl;
      }
      attempt++;
   }
              cout<<"Congratulations! You guess the number "<<random<<" in "<<attempt<<" attempts "<<endl;

}

int main()
{
   guessinggame game;
   game.start();
   cin.ignore();
   
   return 0;
}
