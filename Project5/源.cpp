#include"del.h"
#include"dijkstra.h"
#include"input_file.h"
#include"print.h"
#include"trans_int.h"
#include"zengjia.h"
int xia[100][100];//��һ��
int map[100][100];//�洢ͼ
int dis[10000];//�洢����
int book[10000];//1Ϊ���ѹ���0Ϊû�С�
int m, n = 9, a, b;//nΪ�ڵ���
int main()//1
{
    cout<<"����"<<endl;
	int k, l;
	for (k = 0; k <= 100; ++k)
		for (l = 0; l <= 100; ++l)
			xia[k][l] = l;//��ʼ����һ��
	for (int i = 1; i <= 100; i++)
		for (int j = 1; j <= 100; j++)
		{
			map[i][j] = 200;
			if (i == j)map[i][j] = 0;
		}
	wj();
	int n3 = 4;
	int h = 1;
	for (; h != 0;)
	{
		cout << "ѡ�������1.���ӣ�2.ɾ����3.��ѯ�ڵ�·�ɱ�4.�˳� (����������)";
		cin >> n3;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "error!����������:";
			cin >> n3;
		}
		while (n3 != 1 && n3 != 2 && n3 != 3 && n3 != 4)
		{
			cout << "error!������1��2��3��4:";
			cin >> n3;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(10000, '\n');
				cout << "error!����������:";
				cin >> n3;
			}
		}
		if (n3 == 1)zj();
		if (n3 == 2)
		{
			del();
		}
		if (n3 == 3)
		{
			m = 0;
			system("cls");
			cout << "��ѯ��һ���ڵ��·�ɱ�";
			cin >> m;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(10000, '\n');
				cout << "error!����������:";
				cin >> m;
			}
			dijkstra(m);//��mΪԴ�㡣
			sc();
			for (int t = 0; t <= 10000; ++t)
				book[t] = 0;
		}
		if (n3 == 4) h = 0;
	}
}
