#include "adj_functions.h"

#define	errCode	0x1000


class network {

private:
	double *weight;
	
	int numOfLayers;
	int totalLength;
	int *eachLayerSize;

	AdjFunction adjFunc;

public:

	network() {
		numOfLayers = 0;
		totalLength = 0;

		eachLayerSize = nullptr;
		weight = nullptr;

		adjFunc = fullyConnectedNetwork();
	}

	int setAdjFunc(AdjFunction _adjFunc);
	int initialize(int layerSize[], int arrSize);
};