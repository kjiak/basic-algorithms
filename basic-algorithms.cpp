#include "pch.h"
#include <iostream>
#include <list>
#include "dfs.h"
#include "bfs.h"
using namespace std;

int main()
{
	//DFS
	// Create a graph given in the above diagram 
	DFSGraph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);

	cout << "Following is Depth First Traversal"
		" (starting from vertex 2) \n";
	g.DFS(2);

	return 0;

	////BFS
	//// Create a graph given in the above diagram 
	//BFSGraph g(4);
	//g.addEdge(0, 1);
	//g.addEdge(0, 2);
	//g.addEdge(1, 2);
	//g.addEdge(2, 0);
	//g.addEdge(2, 3);
	//g.addEdge(3, 3);

	//cout << "Following is Breadth First Traversal "
	//	<< "(starting from vertex 2) \n";
	//g.BFS(2);

	//return 0;
}

