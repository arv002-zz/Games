#include<iostream>
using namespace std;

char board[10]={'0','1','2','3','4','5','6','7','8','9'};

void board_status()
{
   cout<< endl<<"Get ready to play tic tac toe"<<endl<<endl;

   cout<<"Player 1:- X"<<"  "<<"Player 2:- O"<<endl<<endl;

   cout<<"      |       |       "<<endl;

   cout<<"______|_______|_______"<<endl;

   cout<<"      |       |       "<<endl;

   cout<<"______|_______|_______"<<endl;

   cout<<"      |       |       "<<endl;

   cout<<"      |       |       "<<endl<<endl;

}
int main()
{

  board_status();
}
