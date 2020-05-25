/*
Створити  клас Водойма з полями
-	назва
-	тип водойми(озеро, море,  і т. д.), бажано enum
-	ширина
-	довжина
-	максимальна глибина
-	статичне поле кількості водойм
Методами
-	конструктор по замовчуванню;
-	конструктор с параметрами;
-	методи доступу(getters/setters);
-	визначення приблизного обсягу (ширина * довжина * максимальна глибина);
-	визначення площі водної поверхні(обсягу (ширина * довжина );
-	статичний логічний метод  перевірки, чи відносяться  дві водойми до одного типу (море-море; озеро-озеро);
-	статичний метод порівняння площ водної поверхні: метод повертає 1, якщо перша водойма більшої площі,  метод повертає -1, якщо перша водойма меншої площі, 0 водойми  однакової площі.
-	*статичний метод знаходження у масиві водойм найбільшої за площею  водойми вказаного типу
*/

#include <iostream>
using namespace std;

class Water
{
private:

	string name;
	int width;
	int length;
	int maxDepth;

	static int countWater;
public:
	enum TypeWater
	{
		NONE,
		OCEAN,
		SEA,
		LAKE,
		RIVER
	};

	Water()
	{
		name = "NONAME";
		width = 0;
		length = 0;
		maxDepth = 0;

	}

	Water(string name, int width, int length, int maxDepth)
	{
		setName(name);
		setWidth(width);
		setLength(length);
		setMaxDepth(maxDepth);

	}

	void setName(string name)
	{
		if (!name.empty())
		{
			this->name = name;
		}
	}

	void setWidth(int width)
	{
		this->width = width;
	}

	void setLength(int length)
	{
		this->length = length;
	}

	void setMaxDepth(int maxDepth)
	{
		this->maxDepth = maxDepth;
	}

	int getWidth()
	{
		return this->width;
	}

	int getLength()
	{
		return this->length;
	}

	int getMaxDepth()
	{
		return this->maxDepth;
	}

};

int main()
{

	return 0;
}