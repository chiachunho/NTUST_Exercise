// Student ID: B10615043
// Date: May 30, 2019
// Last Update: May 30, 2019
// Problem statement: This C++ program for singly connected problem.
#include <iostream>
#include <vector>

using namespace std;

struct node
{
	int color = 0;		// 0 = white; 1 = gray; 2 = black;
	int parent = -1;	// -1 = NULL;
	int discover = 0;	// discover time
	int finish = 0;		// finish time
	vector<int> adj;	// adjacencyList
};

bool DFS_Visit(node* G, int uIndex, int &time);

int main()
{
	int N;
	// input total case number 
	while (cin >> N)
	{
		for (int i = 0; i < N; i++)
		{
			// flag to record this graph singly connected or not
			bool singly = true;

			int V;
			// input Vertex amount
			cin >> V;
			// create Vector list
			node *list = new node[V];

			int E;
			// input Edge amount
			cin >> E;
			for (int j = 0; j < E; j++)
			{
				int a, b;
				// input connect vertex info to adjacency list
				cin >> a >> b;
				list[a].adj.push_back(b);
			}

			int time = 0;

			// consider all vertex begin to DFS condition
			for (int j = 0; j < V; j++)
			{
				// reset all vertex info but adjacency list
				for (int k = 0; k < V; k++)
				{
					list[k].color = 0;
					list[k].parent = -1;
					list[k].finish = 0;
					list[k].discover = 0;
				}

				// call DFS_Visit Function to determine singly connected
				singly = DFS_Visit(list, j, time);
				// if already not singly connected break the loop
				if (singly == false) break;
			}

			// output case number and singly connect or not
			if (singly) cout << i + 1 << " YES" << endl;
			else cout << i + 1 << " NO" << endl;

			// delete list to free memory
			delete[] list;
		}
	}
	return 0;
}

// Based on Slide Page 45 DFS-VISIT(G, u)
bool DFS_Visit(node* G, int u, int & time)
{
	// while vertex u has just discoverd
	time = time + 1;
	G[u].discover = time;

	// set the color white to gray
	G[u].color = 1;

	for (int i = 0; i < G[u].adj.size(); i++)
	{
		// explore edge (u, v)
		int v = G[u].adj[i];

		// if edge is tree edge
		if (G[v].color == 0)
		{
			// set parent and go on DFS-Visit
			G[v].parent = u;
			// if return false then also return false to speed up program
			if (!DFS_Visit(G, v, time)) return false;
		}
		
		// if edge is forward or cross edge then return false
		else if (G[v].color == 2)
		{
			return false;
		}
	}
	// blacken u, it is finished
	G[u].color = 2;
	time = time + 1;
	G[u].finish = time;

	// success DFS visit(G, u) no encounter forward or cross edge return true
	return true;
}
