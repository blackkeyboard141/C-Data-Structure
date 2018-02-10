#ifndef GRAPH_H
#define GRAPH_H
#define INF 111
#include "Vertex.h"


class Graph
{
    public:
        Graph();
        ~Graph();
        bool isFull();
        bool isEmpty();
        void makeEmpty();
        void initialize();
        void addVertex(Vertex *v);
        int indexOf(Vertex *v);
        void addEdge(Vertex *v , Vertex *w, int);
        int weightIs(Vertex *v, Vertex *w);
        void printVerticies();
        void printEdges();

    protected:
    private:
        int numVerticies;
        int maxVerticies;
        Vertex *verticies[50];
        int edges[50][50];
};

#endif // GRAPH_H
