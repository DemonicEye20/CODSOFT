#include <iostream>
#include <stdlib.h>
using namespace std;
    int choice,row,column,i,j;
    int k=0;
    char board[3][3]= {{'1','2','3'},{'4','5','6'},{'7','8','9'}},turn='X';
    void show_board(),player_turn();
    bool gameover(),draw; //Have to do bool for return value
int main()
{
    cout << "TIC-TAC-TOE GAME\n"
            "(Turn based game)\n"
            "Player1-(X), Player2-(O)\n";
    while(gameover())
    {
        show_board();
        player_turn();
        gameover();
    };
    if(turn == 'O' && draw == false)
    {
        cout<<"Player1 with 'X' has won the game\n";
    }
    else if(turn == 'X' && draw == false)
    {
        cout<<"Player2 with 'O' has won the game\n";
    }
    else if(draw==true && turn =='X' || turn=='O')
    {
        cout<<"It is a DRAW\n";
    }
    else;
}
void show_board()
{
    cout<<"     |     |                    \n";
    cout<<"  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<" \n";
    cout<<"_____|_____|_____       \n";
    cout<<"     |     |                    \n";
    cout<<"  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<" \n";
    cout<<"_____|_____|_____       \n";
    cout<<"     |     |                    \n";
    cout<<"  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<" \n";
    cout<<"     |     |                    \n";
}

void player_turn()
{
    if(turn == 'X')
    {
        cout<<"Player1-(X) turn : \n";
    }
    else if(turn == 'O')
    {
        cout<<"Player2-(O) turn : \n";
    }
        cin >> choice;
    switch(choice)
    {
        case 1: row=0; column=0; break;
        case 2: row=0; column=1; break;
        case 3: row=0; column=2; break;
        case 4: row=1; column=0; break;
        case 5: row=1; column=1; break;
        case 6: row=1; column=2; break;
        case 7: row=2; column=0; break;
        case 8: row=2; column=1; break;
        case 9: row=2; column=2; break;
        default:
            cout<<"Invalid Move\n";
    }

    if(turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O')
    {
        board[row][column] = 'X';
        turn = 'O';
    }
    else if(turn == 'O' && board[row][column] != 'X' && board[row][column] != 'O')
    {
        board[row][column] = 'O';
        turn = 'X';
    }
    else
    {
        cout<<"Box already used, Please choose another one\n";
        player_turn();
    }
    show_board();
    //cout <<k; //to check draw for now
    //cout << draw;//TO check draw for now
}
bool gameover()
{
    for(i=0; i<3; i++)
    {
        if(board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
        {
            return false;
        }
        else if(board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
        {
            return false;
        }
        else;
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(board[i][j]=='X'||board[i][j]=='O')
            {
                k++;
            }

        }
    }
    if(k>72)
    {
        draw = true;
        return false;
    }
    else if (k<72)
    {
        draw = false;
        return true;
    }
    else;
}
