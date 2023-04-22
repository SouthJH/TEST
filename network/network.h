#include "adj_functions.h"

#define	errCode	0x1000


class network {

private:
	double *weight;
	
	int numOfLayers;
	int totalLength;
	int *eachLayerSize;

	bool (*adjFunc)(int, int);

public:

	network() {
		numOfLayers = 0;
		totalLength = 0;

		eachLayerSize = nullptr;
		weight = nullptr;

		adjFunc = fullyConnected;
	}

	int setAdjFunc(bool (*adjFunction)(int, int));
	int initialize(int layerSize[], int arrSize);
};