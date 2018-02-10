#include <iostream>
#include "Graph.h"
#include "Vertex.h"


using namespace std;

int main()
{
    Vertex* v0;
    Vertex* v1;
    Vertex* v2;
    Vertex* v3;
    Graph g;

    v0->initializer(0,INF);
    v1->initializer(1,INF);
    v2->initializer(2,INF);
    v3->initializer(3,INF);



    g.addVertex(v0);
    g.addVertex(v1);
    g.addVertex(v2);
    g.addVertex(v3);
    g.addEdge(v1,v0,5);
    g.addEdge(v0,v3,1);
    g.addEdge(v3,v0,3);
    g.addEdge(v2,v3,8);
    g.addEdge(v1,v2,3);
    g.addEdge(v3,v1,2);

    g.printEdges();


}
