//cpp
#include "tic_tac_toe.h"
#include<iostream>
#include<vector>
#include<string>

using std::cout; using std::cin; using std::vector; using std::string;

void TicTacToe::display_board() const
{
    for(int i = 0; i < 9; i++)
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
    for(auto i = 0; i < 9; i++)
    {
        pegs[i] = " ";
    }
}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
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
    for (auto i = 0; i < 9; i++)
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
    return check_board_full();
}

