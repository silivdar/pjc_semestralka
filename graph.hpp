//
//  graph.hpp
//  pjc_semestralka
//
//  Created by Daria Silivonenko on 12/12/2018.
//  Copyright © 2018 Daria Silivonenko. All rights reserved.
//

#ifndef graph_hpp
#define graph_hpp

#include <stdio.h>

struct Edge {
    
    int v1, v2, w; // dva vrcholy tvorici hranu a vaha
};

struct Graph {
    
    int V, E; // pocet vsech vrcholu a pocet vsech hran grafu
    
    Edge* edge; // pole hran tvorici graf
};

struct Component {
  
    int parent, rank; //rodic a stupen
};

int findComp(struct Component components[], int k);

void unionComp(struct Component components[], int n, int m);

#endif /* graph_hpp */
