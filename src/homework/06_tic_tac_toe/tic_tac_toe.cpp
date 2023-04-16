//cpp
#include "tic_tac_toe.h"
#include<iostream>
#include<vector>
#include<string>

using std::cout; using std::cin; using std::vector; using std::string;

void TicTacToe::start_game(std::string first_player)
{
    player = first_player;

    clear_board();
}

string TicTacToe::get_player() const
{
    return player;
}


void TicTacToe::clear_board()
{    
    for(auto i = 0; i < pegs.size(); i++)
    {
        pegs[i] = " ";
    }
}

void TicTacToe::mark_board(int position)
{
    if(pegs[position-1] == " ")
    {
        pegs[position - 1] = player;
        set_next_player();
    }
 
}

void TicTacToe::set_next_player()
{
    if(player == "X" || player == "x")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    auto count = 0;
    for (auto i = 0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            count++;
        }
    }
    if(count == 0)
    {
        return true;
    }
    else
    return false;
}

bool TicTacToe::game_over()
{
    if(check_column_win() || check_row_win() || check_diagonal_win())
    {
        get_winner();
        set_winner();
        return true;
    }
    else if(check_board_full())
    {
        winner = "C";
        get_winner() = "C"; //modify to tie condition
        return true;
    }
    else
    return false;
}

string TicTacToe::get_winner()
{
    //cout<<winner;
    return winner;
}

void TicTacToe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else
    winner = "X";
}

bool TicTacToe::check_column_win()
{
    return false;
}

bool TicTacToe::check_row_win()
{
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    return false;
}

std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
{
    int size = game.pegs.size();
    for(int i = 0; i < size; i++)
    {
        while(size == 9)
        {
            if(i == 2 || i == 5 )
            {
                out<<game.pegs[i]<<"\n";
                out <<"-----\n";
            }
            else if (i == 8)
            {
                out<<game.pegs[i]<<"\n";
            }
            else
            {
               out<<game.pegs[i]<<"|";
            }
        }
        while(size == 16)
        {
            if(i == 3 || i == 7 || i == 11)
            {
                out<<game.pegs[i]<<"\n";
                out <<"-----\n";
            }
            else if (i == 15)
            {
                out<<game.pegs[i]<<"\n";
            }
            else
            {
               out<<game.pegs[i]<<"|";
            }
        }
 
    }
    return out;
}

std::istream& operator>>(std::istream& in, TicTacToe& game)
{
    auto position = 0;

    cout<<"\nSelect a position from 1 to "<<game.pegs.size()<<" : ";
    cin>>position;
	while(position < 1 || position > game.pegs.size())
	{
		cout<<"Invalid! Please select position from 1 to "<<game.pegs.size()<<" : ";
		in>>position;
	}
    game.mark_board(position);

    return in;
}





