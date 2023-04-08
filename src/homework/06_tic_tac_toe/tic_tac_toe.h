//h
#include<iostream>
#include<string>
#include<vector>

using namespace std;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position); 
    void display_board() const;
    string get_player() const;
    //homework 7 update
    string get_winner();


private:
    string player;
    vector<string> pegs{" ", " ", " ", " ", " ", " ", " ", " ", " "};
    void set_next_player();
    bool check_board_full();
    void clear_board();
    //homework 7 update
    string winner;
    void set_winner();
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
};

#endif
