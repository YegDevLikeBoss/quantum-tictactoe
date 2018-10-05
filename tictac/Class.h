#pragma once

ref class Player
{
private:
	bool isActive;
	bool isReal;
	int turnInstance;
	int turnStatus;
	System::String^ name;
public:
	Player()
	{
		isActive = false;
		isReal = false;
		turnInstance = 1;
		turnStatus = 1;
		name = "Player";
	}
	Player(bool getType)
	{
		isActive = false;
		isReal = getType;
		turnInstance = 1;
		turnStatus = 1;
		name = "Player";
	}

	/*void makeActive()
	{
		isActive = true;
	}
	void makeInctive()
	{
		isActive = false;
	}
	void makeReal()
	{
		isReal = true;
	}
	void makeFake()
	{
		isReal = false;
	}*/
	System::String^ getName()
	{
		return name;
	}
};

ref class AI
{
public:

	int omove(int move, int m1, int m2, int m3, int m4, int m5, int m6, int m7, int m8, int m9)
	{
		move = 2;
		switch (move)
		{
			case 2:
			{
				if (m5 == 1)
					return 3;
				else
					return 5;
				break;
			}/*
			case 4:
			case 6:
			case 8:*/
		}
		return 8;
	}
};

ref class Field
{
private:
	System::String^ fields;
public:
	Field()
	{
		fields = "||||||||";
	}

	void initFieldStr();                  // For future
	System::String^ getField();           // Get field state
	void setField(System::String^ value); // Set field state
	void nullField();                     // Clear field
};

ref class Game
{
private:
	bool first;
	bool isOver;
	bool quantMove;
	int mode;
	int currentMove;
	int typeMode;
	AI mind;
	Field string;
	Player player1; //To be deleted
	Player player2; //To be deleted
	array<Player^>^ player = gcnew array<Player^>(2);
public:
	Game()
	{
		mode = 1;
		isOver = false;
		first = true;
		//player1.makeReal();
		currentMove = 1;
		quantMove = false;
		typeMode = 0;
	}
	Game(int getMode, int getTypeMode)
	{
		first = true;
		mode = getMode;
		isOver = false;
		currentMove = 1;
		quantMove = false;
		typeMode = getTypeMode;
	}

	void initGame(int getTheMode, int getTypeMode)
	{
		typeMode = getTypeMode;
		mode = getTheMode;
		//switch (mode) To be deleted
		/*{
		case 0: { player1.makeReal(); player2.makeReal(); break; }
		case 1: { player1.makeReal(); player2.makeFake(); break; }
		case 2: { player1.makeFake(); player2.makeFake(); break; }
		}*/
		/*player[0]->makeActive();
		player[1]->makeInctive();*/
	}

	/*void swapPlayer()
	{
		if (1 == (currentMove % 2))
		{
			player[0]->makeActive();
			player[1]->makeInctive();
		}
		else
		{
			player[1]->makeActive();
			player[0]->makeInctive();
		}
	}*/
	void makeNull()
	{
		mode = 1;
		isOver = false;
		first = true;
		currentMove = 0;
		quantMove = false;
		string.nullField();
	}
	void move(int mode);                       // Movement counter
	int getMove();                             // Get current move number
	bool getQuant();                           // Grt current move status
	void buttonClick(int number)
	{
		number--;
		int x = number % 3;
		int y = number / 3;
		//swapPlayer();
		int tM = typeMode; //At the end
		move(tM);
		currentMove = getMove();
		string.initFieldStr();
	}
	int ogmove(int m1, int m2, int m3, int m4, int m5, int m6, int m7, int m8, int m9)
	{
		return mind.omove(currentMove, m1, m2, m3, m4, m5, m6, m7, m8, m9);
	}
	System::String^ getFieldValue();           // Get field value from class
	void setFieldValue(System::String^ value); // Send field value to class
	void decreaseMove();                       // Decrease move by one
	void increaseMove();                       // Increase move by one
};