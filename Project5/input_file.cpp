#include"input_file.h"
void wj()// ���ļ���������
{
	int n1 = 1;
	string o;
	ifstream myfile("����.txt");
	if (!myfile.is_open()) { cout << "�ļ��޷���" << endl; while (1); exit(1); }
	while (!myfile.eof())
	{
		myfile >> o;
		switch (n1 % 3)
		{
		case 1:a = si(o); break;
		case 2:b = si(o); break;
		case 0:map[a][b] = si(o); map[b][a] = map[a][b]; break;
		}
		++n1;
	}
	myfile.close();
}