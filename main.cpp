#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
	LinkedList copyList;
	copyList.insert(0, 1);
	copyList.insert(0, 2);

	LinkedList list;
	list.insert(0, 5);

	list = std::move(copyList); //����� �� ������ copyList ��� ���� ����������� � list, ��� ��� ����������� � ��������� �� �� copyList

	for (size_t i = 0; i < copyList.size() - 1; i++)
		cout << "������ ������" << copyList[i] << endl;

	for (size_t i = 0; i < list.size() - 1; i++)
		cout << "����� ������" << list[i] << endl;
}

