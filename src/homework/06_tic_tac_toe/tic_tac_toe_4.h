//h
#include<iostream>
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_4_H
#define TIC_TAC_TOE_4_H

class TicTacToe4 : public TicTacToe
{
public:
    TicTacToe4(): TicTacToe(4){}
    TicTacToe4(std::vector<string> pegs, string winner) : TicTacToe(pegs, winner){}
    //more code here. Don’t forget to pass p and winner to TicTacToe via constructor

private:
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
};

#endif