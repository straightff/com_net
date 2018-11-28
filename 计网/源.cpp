#include<iostream>
#include<cstring>
#include<fstream>
#define nu 9998
using namespace std;
int graph[100][100];
int dis[100];
int visit[100];
int pre[100];
int n, m;
void dijkstra(int begin)
{
	for (int i = 1; i <= n; ++i)
	{
		if (i != begin)
		{
			dis[i] = graph[begin][i];//给dis数组初始化
		}else
			dis[begin] = 0;
		visit[i] = 0;
	}
	visit[begin] = 1;
	for (int i = 1; i <=n; ++i)
	{
		int minset = nu;
		int u = begin;
		for (int j = 1; j <= n; ++j)//找出下一跳的最短路径
		{
			if (!visit[j] && dis[j] <= minset)
			{
				u = j;
				minset = dis[u];
			}
		}
		pre[i] = u;
		visit[u] = 1;
		for (int j = 1; j <= n; ++j)
		{
			if(!visit[j]&&graph[u][j]<nu)
				if (dis[u] + graph[u][j] < dis[j])
				{
					dis[j] = dis[u] + graph[u][j];
				}
		}
	}
}
void print(int begin)
{
	dijkstra(begin);
	for (int i = 1; i <= n; ++i)
	{
		printf("%d->%d %d 总计距离:%d\n", begin,i,pre[i],dis[i]);
	}
	cout << endl;
}
void input()
{
	int x, y;
	ifstream inp;
	inp.open("router.txt", ios::in);
	inp >> n >> m;
	while (!inp.eof())
	{
		inp >> x >> y;inp>>graph[x][y];
		graph[y][x]=graph[x][y];
	}
}
int main()
{
	int t;
	memset(graph, nu, sizeof(graph));
	memset(dis, nu, sizeof(dis));
	cout << "你想要查看的节点：" << endl;
	while (cin >> t) {
		input();
		print(t);
	}
	system("pause");
	return 0;
}
