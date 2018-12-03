#include"input_file.h"
void wj()// 从文件读入数据
{
	int n1 = 1;
	string o;
	ifstream myfile("数据.txt");
	if (!myfile.is_open()) { cout << "文件无法打开" << endl; while (1); exit(1); }
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