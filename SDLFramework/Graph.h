#pragma once
#include "Vertex.h"
#include <vector>
#include <list>
#include <queue>

using std::vector;
using std::list;
using std::queue;

class Graph
{
private:
	vector<Vertex*>* m_Vertices;
	Vertex* m_VertexCow;
	Vertex* m_VertexRabbit;

	vector<Vertex*>* m_ClosedList;
	queue<Vertex*>* m_OpenList;
	list<Vertex*>* m_Route;
	void calculateRoute();

public:
	Graph(FWApplication* application);
	void addVertex(Vertex* vertex);
	void nextStep();
	~Graph();
};

