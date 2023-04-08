//cpp
#include "tic_tac_toe.h"
#include<iostream>
#include<vector>
#include<string>

using std::cout; using std::cin; using std::vector; using std::string;

void TicTacToe::display_board() const
{
    for(int i = 0; i < pegs.size(); i++)
    {
        if(i == 2 || i == 5 )
        {
            cout<<pegs[i]<<"\n";
            cout <<"-----\n";
        }
        else if (i == 8)
        {
            cout<<pegs[i]<<"\n";
        }
        else
        {
            cout<<pegs[i]<<"|";
        }
    }
}

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
    //if(pegs[position - 1] != " " )
    //{
    //    cout<<"The space taken. Please select a new position\n";
    //}
    //else
    //{
        pegs[position - 1] = player;
    //}
    set_next_player();
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
    if(pegs[0] == pegs[3] && pegs[3] == pegs[6] && pegs[0] != " ")
    {
        return true;
    }
    else if(pegs[1] == pegs[4] && pegs[4] == pegs[7] && pegs[1] != " ")
    {
        return true;
    }
    else if(pegs[2] == pegs[5] && pegs[5] == pegs[8] && pegs[2] != " ")
    {
        return true;
    }
    else
    return false;
}

bool TicTacToe::check_row_win()
{
    if(pegs[0] == pegs[1] && pegs[1] == pegs[2] && pegs[0] != " ")
    {
        return true;
    }
    else if(pegs[3] == pegs[4] && pegs[4] == pegs[5] && pegs[3] != " ")
    {
        return true;
    }
    else if(pegs[6] == pegs[7] && pegs[7] == pegs[8] && pegs[6] != " ")
    {
        return true;
    }
    else
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    if(pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[0] != " ")
    {
        return true;
    }
    else if(pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[2] != " ")
    {
        return true;
    }
    else
    return false;
}




