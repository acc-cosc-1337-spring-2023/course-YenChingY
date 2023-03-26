#include<iostream>
#include "tic_tac_toe.h"

using std::cout; using std::cin;
int main() 
{
	TicTacToe game1;

	auto position = 0;
	string player;
	bool gameover = false;
	auto choice = 'y';
	
	while(choice == 'Y' || choice == 'y')
	{

		cout<<"Select player (X or O): ";
    	cin>>player;

		game1.get_player();
		game1.start_game(player);
		for(auto i = 0; i < 9; i++)
		{
			cout<<"\nSelect a position from (1-9): ";
    		cin>>position;
    		game1.mark_board(position);
			game1.display_board();
			gameover = game1.game_over();
			if(gameover)
			{
				cout<<"\nGame Over\n\n";
			} 
		}

		cout<<"Continues enter y, any key to exit: ";
		cin>>choice;

	}
	cout<<"Bye...\n";

	return 0;
}