#include<iostream>
#include<memory>
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::cout; using std::cin;
using std::unique_ptr; using std::make_unique;

int main() 
{
	//unique_ptr<TicTacToe3> game = make_unique<TicTacToe3>();
	unique_ptr<TicTacToe> game;
	TicTacToeManager manager;

	string player;
	string winner;
	bool gameover = false;
	auto choice = 'y';
	int size;
	int x; 
	int o;
	int t;

	while(choice == 'Y' || choice == 'y')
	{

		cout<<"\nPlay TicTacToe 3*3(enter 3) or TicTacToe 4*4 (enter 4): ";
		cin>>size;

		if(size == 3)
		{
			game = make_unique<TicTacToe3>();
		}
		else
			game = make_unique<TicTacToe4>();
	

		do
		{
			cout<<"Select player (X or O): ";
    		cin>>player;
		} while (player != "X" && player != "O");
		
		game->start_game(player);
		do
		{
			cin>>*game;
			cout<<*game;			
			gameover = game->game_over(); 
		}while(!gameover);

		winner = game->get_winner();
		cout<<"\nGame Over\n\n";
		if(winner == "X" || winner == "O")
		{
		cout<<"Winner: player "<<winner<<"\n\n"; //need to update the tie situation
		}
		else
		cout<<"Tie\n\n";

		manager.save_game(game);
		manager.get_winner_total(x, o, t);
		cout<<"X wins: "<<x<<"\n";
		cout<<"O wins: "<<o<<"\n";
		cout<<"TIES: "<<t<<"\n\n";//need to update

		cout<<"Enter y to continue, any key to exit: ";
		cin>>choice;

	}
	cout<<manager;
	cout<<"Bye...\n";

	return 0;
}