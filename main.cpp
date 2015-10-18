/* 
Author: Aniket Deshmukh,Sneha Goenka
17th October 2015
CAD Project: Logic Simulation
*/

#include <stdio.h>
#include <iostream>
#include <math.h>
#include <vector>
#include "computeOutput.h"

using namespace std;

//function to print the adjacency matrix
void printMat(vector<vector<int> > &adj_matrix){
	int N=adj_matrix[0].size();
	int i,j=0;
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%d ",adj_matrix[i][j]);		
		}	
		printf("\n");
	}
}
 
int main(int argc, char** argv) {

	// Number of gates
	int NUM_NODES = 7;
	//adjacency matrix
	vector<vector<int> > adj_matrix(NUM_NODES, std::vector<int>(NUM_NODES));
	//vector for the various gates as the nodes
	vector<node> gates(NUM_NODES);
	//signal vector
	vector<int> signal(NUM_NODES);
	
	/* 
	Define adjacency matrix here 
	*/
	
	// Set input nodes and initial conditions
	
/*	gates[3].delay=2;
	gates[3].logic="or";
	gates[4].delay=2;
	gates[4].logic="not";
	gates[5].delay=2;
	gates[5].logic="not";
	gates[6].delay=2;
	gates[6].logic="nand";
	signal[2]=1;
	adj_matrix[1][3]=1;
	adj_matrix[2][3]=1;
	adj_matrix[3][4]=1;
	adj_matrix[3][5]=1;
	adj_matrix[5][6]=1;
	adj_matrix[2][6]=1;
	printMat(adj_matrix);

	int val=computeOutput(3,gates[3],adj_matrix,signal);
	printf("%d \n",val);
	val=computeOutput(4,gates[4],adj_matrix,signal);
	printf("%d \n",val);
	val=computeOutput(5,gates[5],adj_matrix,signal);
	printf("%d \n",val);
	val=computeOutput(6,gates[6],adj_matrix,signal);
	printf("%d \n",val);*/

	// Begin simulation
		

	return 0;
}
	
