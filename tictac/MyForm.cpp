#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute()]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	tictac::MyForm form;
	Application::Run(%form);
}

bool tictac::MyForm::ifWon(int w1, int w2, int w3, int w4, int w5, int w6, int w7, int w8, int w9)
{
	if (((w1 == 1)&&(w2 == 1)&&(w3 == 1)) || ((w4 == 2) && (w5 == 2) && (w6 == 2)) || ((w4 == 1) && (w5 == 1) && (w6 == 1)) || ((w4 == 2) && (w5 == 2) && (w6 == 2)) || ((w7 == 1) && (w8 == 1) && (w9 == 1)) || ((w7 == 2) && (w8 == 2) && (w9 == 2)) || ((w1 == 1) && (w4 == 1) && (w7 == 1)) || ((w1 == 2) && (w4 == 2) && (w7 == 2)) || ((w2 == 1) && (w5 == 1) && (w8 == 1)) || ((w2 == 2) && (w5 == 2) && (w8 == 2)) || ((w3 == 1) && (w6 == 1) && (w9 == 1)) || ((w3 == 2) && (w6 == 2) && (w9 == 2)) || ((w1 == 1) && (w5 == 1) && (w9 == 1)) || ((w1 == 2) && (w5 == 2) && (w9 == 2)) || ((w3 == 1) && (w5 == 1) && (w7 == 1)) || ((w3 == 2) && (w5 == 2) && (w7 == 2)))
		return true;

	return false;
}

bool tictac::MyForm::stdWin(System::String^ w1, System::String^ w2, System::String^ w3, System::String^ w4, System::String^ w5, System::String^ w6, System::String^ w7, System::String^ w8, System::String^ w9)
{
	if (((w1 == "X") && (w2 == "X") && (w3 == "X")) || ((w4 == "O") && (w5 == "O") && (w6 == "O")) || ((w4 == "X") && (w5 == "X") && (w6 == "X")) || ((w4 == "O") && (w5 == "O") && (w6 == "O")) || ((w7 == "X") && (w8 == "X") && (w9 == "X")) || ((w7 == "O") && (w8 == "O") && (w9 == "O")) || ((w1 == "X") && (w4 == "X") && (w7 == "X")) || ((w1 == "O") && (w4 == "O") && (w7 == "O")) || ((w2 == "X") && (w5 == "X") && (w8 == "X")) || ((w2 == "O") && (w5 == "O") && (w8 == "O")) || ((w3 == "X") && (w6 == "X") && (w9 == "X")) || ((w3 == "O") && (w6 == "O") && (w9 == "O")) || ((w1 == "X") && (w5 == "X") && (w9 == "X")) || ((w1 == "O") && (w5 == "O") && (w9 == "O")) || ((w3 == "X") && (w5 == "X") && (w7 == "X")) || ((w3 == "O") && (w5 == "O") && (w7 == "O")))
		return true;

	return false;
}



/*void tictac::MyForm::buttonClick(int number)
{
	number--;
	int x = number % 3;
	int y = number / 3;
	game.swapPlayer();
	field[x, y].completeCell(x, y, currentMove, typeMode);
	int tM = typeMode; //At the end
	currentMove = move(tM);
}*/

void tictac::MyForm::buttonClick(int number)
{
	game.buttonClick(number);
	this->label1->Text = System::Convert::ToString(game.getMove());
	/*if (ifWon(field[0, 0], field[0, 1], field[0, 2], field[1, 0], field[1, 1], field[1, 2], field[2, 0], field[2, 1], field[2, 2]))
	{
		this->label1->Text = "Won";
		this->button11->Visible = true;
	}*/
}

int tictac::MyForm::quantParse(int number, int mode)
{
	int nmove;
	number--;
	// Create separator string
	System::String^ separStr = "|";
	array<Char>^ separator = separStr->ToCharArray();
	// String for parts
	array<System::String^>^ parts;
	// String to separate
	System::String^ fieldLine = game.getFieldValue();

	// Perform split
	parts = fieldLine->Split(separator);

	fieldLine = "";

	for (int i = 0; i < parts->Length; i++)
	{
		switch (mode)
		{
			case 0:
			{
				if ((i != number))
				{
					fieldLine += parts[i];
					if (i != 8)
						fieldLine += "|";
				}
				else
				{
					if (!("O" == parts[i]) && !("X" == parts[i]))
					{
						if (0 == game.getMove() % 2)
							fieldLine += "O";
						else
						{
							fieldLine += "X";
							nmove = mindblow(parts[0], parts[1], parts[2], parts[3], parts[4], parts[5], parts[6], parts[7], parts[8]);
						}
					}
					else
					{
						fieldLine += parts[i];
						game.decreaseMove();
					}
					fieldLine += "|";
				}
				break;
			}
			case 1:
			{
				if ((i != number))
				{
					fieldLine += parts[i];
					if (i != 8)
						fieldLine += "|";
				}
				else
				{
					fieldLine += parts[i];
					if (0 == game.getMove() % 2)
					{
						fieldLine += "O";
					}
					else
					{
						fieldLine += "X";
					}
					fieldLine += game.getMove();
					fieldLine += "|";
				}
				break;
			}
		}
	}
	game.setFieldValue(fieldLine);
	this->label1->Text = fieldLine;

	return nmove;
}

array<int, 2>^ tictac::MyForm::checkcl(array<int, 2>^ arr, int btn)
{
	if (!((game.getMove()==1)&&(game.getQuant()==false)))
	{
		if (game.getQuant() == true) //second half of move
		{
			for (int i = 0; i < arr[0, 81]; i+=2)
				for (int j = 0; j < arr[1, 81]; j+=2)
					if (game.getMove() == arr[i, j])
					{
						arr[i + 1, j] = game.getMove();
						arr[i + 1, j + 1] = btn;
						arr[0, 81]++;
					}
			for (int i = 1; i < /*arr[1, 81]*/2; i += 2)
				for (int j = 0; j < arr[0, 81]; j += 2)
					/*for (int k = 1; k < arr[0, 81]; k += 2)*/
					if (arr[j, i] == btn/*arr[k, i]*/)
					{
						this->label4->Text = "Choose";
						this->label4->Visible = true;
						this->bq1->Visible = true;
						this->bq2->Visible = true;
						if ((arr[j, i - 1]) % 2 == 0)
							this->bq1->Text += "O";
						else
							this->bq1->Text += "X";
						this->bq1->Text += System::Convert::ToString(arr[j, i-1]);
						for (int k = 1; k < arr[0, 81]; k+=2)
							if (arr[k, i] == arr[j, i])
							{
								if ((arr[k, i - 1]) % 2 == 0)
									this->bq2->Text += "O";
								else
									this->bq2->Text += "X";
								this->bq2->Text += System::Convert::ToString(arr[k, i - 1]);
							}
						arr[2, 81] = btn;
					}
		}
		else //first half of move
		{
			for (int i = 1; i < arr[1, 81]; i+=2)
				for (int j = 1; j < arr[0, 81]; j+=2)
					if ((btn == arr[j, i]) && (arr[j, i] != arr[j + 1, i]))
					{
						arr[j + 1, i - 1] = game.getMove();
						arr[j + 1, i] = btn;
						arr[0, 81]++;
					}
		}
	}
	else
	{
		arr[0, 0] = game.getMove();
		arr[0, 1] = btn;
		arr[0, 81] ++;
		arr[1, 81] += 2;
	}
	for (int i = 0; i < 8; i++)
		this->label2->Text += System::Convert::ToString(arr[i, 1]);
	return arr;
}

void tictac::MyForm::fill(int mode)
{
	// Create separator string
	System::String^ separStr = "|";
	array<Char>^ separator = separStr->ToCharArray();

	// String for parts
	array<System::String^>^ parts;

	// String to separate
	System::String^ fieldLine = game.getFieldValue();

	// Perform split
	parts = fieldLine->Split(separator);

	for (int i = 0; i < parts->Length; i++)
	{
		switch (i)
		{
		case 0: {this->button1->Text = parts[i]; break;}
		case 1: {this->button2->Text = parts[i]; break;}
		case 2: {this->button3->Text = parts[i]; break;}
		case 3: {this->button4->Text = parts[i]; break;}
		case 4: {this->button5->Text = parts[i]; break;}
		case 5: {this->button6->Text = parts[i]; break;}
		case 6: {this->button7->Text = parts[i]; break;}
		case 7: {this->button8->Text = parts[i]; break;}
		case 8: {this->button9->Text = parts[i]; break;}
		}
	}

	//

	switch (mode)
	{
		case 0:
		{
			if (stdWin(parts[0], parts[1], parts[2], parts[3], parts[4], parts[5], parts[6], parts[7], parts[8]))
			{
				this->label1->Text = "Won";
				this->button11->Enabled = true;
				this->label4->Visible = true;
			}
			break;
		}
	}
}

int tictac::MyForm::mindblow(System::String^ w1,
	System::String^ w2,
	System::String^ w3,
	System::String^ w4,
	System::String^ w5,
	System::String^ w6,
	System::String^ w7,
	System::String^ w8,
	System::String^ w9)
{/*
	this->label2->Text = System::Convert::ToString(arr[4]);
	return game.ogmove(System::, num[1], num[2], num[3], num[4], num[5], num[6], num[7], num[8]);*/
	return 0;
}

array<int, 2>^ tictac::MyForm::unloop(array<int, 2>^ arr, int btn, int lastmove, System::String^ element)
{
	/*for (int i = 0; i < arr[0, 81]; i += 2)
		if (arr[i, 1]==btn)
			arr[]*/
	recur(element, lastmove);
	this->bq1->Visible = false;
	this->bq2->Visible = false;
	this->label4->Visible = false;
	this->label4->Text = "Win";
	return arr;
}

void tictac::MyForm::moveto(int pos)
{
	int x = 49;
	int y = 105;

	switch (pos)
	{
	case 1: {this->bq1->Location.X = x; this->bq1->Location.Y = y; break;}
	case 2: {this->bq1->Location.X = x+105; this->bq1->Location.Y = y; break;}
	case 3: {this->bq1->Location.X = x+210; this->bq1->Location.Y = y; break;}
	case 4: {this->bq1->Location.X = x; this->bq1->Location.Y = y + 105; break;}
	case 5: {this->bq1->Location.X = x+105; this->bq1->Location.Y = y + 105; break;}
	case 6: {this->bq1->Location.X = x+210; this->bq1->Location.Y = y + 105; break;}
	case 7: {this->bq1->Location.X = x; this->bq1->Location.Y = y + 210; break;}
	case 8: {this->bq1->Location.X = x+105; this->bq1->Location.Y = y + 210; break;}
	case 9: {this->bq1->Location.X = x+210; this->bq1->Location.Y = y+ 210; break;}
	}
}

void tictac::MyForm::recur(System::String^ str, int btn)
{
	//array <System::String^>^ str = gcnew array <System::String^>(9);

	// Create separator string
	System::String^ separStr = "|";
	array<Char>^ separator = separStr->ToCharArray();
	// String for parts
	array<System::String^>^ parts;
	// String to separate
	System::String^ fieldLine = game.getFieldValue();

	// Perform split
	parts = fieldLine->Split(separator);
	this->label2->Text = System::Convert::ToString(parts[btn-1]->Length);
	separator = parts[btn-1]->ToCharArray();

	System::String^ arg;

	fieldLine = "";

	for (int i = 0; i < 9; i++)
	{
		if (i != btn - 1)
			fieldLine += parts[i];
		else

			for (int j = 0; j < parts[btn - 1]->Length; j += 2)
			{
				arg = "";
				arg += System::Convert::ToString(separator[j]);
				arg += System::Convert::ToString(separator[j + 1]);

				if (arg != str)
					recur(arg, System::Convert::ToInt64(separator[j + 1]));
				else
					parts[btn - 1] = arg;

				fieldLine += parts[j];
				fieldLine += "|";
				arg = "";
			}
	}
	game.setFieldValue(fieldLine);
}

/*void tictac::MyForm::recur(System::String^ str, int btn)
{
	//array <System::String^>^ str = gcnew array <System::String^>(9);

	// Create separator string
	System::String^ separStr = "|";
	array<Char>^ separator = separStr->ToCharArray();
	// String for parts
	array<System::String^>^ parts = gcnew array <System::String^>(9);
	// String to separate
	System::String^ fieldLine = game.getFieldValue();

	// Perform split
	parts = fieldLine->Split(separator);
	this->label2->Text = System::Convert::ToString(parts[btn - 1]->Length);
	separator = parts[btn - 1]->ToCharArray();

	// Perform split
	parts = fieldLine->Split(separator);
	this->label2->Text = System::Convert::ToString(parts[btn - 1]->Length);
	separator = parts[btn - 1]->ToCharArray();
}
*/