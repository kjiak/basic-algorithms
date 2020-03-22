basic-algorithms: basic-algorithms.cpp dfs.h bfs.h
	g++ -g basic-algorithms.cpp -o basic-algorithms
run: SHELL:=/bin/bash
run: basic-algorithms
	time ./basic-algorithms
