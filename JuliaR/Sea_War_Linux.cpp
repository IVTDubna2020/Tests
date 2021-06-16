#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdbool>

using std::cout; 
using std::cin; 
using std::endl;

void chooseGamemode(int&);
void gameplay(int);
void fieldsCreation();                                 
void fieldsOutput(int**, int**);                                         
void shipPlacement(int**, int**);                                                                  
void shipPlacementRandom(int**);                                        
void shipDestroying(int**, int, int);      
void playerTurn(int**, int**, int &);
void botTurn(int**, int**, int&, bool&, int&, int&, int&);                           
void selectiOfShipPlacement(int**, int**);                                                                                
bool checkingPossibilityToSetFirstDeck(int**, int, int, int, int);                   
bool possibilityToSetAtThatDeck(int**, int, int);                       
bool checkingPossibilityToSetNextDeck(int**, int, int, int, int, int);                    
bool checkingStatusOfShip(int**, int, int);
void fieldsOutputAndClearConsole(int**, int**);

int** Field1, ** Field2;

const int sizeOfField = 10;

int main()
{
	system("clear");
	srand(time(NULL));
	setlocale(LC_ALL, "rus");

	int gameMode;
	fieldsCreation();
	chooseGamemode(gameMode);
	gameplay(gameMode);
	return 0;
}

void chooseGamemode(int& gameMode)
{
	do {
		cout << endl << "Выберите режим игры (1 - мультиплеер, 2 - игра с ботом, 3 - игра двух ботов): ";
		cin >> gameMode;
		if ((gameMode < 1) || (gameMode > 3)) cout << "Некорректный ввод" << endl << endl;
	} while ((gameMode < 1) || (gameMode > 3));
}

void selectiOfShipPlacement(int** Field1, int** Field2)
{
	int placementKey;
	do {
		cout << endl << "Введите ключ расстановки (автоматическая (1), ручная (2)): ";
		cin >> placementKey;
		if ((placementKey < 1) || (placementKey > 2)) cout << "Ошибка: Некорректный ввод" << endl;
	} while ((placementKey < 1) || (placementKey > 2));
	if (placementKey == 1)
	{
		shipPlacementRandom(Field1);
		fieldsOutput(Field1, Field2);
	}
	else if (placementKey == 2) shipPlacement(Field1, Field2);
}

void fieldsOutputAndClearConsole(int** Field1, int** Field2)
{
	fieldsOutput(Field1, Field2);
	system ("sleep 2");
	system("clear");
}

void gameplay(int gameMode)
{
	int hits1 = 0, hits2 = 0, hitDirection1;
	bool finishingMode1 = false;
	int fy1, fx1;

	int hitDirection2;
	bool finishingMode2 = false;
	int fy2, fx2;

	(gameMode == 3)? shipPlacementRandom(Field1): selectiOfShipPlacement(Field1, Field2);
	(gameMode == 1)? selectiOfShipPlacement(Field2, Field1): shipPlacementRandom(Field2);

	if (gameMode == 3)
	{
		fieldsOutput(Field1, Field2);
		system("sleep 2");
		fieldsOutput(Field2, Field1);
		system("sleep 2");
	}

	do {
		(gameMode == 3)? botTurn(Field1, Field2, hits1, finishingMode1, fy1, fx1, hitDirection1): playerTurn(Field1, Field2, hits1);
		if (hits1 == 20) break;
		(gameMode == 1)? playerTurn(Field2, Field1, hits2): botTurn(Field2, Field1, hits2, finishingMode2, fy2, fx2, hitDirection2);
	} while ((hits1 != 20) && (hits2 != 20));
	if (hits1 == 20)
	{
		fieldsOutput(Field1, Field2);
		cout << "Победил игрок 1" << endl;
	}
	else
	{
		fieldsOutput(Field2, Field1);
		cout << "Победил игрок 2" << endl;
	}
}

void fieldsCreation()
{
	int i, j;
	Field1 = new int *[sizeOfField];
	Field2 = new int *[sizeOfField];
	for (i = 0; i < sizeOfField; i++)
	{
		Field1[i] = new int [sizeOfField];
		Field2[i] = new int [sizeOfField];
		for (j = 0; j < sizeOfField; j++)
		{
			Field1[i][j] = 0;
			Field2[i][j] = 0;
		}
	}
}

void shipPlacement(int** Field1, int** Field2)
{
	int shipSize, countOfDeck = 0, shipDirection, y, x, fy, fx;
	int count[4] = {};
	fieldsOutput(Field1, Field2);
	do {
		fieldsOutput(Field1, Field2);
		do {
			cout << endl << "Возможные размеры кораблей: " << endl << "1 - однопалубный" << endl << "2 - двухпалубных" << endl << "n3 - трехпалубный" << endl << "4 - четырехпалубный" << endl << "Введите размер корабля : ";
			cin >> shipSize;
			if ((shipSize < 1) || (shipSize > 4)) cout << endl << "Недопустимый размер корабля!" << endl;
			else if (count[shipSize - 1] == 5 - shipSize) cout << endl << "Вы не можете больше разместить "<< shipSize << "-палубные корабли!" << endl;
		} while ((shipSize < 1) || (shipSize > 4) || (count[shipSize - 1] == 5 - shipSize));
		do {
			cout << endl << "Виды ориентации кораблей:" << endl << "1 - вертикальный" << endl << "2 - горизонтальный" << endl << "Введите ориентацию корабля: ";
			cin >> shipDirection;
			if ((shipDirection < 1) || (shipDirection > 2)) cout << endl << "Недопустимая ориентация корабля!" << endl;
		} while ((shipDirection < 1) || (shipDirection > 2));

		do {
			if (countOfDeck == 0)
			{
				do {
					cout << "Введите координаты ячейки, в которую хотите поместить палубу (x/y): ";
					cin >> fx >> fy;
					fy--; fx--;
					if ((fy > 9) || (fx > 9) || (fy < 0) || (fx < 0)) cout << endl << "Некорректный ввод" << endl;
					else if (checkingPossibilityToSetFirstDeck(Field1, fy, fx, shipDirection, shipSize) == false) cout << endl << "Вы не можете разместить здесь корабль" << endl;
				} while (((fy > 9) || (fx > 9) || (fy < 0) || (fx < 0)) || checkingPossibilityToSetFirstDeck(Field1, fy, fx, shipDirection, shipSize) == false);
			}
			else
			{
				do {
					cout << "Введите координаты ячейки, в которую хотите поместить палубу (x/y): ";
					cin >> x >> y;
					y--; x--;
					if ((y > 9) || (x > 9) || (y < 0) || (x < 0)) cout << endl << "Некорректный ввод" << endl;
					if (checkingPossibilityToSetNextDeck(Field1, y, x, shipDirection, fy, fx) == false) cout << endl << "Вы не можете поместить сюда палубу" << endl;
				} while (((y > 9) || (x > 9) || (y < 0) || (x < 0)) || (checkingPossibilityToSetNextDeck(Field1, y, x, shipDirection, fy, fx) == false));
			}
			if (countOfDeck == 0) Field1[fy][fx] = 1;
			else Field1[y][x] = 1;
			countOfDeck++;
		} while (countOfDeck != shipSize);
		count[shipSize - 1]++;
		countOfDeck = 0;
	} while ((count[3] < 1) || (count[2] < 2) || (count[1] < 3) || (count[0] < 4));
}

bool checkingPossibilityToSetFirstDeck(int** Field, int y, int x, int shipDirection, int shipSize)
{
	int i = y, j = x, place = 0;
	switch (shipDirection)
	{
	case 1:
		if (possibilityToSetAtThatDeck(Field, i, j) == true)
		{
			while ((i > 0) && (possibilityToSetAtThatDeck(Field, i - 1, j) == true)) i--;
			while ((i < sizeOfField - 1) && (possibilityToSetAtThatDeck(Field, i + 1, j) == true))
			{
				place++;
				i++;
			}
			if (possibilityToSetAtThatDeck(Field, i, j) == true) place++;
		}
		break;
	case 2:
		if (possibilityToSetAtThatDeck(Field, i, j) == true)
		{
			while ((j > 0) && (possibilityToSetAtThatDeck(Field, i, j - 1) == true)) j--;
			while ((j < sizeOfField - 1) && (possibilityToSetAtThatDeck(Field, i, j + 1) == true))
			{
				place++;
				j++;
			}
			if (possibilityToSetAtThatDeck(Field, i, j) == true) place++;
		}
		break;
	}
	if (place >= shipSize) return true;
	else return false;
}

bool possibilityToSetAtThatDeck(int** Field, int y, int x)
{
	bool top, topRight, right, downRight, down, downLeft, left, topLeft, centre, total;
	top = topRight = right = downRight = down = downLeft = left = topLeft = centre = false;

	if (Field[y][x] == 0) centre = true;

	if (y == 0) top = true;
	else if (Field[y - 1][x] == 0) top = true;

	if ((y == 0) || (x == sizeOfField - 1)) topRight = true;
	else if (Field[y - 1][x + 1] == 0) topRight = true;

	if (x == sizeOfField - 1) right = true;
	else if (Field[y][x + 1] == 0) right = true;

	if ((y == sizeOfField - 1) || (x == sizeOfField - 1)) downRight = true;
	else if (Field[y + 1][x + 1] == 0) downRight = true;

	if (y == sizeOfField - 1) down = true;
	else if (Field[y + 1][x] == 0) down = true;

	if ((y == sizeOfField - 1) || (x == 0)) downLeft = true;
	else if (Field[y + 1][x - 1] == 0) downLeft = true;

	if (x == 0) left = true;
	else if (Field[y][x - 1] == 0) left = true;

	if ((y == 0) || (x == 0)) topLeft = true;
	else if (Field[y - 1][x - 1] == 0) topLeft = true;

	total = top && topRight && right && downRight && down && downLeft && left && topLeft && centre;
	return total;
}

bool checkingPossibilityToSetNextDeck(int** Field, int y, int x, int shipDirection, int fy, int fx)
{
	int sourceTop = fy, sourceDown = fy;
	int sourceRight = fx, checkLeft = fx;
	bool frontLeft, front, frontRight;
	frontLeft = front = frontRight = false;
	switch (shipDirection)
	{
	case 1:
		if (x != fx) return false;
		if (Field[y][x] == 1) return false;

		while ((sourceTop != 0) && (Field[sourceTop][x] != 0)) sourceTop--;
		while ((sourceDown != sizeOfField - 1) && (Field[sourceDown][x] != 0)) sourceDown++;
		if ((y != sourceTop) && (y != sourceDown)) return false;
		else if (y == sourceTop)
		{
			if ((y == 0) || (x == 0)) frontLeft = true;
			else if (Field[y - 1][x - 1] == 0) frontLeft = true;

			if (y == 0) front = true;
			else if (Field[y - 1][x] == 0) front = true;

			if ((y == 0) || (x == sizeOfField - 1)) frontRight = true;
			else if (Field[y - 1][x + 1] == 0) frontRight = true;

			if ((frontLeft && front && frontRight) == true) return true;
			else return false;
		}
		else if (y == sourceDown)
		{
			if ((y == sizeOfField - 1) || (x == 0)) frontLeft = true;
			else if (Field[y + 1][x - 1] == 0) frontLeft = true;

			if (y == sizeOfField - 1) front = true;
			else if (Field[y + 1][x] == 0) front = true;

			if ((y == sizeOfField - 1) || (x == sizeOfField - 1)) frontRight = true;
			else if (Field[y + 1][x + 1] == 0) frontRight = true;

			if ((frontLeft && front && frontRight) == true) return true;
			else return false;
		}
		break;
	case 2:
		if (y != fy) return false;
		if (Field[y][x] == 1) return false;

		while ((checkLeft != 0) && (Field[y][checkLeft] != 0)) checkLeft--;
		while ((sourceRight != sizeOfField - 1) && (Field[y][sourceRight] != 0)) sourceRight++;
		if ((x != checkLeft) && (x != sourceRight)) return false;
		else if (x == checkLeft)
		{
			if ((y == 0) || (x == 0)) frontRight = true;
			else if (Field[y - 1][x - 1] == 0) frontRight = true;

			if (x == 0) front = true;
			else if (Field[y][x - 1] == 0) front = true;

			if ((y == sizeOfField - 1) || (x == 0)) frontLeft = true;
			else if (Field[y + 1][x - 1] == 0) frontLeft = true;

			if ((frontLeft && front && frontRight) == true) return true;
			else return false;
		}
		else if (x == sourceRight)
		{
			if ((y == 0) || (x == sizeOfField - 1)) frontRight = true;
			else if (Field[y - 1][x + 1] == 0) frontRight = true;

			if (x == sizeOfField - 1) front = true;
			else if (Field[y][x + 1] == 0) front = true;

			if ((y == sizeOfField - 1) || (x == sizeOfField - 1)) frontLeft = true;
			else if (Field[y + 1][x + 1] == 0) frontLeft = true;

			if ((frontLeft && front && frontRight) == true) return true;
			else return false;
		}
		break;
	}
}

void shipPlacementRandom(int** Field1)
{
	int shipSize, countOfDeck = 0, shipDirection, y, x, fy, fx;
	int count[4] = {};
	do {
		do shipSize = 1 + rand() % 4; while (count[shipSize - 1] == 5 - shipSize);
		shipDirection = rand() % 2 + 1;
		do {
			if (countOfDeck == 0)
			{
				do {
					fy = rand() % 10;
					fx = rand() % 10;
				} while (checkingPossibilityToSetFirstDeck(Field1, fy, fx, shipDirection, shipSize) == false);
				Field1[fy][fx] = 1;
			}
			else
			{
				do {
					y = rand() % 10;
					x = rand() % 10;
				} while (checkingPossibilityToSetNextDeck(Field1, y, x, shipDirection, fy, fx) == false);
				Field1[y][x] = 1;
			}
			countOfDeck++;
		} while (countOfDeck != shipSize);
		count[shipSize - 1]++;
		countOfDeck = 0;
	} while ((count[3] < 1) || (count[2] < 2) || (count[1] < 3) || (count[0] < 4));
}

void fieldsOutput(int** arr1, int** arr2)
{
	int i, j;
	for (i = 0; i < sizeOfField * 2 + 1; i++)
	{
		if (i == 0)
		{
			for (j = 0; j < sizeOfField; j++)
			{
				(j == 0)? cout << "   " << j + 1: cout << "  " << j + 1;
			}
			printf("\t\t  ");
			for (j = 0; j < sizeOfField; j++)
			{
				(j == 0)? cout << ' ' << j + 1: cout << "  " << j + 1;
			}
			cout << endl;
		}
		for (j = 0; j < sizeOfField; j++)
		{
			if ((i % 2 == 0) && (j == 0)) cout << "   ---";
			else if (i % 2 == 0) cout << "---";
			else if ((i % 2 == 1) && (j == 0))
			{
				if (i / 2 != 9) cout << " " << i / 2 + 1;
				else cout << i / 2 + 1;
				if (arr1[i / 2][j] == 0) cout << " |  ";
				else if (arr1[i / 2][j] == 1) cout << " |O ";
				else if (arr1[i / 2][j] == 2) cout << " |X ";
				else if (arr1[i / 2][j] == 3) cout << " |* ";
			}
			else
			{
				if (arr1[i / 2][j] == 0) cout << "|  ";
				else if (arr1[i / 2][j] == 1) cout << "|O ";
				else if (arr1[i / 2][j] == 2) cout <<"|X ";
				else if (arr1[i / 2][j] == 3) cout << "|* ";
			}
		}
		((i == 0) || (i == sizeOfField * 2))? cout << "- \t  \t": cout <<"| \t  \t";
		for (j = 0; j < sizeOfField; j++)
		{
			if ((i % 2 == 0) && (j == 0)) cout << "   ---";
			else if (i % 2 == 0) cout << "---";
			else if ((i % 2 == 1) && (j == 0))
			{
				if (i / 2 != 9) cout << " " << i / 2 + 1;
				else cout <<  i / 2 + 1;
				if (arr2[i / 2][j] == 0) cout << " |  ";
				else if (arr2[i / 2][j] == 1) cout << " |  ";
				else if (arr2[i / 2][j] == 2) cout << " |X ";
				else cout << " |* ";
			}
			else
			{
				if (arr2[i / 2][j] == 0) cout << "|  ";
				else if (arr2[i / 2][j] == 1) cout << "|  ";
				else if (arr2[i / 2][j] == 2) cout << "|X ";
				else cout << "|* ";
			}
		}
		((i == 0) || (i == sizeOfField * 2))? cout << '-' << endl: cout << '|' << endl;
	}
	cout << endl;
}

void shipDestroying(int** Field, int y, int x)
{
	while ((y >= 0) && (Field[y][x] == 2)) y--;
	while ((x >= 0) && (Field[y + 1][x] == 2)) x--;
	if ((y >= 0) && (y <= sizeOfField - 1) && (x >= 0) && (x <= sizeOfField - 1)) Field[y][x] = 3;
	y++;
	while ((y < sizeOfField) && (Field[y][x + 1] == 2))
	{
		if ((y >= 0) && (y <= sizeOfField - 1) && (x >= 0) && (x <= sizeOfField - 1)) Field[y][x] = 3;
		y++;
	}
	if ((y >= 0) && (y <= sizeOfField - 1) && (x >= 0) && (x <= sizeOfField - 1)) Field[y][x] = 3;
	x++;
	while ((x < sizeOfField) && (Field[y - 1][x] == 2))
	{
		if ((y >= 0) && (y <= sizeOfField - 1) && (x >= 0) && (x <= sizeOfField - 1)) Field[y][x] = 3;
		x++;
	}
	if ((y >= 0) && (y <= sizeOfField - 1) && (x >= 0) && (x <= sizeOfField - 1)) Field[y][x] = 3;
	y--;
	while ((y >= 0) && (Field[y][x - 1] == 2))
	{
		if ((y >= 0) && (y <= sizeOfField - 1) && (x >= 0) && (x <= sizeOfField - 1)) Field[y][x] = 3;
		y--;
	}
	if ((y >= 0) && (y <= sizeOfField - 1) && (x >= 0) && (x <= sizeOfField - 1)) Field[y][x] = 3;
	x--;
	while ((x >= 0) && (Field[y + 1][x] == 2))
	{
		if ((y >= 0) && (y <= sizeOfField - 1) && (x >= 0) && (x <= sizeOfField - 1)) Field[y][x] = 3;
		x--;
	}
}

void playerTurn(int** Field1, int** Field2, int &hits)
{
	int y, x;
	do {
		fieldsOutput(Field1, Field2);
		do {
			do {
				cout << "Введите координату клетки (x/y): ";
				cin >> x >> y;
				y--; x--;
				if ((y < 0) || (y > 9) || (x < 0) || (x > 9)) cout << "Ошибка: некорректный ввод" << endl;
			} while ((y < 0) || (y > 9) || (x < 0) || (x > 9));
			if ((Field2[y][x] == 2) || (Field2[y][x] == 3)) cout << "Ошибка: клетка занята" << endl;
		} while ((Field2[y][x] == 2) || (Field2[y][x] == 3));
		if (Field2[y][x] == 0)
		{
			cout << "Вы промахнулись" << endl;
			Field2[y][x] = 3;
			system ("sleep 1"); system("clear");
		}
		else if (Field2[y][x] == 1)
		{
			Field2[y][x] = 2;
			hits++;
			if (checkingStatusOfShip(Field2, y, x) == true)
			{
				cout << "Вы попали" << endl;
				system ("sleep 1"); system("clear");
			}
			else
			{
				cout << "Вы уничтожили корабль" << endl;
				shipDestroying(Field2, y, x);
				system ("sleep 1"); system("clear");
			}
		}
	} while ((Field2[y][x] != 3) && (hits != 20));
}

bool checkingStatusOfShip(int** Field, int y, int x)
{
	while ((y >= 0) && ((Field[y][x] == 1) || (Field[y][x] == 2))) y--;
	while ((x >= 0) && ((Field[y + 1][x] == 1) || (Field[y + 1][x] == 2))) x--;
	y++;
	while ((y < sizeOfField) && (Field[y][x + 1] == 2)) y++;
	if ((y < sizeOfField) && (Field[y][x + 1] == 1)) return true;
	x++;
	while ((x < sizeOfField) && (Field[y - 1][x] == 2)) x++;
	if ((x < sizeOfField) && (Field[y - 1][x] == 1)) return true;
	y--;
	while ((y >= 0) && (Field[y][x - 1] == 2)) y--;
	if ((y >= 0) && (Field[y][x - 1] == 1)) return true;
	x--;
	while ((x >= 0) && (Field[y + 1][x] == 2)) x--;
	if ((x >= 0) && (Field[y + 1][x] == 1)) return true;
	return false;
}

void botTurn(int** Field1, int** Field2, int &hits, bool &finishingMode, int &fy, int &fx, int &hitDirection)
{
	cout << "Ход компьютера" << endl;
	int y, x;
	bool err = false;
	do {
		if (finishingMode == false)
		{
			do {
				y = rand() % 10;
				x = rand() % 10;
			} while ((Field2[y][x] == 2) || (Field2[y][x] == 3));
			if (Field2[y][x] == 1)
			{
				finishingMode = true;
				fy = y;
				fx = x;
				Field2[y][x] = 2;
				if (checkingStatusOfShip(Field2, fy, fx) == false)
				{
					shipDestroying(Field2, fy, fx);
					finishingMode = false;
					cout << "Корабль был уничтожен: " << y + 1 << ' ' << x + 1 << endl;
					if (hits == 20) return;
				}
				else cout << "Попадание: " << y + 1 << ' ' << x + 1 << endl;
				hits++;
			}
			else
			{
				Field2[y][x] = 3;
				cout << "Промах: " << y + 1 << ' ' << x + 1 << endl;
			}
			fieldsOutputAndClearConsole(Field1, Field2);
		}
		else do {
			y = fy; x = fx;
			err = false;
			hitDirection = rand() % 4 + 1;
			switch (hitDirection)
			{
			case 1:
				do {
					do y--; while ((y >= 0) && (Field2[y][x] == 2));
					if ((y >= 0) && (Field2[y][x] == 0))
					{
						Field2[y][x] = 3;
						cout << "Промах: " << y + 1 << ' ' << x + 1 << endl;
						fieldsOutputAndClearConsole(Field1, Field2);
					}
					else if ((y >= 0) && (Field2[y][x] == 1))
					{
						Field2[y][x] = 2;
						if (checkingStatusOfShip(Field2, fy, fx) == false)
						{
							shipDestroying(Field2, fy, fx);
							finishingMode = err = false;
							cout << "Корабль был уничтожен: " << y + 1 << ' ' << x + 1 << endl;
							if (hits == 20) return;
						}
						else cout << "Попадание: " << y + 1 << ' ' << x + 1 << endl;
						fieldsOutputAndClearConsole(Field1, Field2);
						hits++;
						if (checkingStatusOfShip(Field2, fy, fx) == false) break;
					}
					else err = true;
				} while ((y >= 0) && (Field2[y][x] != 3));
				break;
			case 2:
				do {
					do x++; while ((x < sizeOfField) && (Field2[y][x] == 2));
					if ((x < sizeOfField) && (Field2[y][x] == 0))
					{
						Field2[y][x] = 3;
						cout << "Промах: " << y + 1 << ' ' << x + 1 << endl;
						fieldsOutputAndClearConsole(Field1, Field2);
					}
					else if ((x < sizeOfField) && (Field2[y][x] == 1))
					{
						Field2[y][x] = 2;
						if (checkingStatusOfShip(Field2, fy, fx) == false)
						{
							shipDestroying(Field2, fy, fx);
							finishingMode = err = false;
							cout << "Корабль был уничтожен: " << y + 1 << ' ' << x + 1 << endl;
							if (hits == 20) return;
						}
						else cout << "Попадание: " << y + 1 << ' ' << x + 1 << endl;
						fieldsOutputAndClearConsole(Field1, Field2);
						hits++;
						if (checkingStatusOfShip(Field2, fy, fx) == false) break;
					}
					else err = true;
				} while ((x < sizeOfField) && (Field2[y][x] != 3));
				break;
			case 3:
				do {
					do y++; while ((y < sizeOfField) && (Field2[y][x] == 2));
					if ((y < sizeOfField) && (Field2[y][x] == 0))
					{
						Field2[y][x] = 3;
						cout << "Промах: " << y + 1 << ' ' << x + 1 << endl;
						fieldsOutputAndClearConsole(Field1, Field2);
					}
					else if ((y < sizeOfField) && (Field2[y][x] == 1))
					{
						Field2[y][x] = 2;
						if (checkingStatusOfShip(Field2, fy, fx) == false)
						{
							shipDestroying(Field2, fy, fx);
							finishingMode = err = false;
							cout << "Корабль был уничтожен: " << y + 1 << ' ' << x + 1 << endl;
							if (hits == 20) return;
						}
						else cout << "Попадание: " << y + 1 << ' ' << x + 1 << endl;
						fieldsOutputAndClearConsole(Field1, Field2);
						hits++;
						if (checkingStatusOfShip(Field2, fy, fx) == false) break;
					}
					else err = true;
				} while ((y < sizeOfField) && (Field2[y][x] != 3));
				break;
			case 4:
				do {
					do x--; while ((x >= 0) && (Field2[y][x] == 2));
					if ((x >= 0) && (Field2[y][x] == 0))
					{
						Field2[y][x] = 3;
						cout << "Промах: " << y + 1 << ' ' << x + 1 << endl;
						fieldsOutputAndClearConsole(Field1, Field2);
					}
					else if ((x >= 0) && (Field2[y][x] == 1))
					{
						Field2[y][x] = 2;
						if (checkingStatusOfShip(Field2, fy, fx) == false)
						{
							shipDestroying(Field2, fy, fx);
							finishingMode = err = false;
							cout << "Корабль был уничтожен: " << y + 1 << ' ' << x + 1 << endl;
							if (hits == 20) return;
						}
						else cout << "Попадание: " << y + 1 << ' ' << x + 1 << endl;
						fieldsOutputAndClearConsole(Field1, Field2);
						hits++;
						if (checkingStatusOfShip(Field2, fy, fx) == false) break;
					}
					else err = true;
				} while ((x >= 0) && (Field2[y][x] != 3));
				break;
			}
		} while (err == true);
	} while (((Field2[y][x] != 3) && (hits != 20)));
}