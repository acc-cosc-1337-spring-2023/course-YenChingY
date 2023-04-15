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
    TicTacToe() : pegs(9, " "){}
    TicTacToe(int size) : pegs(size*size, " "){}
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position); 
    void set_winner();
    string get_player() const;
    string get_winner();

protected:
    vector<string> pegs;
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();

private:
    string player;
    string winner;
    void set_next_player();
    bool check_board_full();
    void clear_board();

friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
friend std::istream& operator>>(std::istream& in, TicTacToe& game);
};

#endif
