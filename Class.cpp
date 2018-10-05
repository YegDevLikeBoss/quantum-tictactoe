#pragma once

#include "Class.h"


//Field methods
void Field::initFieldStr()
{
	//For future
}

System::String^ Field::getField()
{
	return fields;
}

void Field::setField(System::String^ value)
{
	fields = value;
}

void Field::nullField()
{
	fields = "||||||||";
}

//Game methods
void Game::move(int mode)
{
	switch (mode)
	{
	case 0: {currentMove++; break;}
	case 1: {
		if (currentMove)
		{
			if (quantMove) {
				quantMove = false;
				currentMove++;
			}
			else {
				quantMove = true;
			}
		}
		else
		{
			currentMove = 1;
			quantMove = false;
		}
		break;
	}
	case 2: {break;}
	}
}

int Game::getMove()
{
	return currentMove;
}

bool Game::getQuant()
{
	return quantMove;
}

System::String^ Game::getFieldValue()
{
	return string.getField();
}

void Game::setFieldValue(System::String^ value)
{
	string.setField(value);
}

void Game::decreaseMove()
{
	currentMove--;
}

void Game::increaseMove()
{
	currentMove++;
}