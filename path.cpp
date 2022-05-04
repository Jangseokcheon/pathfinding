#include <bits/stdc++.h>
#include <iostream>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>
using namespace std;

constexpr int MAX = 101;
constexpr double INF = 1e9 + 7;

// ����
const int dx1[4] = { 0, 0, 1, -1 };
const int dy1[4] = { -1, 1, 0, 0 };

// �밢��
const int dx2[4] = { 1, -1, -1, 1 };
const int dy2[4] = { -1, 1, -1, 1 };

using Pair = std::pair<int, int>;
using pPair = std::pair<double, Pair>;

void PrintMap();

struct Cell 
{
	int parent_x, parent_y;
	double f, g, h;
};


char zmap[MAX][MAX];
int ROW = 0, COL = 0;

bool isDestination(int row, int col, Pair dst)
{
	if (row == dst.first && col == dst.second) return true;
	return false;
}

bool isInRange(int row, int col) {
	return (row >= 0 && row < ROW&& col >= 0 && col < COL);
}

bool isUnBlocked(std::vector<std::vector<int>>& map, int row, int col) 
{
	return (map[row][col] == 0);
}

double GethValue(int row, int col, Pair dst) 
{
	return (double)std::sqrt(std::pow(row - dst.first, 2) + std::pow(col - dst.second, 2));
}

void tracePath(Cell cellDetails[MAX][MAX], Pair dst) 
{
	std::stack<Pair> s;
	int y = dst.first;
	int x = dst.second;

	s.push({ y, x });
	// cellDetails�� x, y�� �θ���ǥ�� ��� ������ǥ�� �����Ҷ����� �ݺ�
	while (!(cellDetails[y][x].parent_x == x && cellDetails[y][x].parent_y == y)) 
	{
		int tempy = cellDetails[y][x].parent_y;
		int tempx = cellDetails[y][x].parent_x;
		y = tempy;
		x = tempx;
		s.push({ y, x });
	}

	while (!s.empty()) 
	{
		zmap[s.top().first][s.top().second] = '*';
		PrintMap();
		Sleep(600);
		system("cls");
		s.pop();
	}
}

bool aStarSearch(std::vector<std::vector<int>>& map, Pair src, Pair dst) 
{
	if (!isInRange(src.first, src.second) || !isInRange(dst.first, dst.second)) return false;
	if (!isUnBlocked(map, src.first, src.second) || !isUnBlocked(map, dst.first, dst.second)) return false;
	if (isDestination(src.first, src.second, dst)) return false;

	bool closedList[MAX][MAX];
	std::memset(closedList, false, sizeof(closedList));

	Cell cellDetails[MAX][MAX];

	// �����ʱ�ȭ
		// �� ���� ���� �������̴ϴ�. (�ִ������˰���� ����)
		// ����ؾ��� ���κ��� INF���ϰ�, ����� ��δ� -1�� �ʱ�ȭ
	for (int i = 0; i < ROW; ++i) 
	{
		for (int j = 0; j < COL; ++j) 
		{
			cellDetails[i][j].f = cellDetails[i][j].g = cellDetails[i][j].h = INF;
			cellDetails[i][j].parent_x = cellDetails[i][j].parent_y = -1;
		}
	}

	// src�� ��ǥ�� ù��ǥ�� �ȴ�.
	int sy = src.first;
	int sx = src.second;
	cellDetails[sy][sx].f = cellDetails[sy][sx].g = cellDetails[sy][sx].h = 0.0;
	cellDetails[sy][sx].parent_x = sx;
	cellDetails[sy][sx].parent_y = sy;

	std::set<pPair> openList;
	openList.insert({ 0.0, { sy, sx } });

	// �� �ݺ����� bfs�� ��û �Ȱ����ϴ�.
	while (!openList.empty()) 
	{
		pPair p = *openList.begin();
		openList.erase(openList.begin());

		int y = p.second.first;
		int x = p.second.second;
		closedList[y][x] = true;

		double ng, nf, nh;

		// ����
		for (int i = 0; i < 4; ++i) 
		{
			int ny = y + dy1[i];
			int nx = x + dx1[i];

			if (isInRange(ny, nx)) 
			{
				if (isDestination(ny, nx, dst)) 
				{
					cellDetails[ny][nx].parent_y = y;
					cellDetails[ny][nx].parent_x = x;
					tracePath(cellDetails, dst);
					return true;
				}

				// bfs�� ���� �����ڸ�, closedList�� �湮���ζ�� �����Ͻø� �˴ϴ�.
				else if (!closedList[ny][nx] && isUnBlocked(map, ny, nx)) 
				{
					// �̺κ� y x, ny nx �򰥸��°� ����
					ng = cellDetails[y][x].g + 1.0;
					nh = GethValue(ny, nx, dst);
					nf = ng + nh;

					// ���� �ѹ��� ������ �ȵ�f�ų�, ���ΰ��ŵ� f�� ����f���� ������ ��
					if (cellDetails[ny][nx].f == INF || cellDetails[ny][nx].f > nf) 
					{
						cellDetails[ny][nx].f = nf;
						cellDetails[ny][nx].g = ng;
						cellDetails[ny][nx].h = nh;
						cellDetails[ny][nx].parent_x = x;
						cellDetails[ny][nx].parent_y = y;
						openList.insert({ nf, { ny, nx } });
					}
				}
			}
		}

		// �밢��
		for (int i = 0; i < 4; ++i) 
		{
			int ny = y + dy2[i];
			int nx = x + dx2[i];

			if (isInRange(ny, nx)) 
			{
				if (isDestination(ny, nx, dst)) 
				{
					cellDetails[ny][nx].parent_y = y;
					cellDetails[ny][nx].parent_x = x;
					tracePath(cellDetails, dst);
					return true;
				}
				else if (!closedList[ny][nx] && isUnBlocked(map, ny, nx))
				{
					ng = cellDetails[y][x].g + 1.414;
					nh = GethValue(ny, nx, dst);
					nf = ng + nh;

					if (cellDetails[ny][nx].f == INF || cellDetails[ny][nx].f > nf) 
					{
						cellDetails[ny][nx].f = nf;
						cellDetails[ny][nx].g = ng;
						cellDetails[ny][nx].h = nh;
						cellDetails[ny][nx].parent_x = x;
						cellDetails[ny][nx].parent_y = y;
						openList.insert({ nf, { ny, nx } });
					}
				}
			}
		}
	}

	return false;
}

void PrintMap() 
{
	for (int i = 0; i < ROW; ++i) 
	{
		for (int j = 0; j < COL; ++j) 
		{
			std::cout << zmap[i][j];
		}
		std::cout << '\n';
	}
}

std::vector<std::vector<int>> fileload(std::string filepath) 
{
	std::ifstream ifs(filepath);

	int col, row, cur = 0;

	if (ifs.is_open()) 
	{
		ifs >> ROW >> COL;
		std::vector<std::vector<int>> result(ROW, std::vector<int>(COL));

		for (int i = 0; i < ROW; ++i) 
		{
			for (int j = 0; j < COL; ++j) 
			{
				ifs >> result[i][j];
			}
		}

		return result;
	}

	return std::vector<std::vector<int>>();
}

int main() // 0: �� ����, 1: ��, 2: �������, 3: �������� 
{
	Pair src, dst;
	int row, col;

	/// ���1 - ������ ���� �Է��ϱ� 
	/*
	std::cin >> row >> col;
	ROW = row;
	COL = col;

	std::vector<std::vector<int>> grid(row, std::vector<int>(col));

	for(int i=0;i<row;++i){
		for(int j=0;j<col;++j){
			std::cin >> grid[i][j];
		}
	}*/

	/// ���2 - ���Ϸ� ���� ������ �ҷ����� 
	std::vector<std::vector<int>> grid = fileload("MAP2.txt");
	if (grid.empty()) return -1;

	for (int i = 0; i < ROW; ++i) 
	{
		for (int j = 0; j < COL; ++j) 
		{
			if (grid[i][j] == 2)
			{
				src = { i, j };
				grid[i][j] = 0;
			}
			if (grid[i][j] == 3)
			{
				dst = { i, j };
				grid[i][j] = 0;
			}
		}
	}

	for (int i = 0; i < ROW; ++i) 
	{
		for (int j = 0; j < COL; ++j)
		{
			zmap[i][j] = grid[i][j] + '0';
		}
	}

	if (aStarSearch(grid, src, dst)) PrintMap();
	else std::cout << "����.";

	return 0;
}