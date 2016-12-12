#include<iostream>
using namespace std;

char board[10]={'0','1','2','3','4','5','6','7','8','9'};

void board_status()
{
   cout<< endl<<"Get ready to play tic tac toe"<<endl<<endl;

   cout<<"Player 1:- X"<<"  "<<"Player 2:- O"<<endl<<endl;

   cout<<"      |       |       "<<endl;

   cout<<"     "<<board[1]<<"|"<<"      "<<board[2]<<"|"<<"     "<<board[3]<<endl;

   cout<<"______|_______|_______"<<endl;

   cout<<"      |       |       "<<endl;

   cout<<"     "<<board[4]<<"|"<<"      "<<board[5]<<"|"<<"     "<<board[6]<<endl;

   cout<<"______|_______|_______"<<endl;

   cout<<"      |       |       "<<endl;

   cout<<"     "<<board[7]<<"|"<<"      "<<board[8]<<"|"<<"     "<<board[9]<<endl;

   cout<<"      |       |       "<<endl<<endl;

}
int main()
{
  int i=0,player=1,box_no;
  do
    {
      board_status();
      player=player%2? 1 : 2;
      cout<<"Enter the no. to cross, Player "<<player<<":-"<<endl;
      cin>>box_no;

      if(player==1 && board[box_no]!='X' && board[box_no]!='O')
          board[box_no]='X';

      else if(player==2 && board[box_no]!='X' && board[box_no]!='O')
          board[box_no]='O';

      else
        cout<<"Wrong No.";

      board_status();

     player++;
    }
  while(i==-1);

  return 0;
}
