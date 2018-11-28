#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include<vector>
using namespace std;
int map[100][100];//�洢ͼ
int dis[10000];//�洢����
int book[10000];//1Ϊ���ѹ���0Ϊû�С�
int n, m;
struct router
{
	int name;
	int dist;
}node[10];
void dijkstra(int u)//������Դ����
{
	memset(dis, 200, sizeof(dis));
	int start = u;
	book[start] = 1;
	for (int i = 1; i <= n; i++)
	{
		dis[i] = min(dis[i], map[start][i]);//�ȸ���һ��
	}
	for (int i = 1; i <= n ; i++)
	{
		int minn = 9999999;
		for (int j = 1; j <= n; j++)
			if (book[j] == 0 && minn > dis[j])
			{
				minn = dis[j];
				start = j;//�ҵ���Դ������ĵ㣬Ȼ��ѱ�ż�¼����
			}
		book[start] = 1;
		for (int j = 1; j <= n; j++)
			dis[j] = min(dis[j], dis[start] + map[start][j]);//���µĵ�������d
	}
}
int main()
{
	cout << "�����ڵ㣺";
	cin >> n;
	cout << "�������ߣ�";
	cin >> m;
	memset(map, 200, sizeof(map));
	for (int i = 1; i <= m; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		map[a][b] = c;
		map[b][a] = c;
	}
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (i == j)
				map[i][j] = 0;
	dijkstra(1);//��1ΪԴ�㡣
	for (int i = 1; i <= n; i++)cout << "1->" << i << dis[i] << "	 ";
	while (1);
}