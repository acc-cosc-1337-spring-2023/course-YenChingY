//cpp
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::cout; using std::string;
using std::ofstream; using std::ifstream;
using std::unique_ptr; using std::make_unique;
using std::getline; using std::ios;
using std::move;

void TicTacToeData::save_games (const std::vector<std::unique_ptr<TicTacToe>>& games)
{
    ofstream file;
    file.open("game_history.dat", ios::app);
    for(auto& game : games)
    {   
        for(auto& peg : game->get_pegs())
        {
            file<<peg;
        }
        file<<game->get_winner();
        file<<"\n";
    }

    file.close();

}

std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
    string line;
    vector<string> pegs;
    vector<unique_ptr<TicTacToe>> boards;
    string ch;
    string winner;
    unique_ptr<TicTacToe> board;
    ifstream infile("game_history.dat", ios::out);
    

    if(infile.is_open())
    {
        while(getline(infile, line))
        {
            for(auto i = 0; i < line.size()-1; i++)
            {
                pegs.push_back(string(1, line[i]));
            }
            winner = string(1, line[line.size()-1]);
            if(pegs.size() == 9)
            {
                board = make_unique<TicTacToe3>(pegs, winner);
            }
            else if(pegs.size() == 16)
            {
                board = make_unique<TicTacToe4>(pegs, winner);
            }
            boards.push_back(move(board));
        }
        infile.close();
        return boards;
    }
    else
    {
        cout<<"Cannot open the file...\n";
    }    
}

