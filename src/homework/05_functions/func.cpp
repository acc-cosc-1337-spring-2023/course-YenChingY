//add include statements
#include<iostream>
#include "func.h"

using std::cout; using std::cin;
using std::string;

//add function code here

double get_gc_content(const string& dna)
{
  double len = 0;
  double gc_count = 0;

  for(int i = 0; i < dna.length(); i++)
  {
    if(dna[i] == 'C' || dna[i] == 'G')
    {
      gc_count++;
      len++;
    }
    else
    {
      len++;
    }
  }
  auto percent = gc_count / len;
  return percent;
}

std::string reverse_string(string dna)
{
	string temp;
	int len = dna.length();

  for (int i = len-1; i>=0; i--)
  {
		temp.push_back(dna[i]);
  }
  return temp;
}

std::string get_dna_complement(string dna)
{
  string rev = reverse_string(dna);
  string temp;

  int len = rev.length();
  for (int i = 0; i < len; i++)
  {
    if(rev[i] == 'A')
    {
      rev[i] = 'T';
      temp.push_back(rev[i]);
    }
    else if(rev[i] == 'T')
    {
      rev[i] = 'A';
      temp.push_back(rev[i]);
    }
    else if(rev[i] == 'C')
    {
      rev[i] = 'G';
      temp.push_back(rev[i]);
    }
    else if(rev[i] == 'G')
    {
      rev[i] = 'C';
      temp.push_back(rev[i]);
    }
    else
    {
      cout<<"Invalid string...\n";
      //run_menu;
    }
  }
  return temp;
}

/*void display_menu()
{
    cout<<"DNA String Menu\n";
    cout<<"1-Get GC Content\n";
    cout<<"2-Get DNA Complement\n";
    cout<<"3-Exit\n";
}

void run_menu()
{
  auto option = 0;

  do
  {
    display_menu();
    cout<<"\nEnter menu option: \n";
    cin>>option;

    //handle_menu_option(option);
  }
  while(option != 3);  
}


void handle_menu_option(int num, string dna)
{
  if(num == 1)
  {
    cout<<"Enter a DNA string: \n";
    cin>>dna;
    cout<<get_gc_content(dna);
  }
  else if(num == 2)
  {
    cout<<"Enter a DNA string: \n";
    cin>>dna;
    cout<<get_dna_complement(dna);
  }

  else if (num == 3)
  {
    prompt_user();
  }

  else
  {
    cout<<"\nInvalid option: \n";
    run_menu();
  } 
}

void prompt_user()
{
    auto choice = 'y';

    do
    {
        cout<<"Are you sure you want to exit? (y/n): ";
        cin>>choice;
    }
    while(choice != 'y' && choice != 'Y');
}*/






