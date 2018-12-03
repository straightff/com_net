#include<iostream>
#include <cmath>
#include <string>
#include <fstream>
#include "windows.h"
using namespace std;
extern int xia[100][100];//下一跳
extern int map[100][100];//存储图
extern int dis[10000];//存储距离
extern int book[10000];//1为有搜过，0为没有。