#include<iostream>
#include "tic_tac_toe.h"

using std::cout; using std::cin;
int main() 
{
	TicTacToe game1;

	auto position = 0;
	string player;
	string winner;
	bool gameover = false;
	auto choice = 'y';
	
	while(choice == 'Y' || choice == 'y')
	{
		do
		{
			cout<<"Select player (X or O): ";
    		cin>>player;
		} while (player != "X" && player != "O");
		
			game1.get_player();
			game1.start_game(player);
		do
		{
			cout<<"\nSelect a position from (1-9): ";
    		cin>>position;
			while(position < 1 || position > 9)
			{
				cout<<"Invalid! Please select position from (1-9): ";
				cin>>position;
			}
    		game1.mark_board(position);
			
			game1.display_board();
			gameover = game1.game_over(); 
		}while(!gameover);

		winner = game1.get_winner();
		cout<<"\nGame Over\n\n";
		cout<<"Winner: player "<<winner<<"\n\n";


		cout<<"Enter y to continue, any key to exit: ";
		cin>>choice;

	}
	cout<<"Bye...\n";

	return 0;
}