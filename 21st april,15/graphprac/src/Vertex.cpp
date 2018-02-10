#include "Vertex.h"

Vertex::Vertex()
{
   num=0;
   dist=0;
}

void Vertex::initializer(int x,int y){
num=x;
dist=y;
}

Vertex::~Vertex()
{
    //dtor
}
