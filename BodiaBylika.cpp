#include "BodiaBylika.h"



bybasanci::bybasanci(string text1):text(text1){}

int  bybasanci::verification()
{
	int count = 0;
	bool  perevirka  = false;
	bool  perevirka2 = false;
	bool  perevirka3 = false;
	bool  perevirkaork1 = false;
	bool  perevirkaork2 = false;
	bool  perevirkaork3 = false;
	int index = 0;
	int index1 = 0;
	bool  allperevirka = false;
	bool  perevirkaot = false;
	int countmis = 0;
	int countmis1 = 0;
	int par1 = 0;
	int par2 = 0;
	int par3 = 0;


	do
	{
		for (int i = 0; i < count; i++)
		{
			if (text[i] == '(') {
				if (perevirka)
				{
					cout << "false" << "\n";
					return 0;
				}
				else {
					par1++;
					perevirkaork1 = true;
				}


			}
			if (text[i] == ')') {

				perevirka = true;
				if (!perevirkaork1)
				{
					cout << "false" << "\n";
					return 0;
				}
				for (int y = count; y >= 0; y--)
				{

					if (text[y] == '(')
					{
						par1++;
						allperevirka = true;
						index = y;
						index1 = i;
						if (text[y] == '(' && text[i] == ')') {
							index = y;
							index1 = i;
							text[index] = ' ';
							text[index1] = ' ';
						}
						perevirka = false;
						if (par1 > 1) {


						}
						else {
							perevirkaork1 = false;
						}

					}






				}

			}
				if (text[i] == '[') {
					if (perevirka2)
					{
						cout << "false" << "\n";
						return 0;
					}
					else {
						par2++;
						perevirkaork2 = true;
					}



				}
		
		
				if (text[i] == ']') {

					perevirka2 = true;
					if (!perevirkaork2)
					{
						cout << "false" << "\n";
						return 0;
					}
					for (int y = count; y >= 0; y--)
					{

						if (text[y] == '[')
						{
							par2++;
							allperevirka = true;
							index = y;
							index1 = i;
							if (text[y] == '[' && text[i] == ']') {
								index = y;
								index1 = i;
								text[index] = ' ';
								text[index1] = ' ';
							}
							perevirka2 = false;
							if (par1 > 1) {


							}
							else {
								perevirkaork2 = false;
							}

						}






					}
				}
			
				if (text[i] == '{') {
					if (perevirka3)
					{
						cout << "false" << "\n";
						return 0;
					}
					else {
						par3++;
						perevirkaork3 = true;
					}



				}
				if (text[i] == '}') {

					perevirka3 = true;
					if (!perevirkaork3)
					{
						cout << "false" << "\n";
						return 0;
					}
					for (int y = count; y >= 0; y--)
					{

						if (text[y] == '{')
						{
							par3++;
							allperevirka = true;
							index = y;
							index1 = i;
							if (text[y] == '{' && text[i] == '}') {
								index = y;
								index1 = i;
								text[index] = ' ';
								text[index1] = ' ';
							}
							perevirka3 = false;
							if (par3 > 1) {


							}
							else {
								perevirkaork3 = false;
							}

						}






					}
				}

		}
	} while (!end(count++));
	for (int i = 0; i < count; i++)
	{
		if (text[i] == ')' || text[i] == ']' || text[i] == '}') {
			 countmis++;
		}
		 if(text[i] == '(' || text[i] == '[' || text[i] == '{'){
			countmis1++;
		}
	}
	if (countmis == 0 && countmis1 == 0)
	{
		cout << "true" << "\n";
		return 0;
	}
	if (countmis >= 1 || countmis1 >= 1)
	{
		cout << "false" << "\n";
		return 0;
	}




	
}
bool bybasanci::end(int count)
{

	return text[count] == ';';


}

void bybasanci::show()
{
	cout << text << "\n";
}

bybasanci::~bybasanci()
{
//просто чіл
}


