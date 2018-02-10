#include "Graph.h"
#include <iostream>

using namespace std;

void Graph::initialize(){
for(int i=0;i<maxVerticies;i++){
    for(int j=0;j<maxVerticies;j++){
        edges[i][j]=INF;
    }
}
}

Graph::Graph()
{
    numVerticies=0;
    maxVerticies=50;
    initialize();
}

Graph::~Graph()
{
    makeEmpty();
}

bool Graph::isEmpty(){
return numVerticies==0;
}
bool Graph::isFull(){
return (numVerticies=maxVerticies);
}
void Graph::makeEmpty(){
numVerticies=0;
}



void Graph::addVertex(Vertex *v){
    verticies[numVerticies]=v;
    numVerticies++;
}

int Graph::indexOf(Vertex *v){
for(int i=0;i<maxVerticies;i++){
    if(v->num==verticies[i]->num)
        return i;
}
return -1;
}

int Graph::weightIs(Vertex *v,Vertex *w){
int x=indexOf(v);
int y=indexOf(w);
return edges[x][y];
}

void Graph::addEdge(Vertex *v,Vertex *w,int d){
int x=indexOf(v);
int y=indexOf(w);
 edges[x][y]=d;

}

void Graph::printVerticies(){
if(isEmpty())
    return;
cout<<"Verticiesdist "<<endl;

for(int i=0;i<numVerticies;i++){
    cout<<"  "<<verticies[i]->num<<" "<<verticies[i]->dist<<endl;
}
cout<<endl;
}

void Graph::printEdges(){
if(isEmpty())
    cout<<"there is no vertex in the graph"<<endl;
    for(int i=0;i<numVerticies;i++){
        cout<<" "<<i;
    }
    cout<<endl;
    cout<<endl;
    for(int i=0;i<numVerticies;i++){
        cout<<i<<" ";
        for(int j=0;j<numVerticies;j++){
            if(weightIs(verticies[i],verticies[j])==INF)
                cout<<"  *" <<" ";
            else
                cout<<" "<<weightIs(verticies[i],verticies[j])<<" ";

        }
        cout<<endl<<endl;
    }
    cout<<endl;
}




