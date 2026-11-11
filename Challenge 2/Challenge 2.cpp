// Challenge 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	string Name;
	string Username;
	string Clantag;
	unsigned int EXP;

	cout << "Enter your Name: ";
	cin >> Name;

	cout << "Enter your Username: ";
	cin >> Username;

	cout << "Enter your Clantag: ";
	cin >> Clantag;

	cout << "How much EXP do you have? ";
	cin >> EXP;

	int playerlevel = EXP / 100;
	int XPRequired = 100 - (EXP % 100);
	int NextLevel = playerlevel + 1;

	cout << "Your name is " << Name << " and your in-game name is " << "[" << Clantag << "] " << Username << " " << "\n" << endl;
	cout << "You have " << EXP << " experience points " << "\n" << endl;

	cout << "You need " << XPRequired << " points to reach the next level, which is " << NextLevel << "\n" << endl;
}