#include <iostream>
#include <string>
using namespace std;
class PlayingCard
{
public:
	/////////геттеры
	int Getharizma()
	{
		return harizma;
	}
	int Getintelekt()
	{
		return intelekt;
	}
	int Getsila()
	{
		return sila;
	}
	/////////сеттеры
	//харизма
	void Setharizma(int hharizma)
	{
		harizma = hharizma;
	}
	//интелект
	void Setintelekt(int iintelekt)
	{
		intelekt = iintelekt;
	}
	//сила
	void Setsila(int ssila)
	{
		sila = ssila;
	}
	//приват
private:
	int harizma, intelekt, sila;
};
int main()
{
	srand(time(0));
	PlayingCard pervaia_karta;
	PlayingCard vtoraia_karta;
	pervaia_karta.Setharizma(3 + rand() % 10);
	pervaia_karta.Setintelekt(3 + rand() % 10);
	pervaia_karta.Setsila(3 + rand() % 10);
	vtoraia_karta.Setharizma(3 + rand() % 10);
	vtoraia_karta.Setintelekt(3 + rand() % 10);
	vtoraia_karta.Setsila(3 + rand() % 10);
	//РАВЕНСТВО
	if (pervaia_karta.Getharizma() == vtoraia_karta.Getharizma())
	{
		cout << "harizma ravna" << endl;
	}
	else if (pervaia_karta.Getintelekt() == vtoraia_karta.Getintelekt())
	{
		cout << "intelekt raven" << endl;
	}
	else if (pervaia_karta.Getsila() == vtoraia_karta.Getsila())
	{
		cout << "sila ravna" << endl;
	}
	//харизма больше, меньше
	if (pervaia_karta.Getharizma() > vtoraia_karta.Getharizma())
	{
		cout << "y 1 karts harizma bolshe" << endl;
	}
	else if (pervaia_karta.Getharizma() < vtoraia_karta.Getharizma())
	{
		cout << "y 2 karts harizma bolshe" << endl;
	}
	//intelekt больше, меньше
	if (pervaia_karta.Getintelekt() > vtoraia_karta.Getintelekt())
	{
		cout << "y 1 karts intelekt bolshe" << endl;
	}
	else if (pervaia_karta.Getintelekt() < vtoraia_karta.Getintelekt())
	{
		cout << "y 2 karts intelekt bolshe" << endl;
	}
	//sila больше, меньше
	if (pervaia_karta.Getsila() > vtoraia_karta.Getsila())
	{
		cout << "y 1 karts sila bolshe" << endl;
	}
	else if (pervaia_karta.Getsila() < vtoraia_karta.Getsila())
	{
		cout << "y 2 karts sila bolshe" << endl;
	}
	cout << pervaia_karta.Getharizma() << '\t' << vtoraia_karta.Getharizma() << endl;
	cout << pervaia_karta.Getintelekt() << '\t' << vtoraia_karta.Getintelekt() << endl;
	cout << pervaia_karta.Getsila() << '\t' << vtoraia_karta.Getsila() << endl;
}
/*
чтобы
было  
100
строк
*/