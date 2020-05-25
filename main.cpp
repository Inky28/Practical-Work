/*
��������  ���� ������� � ������
-	�����
-	��� �������(�����, ����,  � �. �.), ������ enum
-	������
-	�������
-	����������� �������
-	�������� ���� ������� ������
��������
-	����������� �� ������������;
-	����������� � �����������;
-	������ �������(getters/setters);
-	���������� ����������� ������ (������ * ������� * ����������� �������);
-	���������� ����� ����� �������(������ (������ * ������� );
-	��������� ������� �����  ��������, �� ����������  �� ������� �� ������ ���� (����-����; �����-�����);
-	��������� ����� ��������� ���� ����� �������: ����� ������� 1, ���� ����� ������� ����� �����,  ����� ������� -1, ���� ����� ������� ����� �����, 0 �������  �������� �����.
-	*��������� ����� ����������� � ����� ������ �������� �� ������  ������� ��������� ����
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