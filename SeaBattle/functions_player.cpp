#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include "windows.h"
using namespace std;
void Show_Place(char massive[10][10]) {
	int i, j, numb = 1;;
	cout << " 1 2 3 4 5 6 7 8 9 10" << endl;
	for (i = 0; i < 10; i++) {
		if (numb != 10) cout << numb << " | ";
		else cout << numb << "| ";
		for (j = 0; j < 10; j++) {
			cout << massive[i][j] << " | ";
		}
		numb++;
		cout << endl;
	}
}
void Menu(int counter_0, int counter_1, int counter_2, int counter_3) {
	cout << "-------------------------------------------------------" <<
		endl;
	cout << "Какой тип корабля вы хотите поставить?" << endl;
	cout << "Однопалубный - 1 (Осталось: " << counter_0 << ");" << endl;
	cout << "Двухпалубный - 2 (Осталось: " << counter_1 << ");" << endl;
	cout << "Трёхпалубный - 3 (Осталось: " << counter_2 << ");" << endl;
	cout << "Четырёхпалубный - 4 (Осталось: " << counter_3 << ");" << endl;
	cout << "-------------------------------------------------------" <<
		endl;
}
int Check_And_Move(char massive[10][10], int x, int count_ships, int
	check_numb) {
	int string_i, column_j;
	bool flag = true;
	cout << "Выберите строку:" << endl;
	cin >> string_i;
	string_i -= 1;
	cout << "Введите начальный столбик:" << endl;
	cin >> column_j;
	column_j -= 1;
	int count_1 = 0;
	int count = 0;
	if (string_i == 0) {
		for (int i = string_i; i < string_i + 2 + check_numb; i++) {
			if (column_j == 0) {
				for (int j = column_j; j < column_j + 2 + x; j++) {
					if (massive[i][j] == '-') count++;
					else {
						count = 0;
						break;
					}
				}
				if (count == 0) break;
			}
			if (column_j > 0 and column_j < 9) {
				if (x == 0 or ((x == 1 and column_j < 9) or (x == 2 and
					column_j < 9) or (x == 3 and column_j < 8))) {
					for (int j = column_j - 1; j < column_j + 1 + x;
						j++) {
						if (massive[i][j] == '-') count++;
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
					if (massive[i][j] == '-') count++;
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
		for (int i = string_i - 1; i < string_i + check_numb; i++) {
			if (column_j == 0) {
				for (int j = column_j; j < column_j + 2 + x; j++) {
					if (massive[i][j] == '-') count++;
					else {
						count = 0;
						break;
					}
				}
				if (count == 0) break;
			}
			if (column_j > 0 and column_j < 9) {
				if (x == 0 or ((x == 1 and column_j < 9) or (x == 2 and
					column_j < 9) or (x == 3 and column_j < 8))) {
					for (int j = column_j - 1; j < column_j + 1 + x;
						j++) {
						if (massive[i][j] == '-') count++;
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
					if (massive[i][j] == '-') count++;
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
			cout << "Введены неверные координаты!" << endl;
		}
		else {
			for (int i = string_i - 1; i < string_i + 1; i++) {
				if (column_j == 0) {
					for (int j = column_j; j < column_j + 2 + x; j++)
					{
						if (massive[i][j] == '-') count++;
						else {
							count = 0;
							break;
						}
					}
					if (count == 0) break;
				}
				if (column_j > 0 and column_j < 9) {
					if (x == 0 or ((x == 1 and column_j < 9) or (x ==
						2 and column_j < 9) or (x == 3 and column_j < 8))) {
						for (int j = column_j - 1; j < column_j + 1
							+ x; j++) {
							if (massive[i][j] == '-') count++;
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
					for (int j = column_j - 1; j < column_j + 1; j++)
					{
						if (massive[i][j] == '-') count++;
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
					massive[string_i][column_j] = 'K';
					count_2 = -1;
				}
				if (x == 1) {
					for (int j = column_j; j < column_j + 2; j++) {
						massive[string_i][j] = 'K';
					}
					count_2 = -1;
				}
				if (x == 2) {
					for (int j = column_j; j < column_j + 3; j++) {
						massive[string_i][j] = 'K';
					}
					count_2 = -1;
				}
				if (x == 3) {
					for (int j = column_j; j < column_j + 4; j++) {
						massive[string_i][j] = 'K';
					}
					count_2 = -1;
				}
			}
			else {
				if (check_numb == 1) {
					for (int i = string_i; i < string_i + 2; i++) {
						massive[i][column_j] = 'K';
					}
					count_2 = -1;
				}
				if (check_numb == 2) {
					for (int i = string_i; i < string_i + 3; i++) {
						massive[i][column_j] = 'K';
					}
					count_2 = -1;
				}
				if (check_numb == 3) {
					for (int i = string_i; i < string_i + 4; i++) {
						massive[i][column_j] = 'K';
					}
					count_2 = -1;
				}
			}
		} while (count_2 != -1);
	}
	if (count_2 == -1) {
		count_ships--;
		Show_Place(massive);
		if (count_ships == 0) cout << "У вас кончился данный тип кораблей!"
			<< endl;
	}
	else {
		cout << "Введены неверные координаты!" << endl;
		Sleep(1000);
		system("cls");
		Show_Place(massive);
	}
	return count_ships;
}
char Player_Move(char(*massive)[10]) {
	int count = 0;
	int one = 4, two = 3, three = 2, four = 1, number;
	char ch;
	do {
		Menu(one, two, three, four);
		cin >> number;
		if (number == 1) {
			if (one != 0) {
				one = Check_And_Move(massive, 0, one, 0);
			}
			else {
				cout << "Вы больше не можете выбирать эти корабли!" <<
					endl << endl;
				continue;
			}
		}
		if (number == 2) {
			if (two != 0) {
				cout << "Вы хотите поставить его вертикально или горизонтально ? Вертикально - v / V, горизонтально - g / G" << endl;
					cin >> ch;
				if (ch == 'v' or ch == 'V') {
					two = Check_And_Move(massive, 0, two, 1);
				}
				else if (ch == 'g' or ch == 'G') {
					two = Check_And_Move(massive, 1, two, 0);
				}
			}
			else {
				cout << "Вы больше не можете выбирать эти корабли!" <<
					endl << endl;
				continue;
			}
		}
		if (number == 3) {
			if (three != 0) {
				cout << "Вы хотите поставить его вертикально или горизонтально ? Вертикально - v / V, горизонтально - g / G" << endl;
					cin >> ch;
				if (ch == 'v' or ch == 'V') {
					three = Check_And_Move(massive, 0, three, 2);
				}
				else if (ch == 'g' or ch == 'G') {
					three = Check_And_Move(massive, 2, three, 0);
				}
			}
			else {
				cout << "Вы больше не можете выбирать эти корабли!" <<
					endl << endl;
				continue;
			}
		}
		if (number == 4) {
			if (four != 0) {
				cout << "Вы хотите поставить его вертикально или горизонтально ? Вертикально - v / V, горизонтально - g / G" << endl;
					cin >> ch;
				if (ch == 'v' or ch == 'V') {
					four = Check_And_Move(massive, 0, four, 3);
				}
				else if (ch == 'g' or ch == 'G') {
					four = Check_And_Move(massive, 3, four, 0);
				}
			}
			else {
				cout << "Вы больше не можете выбирать эти корабли!" <<
					endl << endl;
				continue;
			}
		}
		if (number == 0) count++;
		if (one == 0 and two == 0 and three == 0 and four == 0) count++;
	} while (count == 0);
	cout << "Все ваши корабли кончились. Теперь свои корабли расставляет компьютер!\n";
		return 0;
}
int Player_Shoot(char(*massive_virt)[10], int count_killed_virt_ships, char
(*place_with_x)[10]) {
	int x = 0, y = 0, count = 0;
	do {
		cout << "Вот ваше вспомогательное поле:" << endl;
		Show_Place(place_with_x);
		cout << "Введите координаты(сначала строчка, потом столбец):" <<
			endl;
		cin >> x >> y;
		switch (x)
		{
		case 1:
			switch (y)
			{
			case 1:
				if (massive_virt[x - 1][y - 1] == 'K' and
					(massive_virt[x][y - 1] == '-' or massive_virt[x][y - 1] == 'X') and
					(massive_virt[x - 1][y] == '-' or massive_virt[x - 1][y] == 'X')) {
					place_with_x[x - 1][y - 1] = 'X';
					massive_virt[x - 1][y - 1] = 'X';
					Show_Place(place_with_x);
					cout << "Убил!" << endl;
					count_killed_virt_ships++;
				}
				else if (massive_virt[x - 1][y - 1] == 'S' and
					(massive_virt[x][y - 1] == 'S' or massive_virt[x - 1][y] == 'S')) {
					place_with_x[x - 1][y - 1] = 'X';
					massive_virt[x - 1][y - 1] = 'X';
					Show_Place(place_with_x);
					cout << "Ранил!" << endl;
					count_killed_virt_ships++;
				}
				else {
					cout << "Промахнулся!" << endl;
					place_with_x[x - 1][y - 1] = 'P';
					count = -1;
				}
				break;
			case 2:case 3:case 4:case 5: case 6: case 7: case 8: case 9:
				if (massive_virt[x - 1][y - 1] == 'S' and
					(massive_virt[x][y - 1] == '-' or massive_virt[x][y - 1] == 'X') and
					(massive_virt[x - 1][y] == '-' or massive_virt[x - 1][y] == 'X') and
					(massive_virt[x - 1][y - 2] == '-' or massive_virt[x - 1][y - 2] == 'X')) {
					place_with_x[x - 1][y - 1] = 'X';
					massive_virt[x - 1][y - 1] = 'X';
					Show_Place(place_with_x);
					cout << "Убил!" << endl;
					count_killed_virt_ships++;
				}
				else if (massive_virt[x - 1][y - 1] == 'S' and
					(massive_virt[x][y - 1] == 'S' or massive_virt[x - 1][y] == 'S' or
						massive_virt[x - 1][y - 2] == 'S')) {
					place_with_x[x - 1][y - 1] = 'X';
					massive_virt[x - 1][y - 1] = 'X';
					Show_Place(place_with_x);
					cout << "Ранил!" << endl;
					count_killed_virt_ships++;
				}
				else {
					cout << "Промахнулся!" << endl;
					place_with_x[x - 1][y - 1] = 'P';
					count = -1;
				}
				break;
			case 10:
				if (massive_virt[x - 1][y - 1] == 'S' and
					(massive_virt[x][y - 1] == '-' or massive_virt[x][y - 1] == 'X') and
					(massive_virt[x - 1][y - 2] == '-' or massive_virt[x - 1][y - 2] == 'X')) {
					place_with_x[x - 1][y - 1] = 'X';
					massive_virt[x - 1][y - 1] = 'X';
					Show_Place(place_with_x);
					cout << "Убил!" << endl;
					count_killed_virt_ships++;
				}
				else if (massive_virt[x - 1][y - 1] == 'S' and
					(massive_virt[x][y - 1] == 'S' or massive_virt[x - 1][y - 1] == 'S')) {
					place_with_x[x - 1][y - 1] = 'X';
					massive_virt[x - 1][y - 1] = 'X';
					Show_Place(place_with_x);
					cout << "Ранил!" << endl;
					count_killed_virt_ships++;
				}
				else {
					cout << "Промахнулся!" << endl;
					place_with_x[x - 1][y - 1] = 'P';
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
				if (massive_virt[x - 1][y - 1] == 'S' and
					(massive_virt[x][y - 1] == '-' or massive_virt[x][y - 1] == 'X') and
					(massive_virt[x - 1][y] == '-' or massive_virt[x - 1][y] == 'X') and
					(massive_virt[x - 2][y - 1] == '-' or massive_virt[x - 2][y - 1] == 'X')) {
					place_with_x[x - 1][y - 1] = 'X';
					massive_virt[x - 1][y - 1] = 'X';
					Show_Place(place_with_x);
					cout << "Убил!" << endl;
					count_killed_virt_ships++;
				}
				else if (massive_virt[x - 1][y - 1] == 'S' and
					(massive_virt[x][y - 1] == 'S' or massive_virt[x - 1][y] == 'S' or
						massive_virt[x - 2][y - 1] == 'S')) {
					place_with_x[x - 1][y - 1] = 'X';
					massive_virt[x - 1][y - 1] = 'X';
					Show_Place(place_with_x);
					cout << "Ранил!" << endl;
					count_killed_virt_ships++;
				}
				else {
					cout << "Промахнулся!" << endl;
					place_with_x[x - 1][y - 1] = 'P';
					count = -1;
				}
				break;
			case 2:case 3:case 4:case 5: case 6: case 7: case 8: case 9:
				if (massive_virt[x - 1][y - 1] == 'S' and
					(massive_virt[x][y - 1] == '-' or massive_virt[x][y - 1] == 'X') and
					(massive_virt[x - 1][y] == '-' or massive_virt[x - 1][y] == 'X') and
					(massive_virt[x - 1][y - 2] == '-' or massive_virt[x - 1][y - 2] == 'X') and
					(massive_virt[x - 2][y - 1] == '-' or massive_virt[x - 2][y - 1] == 'X')) {
					place_with_x[x - 1][y - 1] = 'X';
					massive_virt[x - 1][y - 1] = 'X';
					Show_Place(place_with_x);
					cout << "Убил!" << endl;
					count_killed_virt_ships++;
				}
				else if (massive_virt[x - 1][y - 1] == 'S' and
					(massive_virt[x][y - 1] == 'S' or massive_virt[x - 1][y] == 'S' or
						massive_virt[x - 1][y - 2] == 'S' or massive_virt[x - 2][y - 1] == 'S')) {
					place_with_x[x - 1][y - 1] = 'X';
					massive_virt[x - 1][y - 1] = 'X';
					Show_Place(place_with_x);
					cout << "Ранил!" << endl;
					count_killed_virt_ships++;
				}
				else {
					cout << "Промахнулся!" << endl;
					place_with_x[x - 1][y - 1] = 'P';
					count = -1;
				}
				break;
			case 10:
				if (massive_virt[x - 1][y - 1] == 'S' and
					(massive_virt[x][y - 1] == '-' or massive_virt[x][y - 1] == 'X') and
					(massive_virt[x - 1][y - 2] == '-' or massive_virt[x - 1][y - 2] == 'X') and
					(massive_virt[x - 2][y - 1] == '-' or massive_virt[x - 2][y - 1] == 'X')) {
					place_with_x[x - 1][y - 1] = 'X';
					massive_virt[x - 1][y - 1] = 'X';
					Show_Place(place_with_x);
					cout << "Убил!" << endl;
					count_killed_virt_ships++;
				}
				else if (massive_virt[x - 1][y - 1] == 'S' and
					(massive_virt[x - 2][y - 1] == 'S' or massive_virt[x][y - 1] == 'S' or
						massive_virt[x - 1][y - 2] == 'S')) {
					place_with_x[x - 1][y - 1] = 'X';
					massive_virt[x - 1][y - 1] = 'X';
					Show_Place(place_with_x);
					cout << "Ранил!" << endl;
					count_killed_virt_ships++;
				}
				else {
					cout << "Промахнулся!" << endl;
					place_with_x[x - 1][y - 1] = 'P';
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
				if (massive_virt[x - 1][y - 1] == 'S' and
					(massive_virt[x - 1][y] == '-' or massive_virt[x - 1][y] == 'X') and
					(massive_virt[x - 2][y - 1] == '-' or massive_virt[x - 2][y - 1] == 'X')) {
					place_with_x[x - 1][y - 1] = 'X';
					massive_virt[x - 1][y - 1] = 'X';
					Show_Place(place_with_x);
					cout << "Убил!" << endl;
					count_killed_virt_ships++;
				}
				else if (massive_virt[x - 1][y - 1] == 'S' and
					(massive_virt[x - 1][y] == 'S' or massive_virt[x - 2][y - 1] == 'S')) {
					place_with_x[x - 1][y - 1] = 'X';
					massive_virt[x - 1][y - 1] = 'X';
					Show_Place(place_with_x);
					cout << "Ранил!" << endl;
					count_killed_virt_ships++;
				}
				else {
					cout << "Промахнулся!" << endl;
					place_with_x[x - 1][y - 1] = 'P';
					count = -1;
				}
				break;
			case 2:case 3:case 4:case 5: case 6: case 7: case 8: case 9:
				if (massive_virt[x - 1][y - 1] == 'S' and
					(massive_virt[x - 1][y - 2] == '-' or massive_virt[x - 1][y - 2] == 'X') and
					(massive_virt[x - 1][y] == '-' or massive_virt[x - 1][y] == 'X') and
					(massive_virt[x - 2][y - 2] == '-' or massive_virt[x - 2][y - 2] == 'X')) {
					place_with_x[x - 1][y - 1] = 'X';
					massive_virt[x - 1][y - 1] = 'X';
					Show_Place(place_with_x);
					cout << "Убил!" << endl;
					count_killed_virt_ships++;
				}
				else if (massive_virt[x - 1][y - 1] == 'S' and
					(massive_virt[x - 1][y - 2] == 'S' or massive_virt[x - 1][y] == 'S' or
						massive_virt[x - 2][y - 2] == 'S')) {
					place_with_x[x - 1][y - 1] = 'X';
					massive_virt[x - 1][y - 1] = 'X';
					Show_Place(place_with_x);
					cout << "Ранил!" << endl;
					count_killed_virt_ships++;
				}
				else {
					cout << "Промахнулся!" << endl;
					place_with_x[x - 1][y - 1] = 'P';
					count = -1;
				}
				break;
			case 10:
				if (massive_virt[x - 1][y - 1] == 'S' and
					(massive_virt[x - 2][y - 1] == '-' or massive_virt[x - 2][y - 1] == 'X') and
					(massive_virt[x - 1][y - 2] == '-' or massive_virt[x - 1][y - 2] == 'X')) {
					place_with_x[x - 1][y - 1] = 'X';
					massive_virt[x - 1][y - 1] = 'X';
					Show_Place(place_with_x);
					cout << "Убил!" << endl;
					count_killed_virt_ships++;
				}
				else if (massive_virt[x - 1][y - 1] == 'S' and
					(massive_virt[x - 2][y - 1] == 'S' or massive_virt[x - 1][y - 2] == 'S')) {
					place_with_x[x - 1][y - 1] = 'X';
					massive_virt[x - 1][y - 1] = 'X';
					Show_Place(place_with_x);
					cout << "Ранил!" << endl;
					count_killed_virt_ships++;
				}
				else {
					cout << "Промахнулся!" << endl;
					place_with_x[x - 1][y - 1] = 'P';
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
return count_killed_virt_ships;
}