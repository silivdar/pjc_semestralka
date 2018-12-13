//
//  graph.cpp
//  pjc_semestralka
//
//  Created by Daria Silivonenko on 12/12/2018.
//  Copyright © 2018 Daria Silivonenko. All rights reserved.
//

#include "graph.hpp"

int findComp(struct Component components[], int k){
    
    if(components[k].parent != k){
        components[k].parent = findComp(components, components[k].parent);
    }
    
    return components[k].parent;
}

void unionComp(struct Component components[], int n, int m){
    
    int nroot = findComp(components, n);
    int mroot = findComp(components, m);
    
    if(components[nroot].rank < components[mroot].rank){
        components[nroot].parent = mroot;
    }else if(components[nroot].rank > components[mroot].rank){
        components[mroot].parent = nroot;
    }else{
        components[mroot].parent = nroot;
        components[nroot].rank++;
    }
}
