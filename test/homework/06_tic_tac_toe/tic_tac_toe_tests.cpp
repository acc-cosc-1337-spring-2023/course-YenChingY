#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<iostream>
#include<string>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test TicTacToe class game over and set winner function")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(3);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(4);
	REQUIRE(game->game_over() == false);

	game->mark_board(7);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C"); 
}


TEST_CASE("Test first player set to X")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	REQUIRE(game->get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	REQUIRE(game->get_player() == "O");
}

TEST_CASE("Test win by first column")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(7);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X"); 
}


TEST_CASE("Test win by second column")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");

	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);

	game->mark_board(8);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X"); 
}

TEST_CASE("Test win by third column")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");

	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X"); 
}

TEST_CASE("Test win by first row")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");

	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);

	game->mark_board(3);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O"); 
}

TEST_CASE("Test win by second row")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");

	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O"); 
}

TEST_CASE("Test win by third row")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");

	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O"); 
}

TEST_CASE("Test win diagonally from top left")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);

	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X"); 
}

TEST_CASE("Test win diagonally from bottom left")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");

	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(3);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O"); 
}

TEST_CASE("Test TicTacToeManager get winner total function")
{
	unique_ptr<TicTacToe> game1 = make_unique<TicTacToe3>();
	TicTacToeManager manager;
	int x_win; 
	int o_win; 
	int ties;

	//first game: X wins
	game1->start_game("X");
	game1->mark_board(3);
	game1->mark_board(2);
	game1->mark_board(6);
	game1->mark_board(5);
	game1->mark_board(9);
	REQUIRE(game1->game_over() == true);
	REQUIRE(game1->get_winner() == "X");
	if(game1->game_over())
	{
		manager.save_game(game1);
	}

	//second game: O player wins
	unique_ptr<TicTacToe> game2 = make_unique<TicTacToe3>();
	game2->start_game("O");
	game2->mark_board(7);
	game2->mark_board(2);
	game2->mark_board(5);
	game2->mark_board(1);
	game2->mark_board(3);
	REQUIRE(game2->game_over() == true);
	REQUIRE(game2->get_winner() == "O");
	if(game2->game_over())
	{
		manager.save_game(game2);
	}

	//third game: ties
	unique_ptr<TicTacToe> game3 = make_unique<TicTacToe3>();
	game3->start_game("X");
	game3->mark_board(1);
	game3->mark_board(2);
	game3->mark_board(3);
	game3->mark_board(5);
	game3->mark_board(4);
	game3->mark_board(7);
	game3->mark_board(6);
	game3->mark_board(9);
	game3->mark_board(8);
	REQUIRE(game3->game_over() == true);
	REQUIRE(game3->get_winner() == "C");
	if(game3->game_over())
	{
		manager.save_game(game3);
	}

	manager.get_winner_total(x_win, o_win, ties);
	REQUIRE(x_win == 1);
	REQUIRE(o_win == 1);
	REQUIRE(ties == 1);
}

TEST_CASE("Test TicTacToe class game over and set winner function 4*4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(3);
	REQUIRE(game->game_over() == false);

	game->mark_board(4);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(8);
	REQUIRE(game->game_over() == false);

	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	
	game->mark_board(9);
	REQUIRE(game->game_over() == false);

	game->mark_board(11);
	REQUIRE(game->game_over() == false);

	game->mark_board(10);
	REQUIRE(game->game_over() == false);

	game->mark_board(12);
	REQUIRE(game->game_over() == false);

	game->mark_board(14);
	REQUIRE(game->game_over() == false);

	game->mark_board(13);
	REQUIRE(game->game_over() == false);

	game->mark_board(16);
	REQUIRE(game->game_over() == false);

	game->mark_board(15);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C"); 
}

TEST_CASE("Test first player set to X 4*4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	REQUIRE(game->get_player() == "X");
}

TEST_CASE("Test first player set to O 4*4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("O");
	REQUIRE(game->get_player() == "O");
}

TEST_CASE("Test win by first column 4*4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	REQUIRE(game->game_over() == false);

	game->mark_board(13);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X"); 
}

TEST_CASE("Test win by second column 4*4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");

	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);

	game->mark_board(14);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X"); 
}

TEST_CASE("Test win by third column 4*4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");

	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	REQUIRE(game->game_over() == false);

	game->mark_board(15);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X"); 
}

TEST_CASE("Test win by Fourth column 4*4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");

	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(12);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	REQUIRE(game->game_over() == false);

	game->mark_board(16);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X"); 
}

TEST_CASE("Test win by first row 4*4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("O");

	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);

	game->mark_board(4);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O"); 
}

TEST_CASE("Test win by second row 4*4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("O");

	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);

	game->mark_board(8);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O"); 
}

TEST_CASE("Test win by third row 4*4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("O");

	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);

	game->mark_board(12);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");  
}

TEST_CASE("Test win by fourth row 4*4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("O");

	game->mark_board(13);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	
	game->mark_board(14);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(15);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);

	game->mark_board(16);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");  
}

TEST_CASE("Test win diagonally from top left 4*4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);

	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);

	game->mark_board(16);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");  
}

TEST_CASE("Test win diagonally from bottom left 4*4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("O");

	game->mark_board(13);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);

	game->mark_board(4);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
}  


TEST_CASE("Test TicTacToeManager get winner total function 4*4")
{
	unique_ptr<TicTacToe> game1 = make_unique<TicTacToe4>();
	TicTacToeManager manager;
	int x_win; 
	int o_win; 
	int ties;

	//first game: X wins
	game1->start_game("X");
	game1->mark_board(1);
	game1->mark_board(2);
	game1->mark_board(5);
	game1->mark_board(6);
	game1->mark_board(9);
	game1->mark_board(10);
	game1->mark_board(13);
	REQUIRE(game1->game_over() == true);
	REQUIRE(game1->get_winner() == "X");
	if(game1->game_over())
	{
		manager.save_game(game1);
	}

	//second game: O player wins
	unique_ptr<TicTacToe> game2 = make_unique<TicTacToe4>();
	game2->start_game("O");
	game2->mark_board(5);
	game2->mark_board(1);
	game2->mark_board(6);
	game2->mark_board(2);
	game2->mark_board(7);
	game2->mark_board(3);
	game2->mark_board(8);
	REQUIRE(game2->game_over() == true);
	REQUIRE(game2->get_winner() == "O");
	if(game2->game_over())
	{
		manager.save_game(game2);
	}

	//third game: ties
	unique_ptr<TicTacToe> game3 = make_unique<TicTacToe4>();
	game3->start_game("X");
	game3->mark_board(1);
	game3->mark_board(2);
	game3->mark_board(3);
	game3->mark_board(4);
	game3->mark_board(5);
	game3->mark_board(6);
	game3->mark_board(8);
	game3->mark_board(7);
	game3->mark_board(10);
	game3->mark_board(9);
	game3->mark_board(11);
	game3->mark_board(12);
	game3->mark_board(13);
	game3->mark_board(14);
	game3->mark_board(15);
	game3->mark_board(16);
	REQUIRE(game3->game_over() == true);
	REQUIRE(game3->get_winner() == "C");
	if(game3->game_over())
	{
		manager.save_game(game3);
	}

	manager.get_winner_total(x_win, o_win, ties);
	REQUIRE(x_win == 1);
	REQUIRE(o_win == 1);
	REQUIRE(ties == 1);
}