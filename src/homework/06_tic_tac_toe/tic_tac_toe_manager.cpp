//cpp
#include "tic_tac_toe_manager.h"

using std::string; using std::vector;
using std::cout; using std::cin;
using std::unique_ptr; using std::move;


void TicTacToeManager::save_game(unique_ptr<TicTacToe>& game)
{
    update_winner_count(game->get_winner());
    games.push_back(move(game));
}

void TicTacToeManager::get_winner_total(int& x, int& o, int& t)
{
    x = x_win;
    o = o_win;
    t = ties;
}

void TicTacToeManager::update_winner_count(std::string winner)
{
    if(winner == "X")
    {
        x_win++;
    }
    else if(winner == "O")
    {
        o_win++;
    }
    else
    {
        ties++;
    }
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    for(auto& game : manager.games)
    {
        out<<*game<<"\n";
    }
    return out;
}





