//h
#include<iostream>
#include<string>
#include<vector>

#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager
{
friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);

public:
    void save_game(TicTacToe game);
    void get_winner_total(int& x, int& o, int& t);

private:
    vector<TicTacToe> games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;
    void update_winner_count(string winner);
};

#endif