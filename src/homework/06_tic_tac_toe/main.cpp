#include<iostream>
#include "tic_tac_toe.h"

using std::cout; using std::cin;
int main() 
{
	TicTacToe game1;
	auto position = 0;
	string player;
	bool gameover = false;

	cout<<"Select player (X or O): ";
    cin>>player;

	//player = game1.get_player();
	game1.start_game(player);
	for(auto i = 0; i < 9; i++)
	{
		cout<<"Select a position from (1-9): ";
    	cin>>position;
    	game1.mark_board(position);
		game1.display_board();
		gameover = game1.game_over();
		if(gameover)
		{
			cout<<"Game Over\n";
			cout<<"Bye...\n";
		} 
	}


	return 0;
}