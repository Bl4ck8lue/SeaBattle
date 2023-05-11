#pragma once
void Show_Place(char massive[10][10]);
void Menu(int, int, int, int);
int Check_And_Move(char massive[10][10], int x, int count_ships, int
	check_numb);
int Player_Shoot(char(*)[10], int count_killed_virt_ships, char(*)[10]);
char Player_Move(char(*)[10]);
