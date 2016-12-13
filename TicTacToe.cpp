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

int Check_win()
{

    if(board[1]==board[2] && board[2]==board[3])
        return 1;
    else if(board[1]==board[4] && board[4]==board[7])
        return 1;
    else if(board[1]==board[5] && board[5]==board[9])
        return 1;
    else if(board[2]==board[5] && board[5]==board[8])
        return 1;
    else if(board[3]==board[6] && board[6]==board[9])
        return 1;
    else if(board[3]==board[5] && board[5]==board[7])
        return 1;
    else if(board[4]==board[5] && board[5]==board[6])
        return 1;
    else if(board[7]==board[8] && board[8]==board[9])
        return 1;
    else if (board[1]!='1' && board[2]!='2' && board[3]!='3' &&
          board[4]!='4' && board[5]!='5' && board[6]!='6' &&
          board[7]!='7' && board[8]!='8' && board[9]!='9')
    return 0;

    return -1;
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
        {
          cout<<"Wrong No.";
          player--;
        }

      i=Check_win();


     player++;
    }

  while(i==-1);

   board_status();

    if(i==1)
    cout<<"Player "<<player<<" Won!!"<<endl;
    else cout<<"Draw";

    return 0;

}
