#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include "Functions_Player.h"
using namespace std;
char Show_Place_Virt(char massive_virt[10][10]) {
	int i, j, numb = 1;;
	cout << " 1 2 3 4 5 6 7 8 9 10" << endl;
	for (i = 0; i < 10; i++) {
		if (numb != 10) cout << numb << " | ";
		else cout << numb << "| ";
		for (j = 0; j < 10; j++) {
			cout << massive_virt[i][j] << " | ";
		}
		numb++;
		cout << endl;
	}
	return 0;
}
char Virtial_Check_And_Move(char(*massive_virt)[10], int x, int y, int check_numb) {
	int count_1 = 0;
	do {
		int string_i = rand() % 10;
		int column_j = rand() % 10;
		int count = 0;
		if (string_i == 0) {
			for (int i = string_i; i < string_i + 2 + check_numb; i++) {
				if (column_j == 0) {
					for (int j = column_j; j < column_j + 2 + x; j++) {
						if (massive_virt[i][j] == '-') count++;
						else {
							count = 0;
							break;
						}
					}
					if (count == 0) break;
				}
				if (column_j > 0 and column_j < 9) {
					if (x == 0 or ((x == 1 and column_j < 9) or (x == 2 and column_j <
						8) or (x == 3 and column_j < 7))) {
						for (int j = column_j - 1; j < column_j + 2 + x; j++) {
							if (massive_virt[i][j] == '-') count++;
							else {
								count = 0;
								break;
							}
						}
						if (count == 0) break;
					}
					else {
						break;
					}
				}
				if (x == 0 and column_j == 9) {
					for (int j = column_j - 1; j < column_j + 1; j++) {
						if (massive_virt[i][j] == '-') count++;
						else {
							count = 0;
							break;
						}
					}
					if (count == 0) break;
				}
			}
		}
		if (string_i > 0 and string_i < 9) {
			for (int i = string_i - 1; i < string_i + 2 + check_numb; i++) {
				if (column_j == 0) {
					for (int j = column_j; j < column_j + 2 + x; j++) {
						if (massive_virt[i][j] == '-') count++;
						else {
							count = 0;
							break;
						}
					}
					if (count == 0) break;
				}
				if (column_j > 0 and column_j < 9) {
					if (x == 0 or ((x == 1 and column_j < 9) or (x == 2 and column_j <
						8) or (x == 3 and column_j < 7))) {
						for (int j = column_j - 1; j < column_j + 2 + x; j++) {
							if (massive_virt[i][j] == '-') count++;
							else {
								count = 0;
								break;
							}
						}
						if (count == 0) break;
					}
					else {
						break;
					}
				}
				if (x == 0 and column_j == 9) {
					for (int j = column_j - 1; j < column_j + 1; j++) {
						if (massive_virt[i][j] == '-') count++;
						else {
							count = 0;
							break;
						}
					}
					if (count == 0) break;
				}
			}
		}
		if (string_i == 9) {
			if (check_numb != 0) {
				continue;
			}
			else {
				for (int i = string_i - 1; i < string_i + 2 + check_numb; i++) {
					if (column_j == 0) {
						for (int j = column_j; j < column_j + 2 + x; j++) {
							if (massive_virt[i][j] == '-') count++;
							else {
								count = 0;
								break;
							}
						}
						if (count == 0) break;
					}
					if (column_j > 0 and column_j < 9) {
						if (x == 0 or ((x == 1 and column_j < 9) or (x == 2 and
							column_j < 8) or (x == 3 and column_j < 7))) {
							for (int j = column_j - 1; j < column_j + 2 + x; j++) {
								if (massive_virt[i][j] == '-') count++;
								else {
									count = 0;
									break;
								}
							}
							if (count == 0) break;
						}
						else {
							break;
						}
					}
					if (x == 0 and column_j == 9) {
						for (int j = column_j - 1; j < column_j + 1; j++) {
							if (massive_virt[i][j] == '-') count++;
							else {
								count = 0;
								break;
							}
						}
						if (count == 0) break;
					}
				}
			}
		}
		int count_2 = 0;
		if (count != 0) {
			do {
				if (check_numb == 0) {
					if (x == 0) {
						massive_virt[string_i][column_j] = 'S';
						count_2 = -1;
					}
					if (x == 1) {
						for (int j = column_j; j < column_j + 2; j++) {
							massive_virt[string_i][j] = 'S';
						}
						count_2 = -1;
					}
					if (x == 2) {
						for (int j = column_j; j < column_j + 3; j++) {
							massive_virt[string_i][j] = 'S';
						}
						count_2 = -1;
					}
					if (x == 3) {
						for (int j = column_j; j < column_j + 4; j++) {
							massive_virt[string_i][j] = 'S';
						}
						count_2 = -1;
					}
				}
				else {
					if (check_numb == 1) {
						for (int i = string_i; i < string_i + 2; i++) {
							massive_virt[i][column_j] = 'S';
						}
						count_2 = -1;
					}
					if (check_numb == 2) {
						for (int i = string_i; i < string_i + 3; i++) {
							massive_virt[i][column_j] = 'S';
						}
						count_2 = -1;
					}
					if (check_numb == 3) {
						for (int i = string_i; i < string_i + 4; i++) {
							massive_virt[i][column_j] = 'S';
						}
						count_2 = -1;
					}
				}
			} while (count_2 != -1);
		}
		if (count_2 == -1) count_1 = -1;
		if ((count_2 == 0 and x == 3) or (count_2 == 0 and check_numb == 3)) return 1;
} while (count_1 != -1);
return 0;
}
char Virtual_Move(char(*massive_virt)[10]) {
	srand(time(0));
	int count = 0;
	int one = 4, two = 3, three = 2, four = 1;
	do {
		int random_case = 0;
		do {
			Virtial_Check_And_Move(massive_virt, 0, 1, 0);
			cout << endl;
			one--;
		} while (one != 0);
		do {
			random_case = rand() % 2 + 1; // 1 - горизонтально, 2 - вертикально.
			switch (random_case)
			{
			case 1:
				Virtial_Check_And_Move(massive_virt, 1, 2, 0);
				cout << endl;
				two--;
				break;
			case 2:
				Virtial_Check_And_Move(massive_virt, 0, 2, 1);
				cout << endl;
				two--;
				break;
			default:
				break;
			}
		} while (two != 0);
		do {
			random_case = rand() % 2 + 1; // 1 - горизонтально, 2 - вертикально.
			switch (random_case)
			{
			case 1:
				Virtial_Check_And_Move(massive_virt, 2, 3, 0);
				cout << endl;
				three--;
				break;
			case 2:
				Virtial_Check_And_Move(massive_virt, 0, 3, 2);
				cout << endl;
				three--;
				break;
			default:
				break;
			}
		} while (three != 0);
		do {
			random_case = rand() % 2 + 1; // 1 - горизонтально, 2 - вертикально.
			switch (random_case)
			{
			case 1:
				if (Virtial_Check_And_Move(massive_virt, 3, 4, 0) == 1) {
					break;
				}
				else {
					four--;
					break;
				}
			case 2:
				if (Virtial_Check_And_Move(massive_virt, 0, 4, 3) == 1) {
					break;
				}
				else {
					four--;
					break;
				}
			default:
				break;
			}
		} while (four != 0);
		count++;
	} while (count == 0);
	cout << "Компьютер расставил свои корабли!" << endl << "Игра началась!" << endl
		<< "Ваш ход первый!" << endl;
	cout << endl;
	return 0;
}
int Virtual_Shoot(char(*massive)[10], int count_killed_player_ships) {
	srand(time(0));
	int x = 0, y = 0, count = 0;
	do {
		x = rand() % 10 + 1;
		y = rand() % 10 + 1;
		switch (x)
		{
		case 1:
			switch (y)
			{
			case 1:
				if (massive[x - 1][y - 1] == 'K' and (massive[x][y - 1] == '-' or
					massive[x][y - 1] == 'X') and (massive[x - 1][y] == '-' or massive[x - 1][y] == 'X')) {
					massive[x - 1][y - 1] = 'X';
					Show_Place(massive);
					cout << "Компьютер убил ваш корабль!" << endl;
					count_killed_player_ships++;
				}
				else if (massive[x - 1][y - 1] == 'K' and (massive[x][y - 1] == 'K' or
					massive[x - 1][y] == 'K')) {
					massive[x - 1][y - 1] = 'X';
					Show_Place(massive);
					cout << "Компьютер ранил ваш корабль!" << endl;
					count_killed_player_ships++;
					if (massive[x][y - 1] == 'K') {
						for (; massive[x][y - 1] == 'K' or massive[x][y - 1]
							== 'X'; x++) {
							massive[x][y - 1] = 'X';
							Show_Place(massive);
							count_killed_player_ships++;
						}
						cout << "Компьютер убил ваш корабль!" << endl;
					}
					else if (massive[x - 1][y] == 'K') {
						for (; massive[x - 1][y] == 'K' or massive[x - 1][y]
							== 'X'; y++) {
							massive[x - 1][y] = 'X';
							Show_Place(massive);
							count_killed_player_ships++;
						}
						cout << "Компьютер убил ваш корабль!" << endl;
					}
				}
				else {
					cout << "Компьютер промахнулся!" << endl << "Теперь ваш ход!" << endl;
						count = -1;
				}
				break;
			case 2:case 3:case 4:case 5: case 6: case 7: case 8: case 9:
				if (massive[x - 1][y - 1] == 'K' and (massive[x][y - 1] == '-' or
					massive[x][y - 1] == 'X') and (massive[x - 1][y] == '-' or massive[x - 1][y] == 'X') and
					(massive[x - 1][y - 2] == '-' or massive[x - 1][y - 2] == 'X')) {
					massive[x - 1][y - 1] = 'X';
					Show_Place(massive);
					cout << "Компьютер убил ваш корабль!" << endl;
					count_killed_player_ships++;
				}
				else if (massive[x - 1][y - 1] == 'K' and (massive[x][y - 1] == 'K' or
					massive[x - 1][y] == 'K' or massive[x - 1][y - 2] == 'K')) {
					massive[x - 1][y - 1] = 'X';
					Show_Place(massive);
					cout << "Компьютер ранил ваш корабль!" << endl;
					count_killed_player_ships++;
					if (massive[x][y - 1] == 'K') {
						for (; massive[x][y - 1] == 'K' or massive[x][y - 1]
							== 'X'; x++) {
							massive[x][y - 1] = 'X';
							Show_Place(massive);
							count_killed_player_ships++;
						}
						cout << "Компьютер убил ваш корабль!" << endl;
					}
					else if (massive[x - 1][y] == 'K') {
						int z = y;
						for (; massive[x - 1][y] == 'X' or massive[x - 1][y]
							== 'K'; y--) {
							z = y;
						}
						for (; massive[x - 1][z] == 'K' or massive[x - 1][z]
							== 'X'; z++) {
							massive[x - 1][z] = 'X';
							Show_Place(massive);
							count_killed_player_ships++;
						}
						cout << "Компьютер убил ваш корабль!" << endl;
					}
				}
				else {
					cout << "Компьютер промахнулся!" << endl << "Теперь ваш ход!" << endl;
						count = -1;
				}
				break;
			case 10:
				if (massive[x - 1][y - 1] == 'K' and (massive[x][y - 1] == '-' or
					massive[x][y - 1] == 'X') and (massive[x - 1][y - 2] == '-' or massive[x - 1][y - 2] == 'X')) {
					massive[x - 1][y - 1] = 'X';
					Show_Place(massive);
					cout << "Компьютер убил ваш корабль!" << endl;
					count_killed_player_ships++;
				}
				else if (massive[x - 1][y - 1] == 'K' and (massive[x][y - 1] == 'K' or
					massive[x - 1][y - 2] == 'K')) {
					massive[x - 1][y - 1] = 'X';
					Show_Place(massive);
					cout << "Компьютер ранил ваш корабль!" << endl;
					count_killed_player_ships++;
					if (massive[x][y - 1] == 'K') {
						for (; massive[x][y - 1] == 'K' or massive[x][y - 1]
							== 'X'; x++) {
							massive[x][y - 1] = 'X';
							Show_Place(massive);
							count_killed_player_ships++;
						}
						cout << "Компьютер убил ваш корабль!" << endl;
					}
					else if (massive[x - 1][y - 2] == 'K') {
						int z = y;
						for (; massive[x - 1][y - 2] == 'X' or massive[x - 1][y
							- 2] == 'K'; y--) {
							z = y;
						}
						for (; massive[x - 1][z - 2] == 'K' or massive[x - 1][z
							- 2] == 'X'; z++) {
							massive[x - 1][z - 2] = 'X';
							Show_Place(massive);
							count_killed_player_ships++;
						}
						cout << "Компьютер убил ваш корабль!" << endl;
					}
				}
				else {
					cout << "Компьютер промахнулся!" << endl << "Теперь ваш ход!" << endl;
						count = -1;
				}
				break;
			default:
				break;
}
break;
case 2:case 3:case 4:case 5: case 6: case 7: case 8: case 9:
	switch (y)
	{
	case 1:
		if (massive[x - 1][y - 1] == 'K' and (massive[x][y - 1] == '-' or
			massive[x][y - 1] == 'X') and (massive[x - 1][y] == '-' or massive[x - 1][y] == 'X') and
			(massive[x - 2][y - 1] == '-' or massive[x - 2][y - 1] == 'X')) {
			massive[x - 1][y - 1] = 'X';
			Show_Place(massive);
			cout << "Компьютер убил ваш корабль!" << endl;
			count_killed_player_ships++;
		}
		else if (massive[x - 1][y - 1] == 'K' and (massive[x][y - 1] == 'K' or
			massive[x - 1][y] == 'K' or massive[x - 2][y - 1] == 'K')) {
			massive[x - 1][y - 1] = 'X';
			Show_Place(massive);
			cout << "Компьютер ранил ваш корабль!" << endl;
			count_killed_player_ships++;
			if (massive[x][y - 1] == 'K' or massive[x - 2][y - 1] == 'K') {
				int z = x;
				for (; massive[x][y - 1] == 'X' or massive[x][y - 1]
					== 'K'; x--) {
					z = x;
				}
				for (; massive[z][y - 1] == 'K' or massive[z][y - 1]
					== 'X'; z++) {
					massive[z][y - 1] = 'X';
					Show_Place(massive);
					count_killed_player_ships++;
				}
				cout << "Компьютер убил ваш корабль!" << endl;
			}
			else if (massive[x - 1][y] == 'K') {
				for (; massive[x - 1][y] == 'K' or massive[x - 1][y]
					== 'X'; y++) {
					massive[x - 1][y] = 'X';
					Show_Place(massive);
					count_killed_player_ships++;
				}
				cout << "Компьютер убил ваш корабль!" << endl;
			}
		}
		else {
			cout << "Компьютер промахнулся!" << endl << "Теперь ваш ход!" << endl;
				count = -1;
		}
		break;
	case 2:case 3:case 4:case 5: case 6: case 7: case 8: case 9:
		if (massive[x - 1][y - 1] == 'K' and (massive[x][y - 1] == '-' or
			massive[x][y - 1] == 'X') and (massive[x - 1][y] == '-' or massive[x - 1][y] == 'X') and
			(massive[x - 1][y - 2] == '-' or massive[x - 1][y - 2] == 'X') and (massive[x - 2][y - 1] == '-' or
				massive[x - 2][y - 1] == 'X')) {
			massive[x - 1][y - 1] = 'X';
			Show_Place(massive);
			cout << "Компьютер убил ваш корабль!" << endl;
			count_killed_player_ships++;
		}
		else if (massive[x - 1][y - 1] == 'K' and (massive[x][y - 1] == 'K' or
			massive[x - 1][y] == 'K' or massive[x - 1][y - 2] == 'K' or massive[x - 2][y - 1] == 'K')) {
			massive[x - 1][y - 1] = 'X';
			Show_Place(massive);
			cout << "Компьютер ранил ваш корабль!" << endl;
			count_killed_player_ships++;
			if (massive[x][y - 1] == 'K' or massive[x - 2][y - 1] == 'K') {
				int z = x;
				for (; massive[x - 2][y - 1] == 'X' or massive[x - 2][y
					- 1] == 'K'; x--) {
					z = x;
				}
				for (; massive[z - 2][y - 1] == 'K' or massive[z - 2][y
					- 1] == 'X'; z++) {
					massive[z - 2][y - 1] = 'X';
					Show_Place(massive);
					count_killed_player_ships++;
				}
				cout << "Компьютер убил ваш корабль!" << endl;
			}
			else if (massive[x - 1][y] == 'K' or massive[x - 1][y - 2] ==
				'K') {
				int z = y;
				for (; massive[x - 1][y - 2] == 'X' or massive[x -
					1][y] == 'K'; y--) {
					z = y;
				}
				for (; massive[x - 1][z] == 'K'; z++) {
					massive[x - 1][z] = 'X';
					Show_Place(massive);
					count_killed_player_ships++;
				}
				cout << "Компьютер убил ваш корабль!" << endl;
			}
		}
		else {
			cout << "Компьютер промахнулся!" << endl << "Теперь ваш ход!" << endl;
				count = -1;
		}
		break;
	case 10:
		if (massive[x - 1][y - 1] == 'K' and (massive[x][y - 1] == '-' or
			massive[x][y - 1] == 'X') and (massive[x - 1][y] == '-' or massive[x - 1][y] == 'X') and
			(massive[x - 2][y - 1] == '-' or massive[x - 2][y - 1] == 'X')) {
			massive[x - 1][y - 1] = 'X';
			Show_Place(massive);
			cout << "Компьютер убил ваш корабль!" << endl;
			count_killed_player_ships++;
		}
		else if (massive[x - 1][y - 1] == 'K' and (massive[x - 2][y - 1] == 'K'
			or massive[x][y - 1] == 'K' or massive[x - 1][y - 2] == 'K')) {
			massive[x - 1][y - 1] = 'X';
			Show_Place(massive);
			cout << "Компьютер ранил ваш корабль!" << endl;
			count_killed_player_ships++;
			if (massive[x - 2][y - 1] == 'K' or massive[x][y - 1] == 'K') {
				int z = x;
				for (; massive[x][y - 1] == 'K'; x++) {
					z = x;
				}
				for (; massive[z][y - 1] == 'K'; z++) {
					massive[z][y - 1] = 'X';
					Show_Place(massive);
					count_killed_player_ships++;
				}
				cout << "Компьютер убил ваш корабль!" << endl;
			}
		}
		else {
			cout << "Компьютер промахнулся!" << endl << "Теперь ваш ход!" << endl;
				count = -1;
		}
		break;
	default:
		break;
	}
	break;
case 10:
	switch (y)
	{
	case 1:
		if (massive[x - 1][y - 1] == 'K' and (massive[x - 1][y] == '-' or
			massive[x - 1][y] == 'X') and (massive[x - 2][y - 1] == '-' or massive[x - 2][y - 1] == 'X')) {
			massive[x - 1][y - 1] = 'X';
			Show_Place(massive);
			cout << "Компьютер убил ваш корабль!" << endl;
			count_killed_player_ships++;
		}
		else if (massive[x - 1][y - 1] == 'K' and (massive[x - 1][y] == 'K' or
			massive[x - 2][y - 1] == 'K')) {
			massive[x - 1][y - 1] = 'X';
			Show_Place(massive);
			cout << "Компьютер ранил ваш корабль!" << endl;
			count_killed_player_ships++;
			if (massive[x - 1][y] == 'K') {
				for (; massive[x - 1][y] == 'K'; y++) {
					massive[x - 1][y] = 'X';
					Show_Place(massive);
					count_killed_player_ships++;
				}
				cout << "Компьютер убил ваш корабль!" << endl;
			}
			else if (massive[x - 2][y - 1] == 'K') {
				for (; massive[x - 2][y - 1] == 'K'; x--) {
					massive[x - 2][y - 1] = 'X';
					Show_Place(massive);
					cout << "Компьютер ранил ваш корабль!"
						<< endl;
					count_killed_player_ships++;
				}
				cout << "Компьютер убил ваш корабль!" << endl;
			}
		}
		else {
			cout << "Компьютер промахнулся!" << endl << "Теперь ваш ход!" << endl;
				count = -1;
		}
		break;
	case 2:case 3:case 4:case 5: case 6: case 7: case 8: case 9:
		if (massive[x - 1][y - 1] == 'K' and (massive[x - 1][y - 2] == '-' or
			massive[x - 1][y - 2] == 'X') and (massive[x - 1][y] == '-' or massive[x - 1][y] == 'X') and
			(massive[x - 2][y - 2] == '-' or massive[x - 2][y - 2] == 'X')) {
			massive[x - 1][y - 1] = 'X';
			Show_Place(massive);
			cout << "Компьютер убил ваш корабль!" << endl;
			count_killed_player_ships++;
		}
		else if (massive[x - 1][y - 1] == 'K' and (massive[x - 1][y - 2] == 'K'
			or massive[x - 1][y] == 'K' or massive[x - 2][y - 2] == 'K')) {
			massive[x - 1][y - 1] = 'X';
			Show_Place(massive);
			cout << "Компьютер ранил ваш корабль!" << endl;
			count_killed_player_ships++;
			if (massive[x - 1][y - 2] == 'K' or massive[x - 1][y] == 'K') {
				int z = y;
				for (; massive[x - 1][y] == 'K' or massive[x - 1][y]
					== 'X'; y--) {
					z = y;
				}
				for (; massive[x - 1][z] == 'K'; z++) {
					massive[x - 1][y] = 'X';
					Show_Place(massive);
					count_killed_player_ships++;
				}
				cout << "Компьютер убил ваш корабль!" << endl;
			}
			else if (massive[x - 2][y - 2] == 'K') {
				int z = x;
				for (; massive[x - 2][y - 2] == 'K' or massive[x - 2][y
					- 2] == 'X'; x--) {
					z = x;
				}
				for (; massive[z - 2][y - 2] == 'K'; z++) {
					massive[z - 2][y - 2] = 'X';
					Show_Place(massive);
					cout << "Компьютер ранил ваш корабль!"
						<< endl;
					count_killed_player_ships++;
				}
				cout << "Компьютер убил ваш корабль!" << endl;
			}
		}
		else {
			cout << "Компьютер промахнулся!" << endl << "Теперь ваш ход!" << endl;
				count = -1;
		}
		break;
	case 10:
		if (massive[x - 1][y - 1] == 'K' and (massive[x - 2][y - 1] == '-' or
			massive[x - 2][y - 1] == 'X') and (massive[x - 1][y - 2] == '-' or massive[x - 1][y - 2] == 'X')) {
			massive[x - 1][y - 1] = 'X';
			Show_Place(massive);
			cout << "Компьютер убил ваш корабль!" << endl;
			count_killed_player_ships++;
		}
		else if (massive[x - 1][y - 1] == 'K' and (massive[x - 2][y - 1] == 'K'
			or massive[x - 1][y - 2] == 'K')) {
			massive[x - 1][y - 1] = 'X';
			Show_Place(massive);
			cout << "Компьютер ранил ваш корабль!" << endl;
			count_killed_player_ships++;
			if (massive[x - 2][y - 1] == 'K') {
				int z = x;
				for (; massive[x - 2][y - 1] == 'K' or massive[x - 2][y
					- 1] == 'X'; x--) {
					z = x;
				}
				for (; massive[z - 2][y - 1] == 'K'; z++) {
					massive[z - 2][y - 1] = 'X';
					Show_Place(massive);
					count_killed_player_ships++;
				}
				cout << "Компьютер убил ваш корабль!" << endl;
			}
		}
		else {
			cout << "Компьютер промахнулся!" << endl << "Теперь ваш ход!" << endl;
				count = -1;
		}
		break;
	default:
		break;
}
break;
default:
	break;
}
} while (count != -1);
return count_killed_player_ships;
}