#include<iostream>
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using std::cout; using std::cin;
int main() 
{
	TicTacToe game;
	TicTacToeManager manager;

	string player;
	string winner;
	bool gameover = false;
	auto choice = 'y';
	int x; 
	int o;
	int t;

	while(choice == 'Y' || choice == 'y')
	{
		do
		{
			cout<<"Select player (X or O): ";
    		cin>>player;
		} while (player != "X" && player != "O");
		
			game.start_game(player);
		do
		{
			cin>>game;
			cout<<game;			
			gameover = game.game_over(); 
		}while(!gameover);

		winner = game.get_winner();
		cout<<"\nGame Over\n\n";
		cout<<"Winner: player "<<winner<<"\n\n";

		manager.save_game(game);
		manager.get_winner_total(x, o, t);
		cout<<"X wins: "<<x<<"\n";
		cout<<"O wins: "<<o<<"\n";
		cout<<"TIES: "<<t<<"\n\n";//need to update

		cout<<"Enter y to continue, any key to exit: ";
		cin>>choice;

	}
	cout<<manager;//need to update the total chart
	cout<<"Bye...\n";

	return 0;
}