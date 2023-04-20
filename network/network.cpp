#include "network.h"
#include <algorithm>

int network::initialize(int layerSize[], int arrSize) {
	//numOfLayers = sizeof(layerSize) / sizeof(layerSize[0]);
	numOfLayers = arrSize;

	totalLength = 0;
	for (int idx = 0; idx < numOfLayers; ++idx) {
		if (layerSize[idx] > 0) {
			totalLength += layerSize[idx];

		} else {
			totalLength = 0;
			numOfLayers = 0;

			// each layer must have at least 1 node
			return 1;
		}
	}

	weight = (double *)malloc(sizeof(double) * totalLength);

	eachLayerSize = (int *)malloc(sizeof(int) * numOfLayers);
	memcpy(eachLayerSize, layerSize, numOfLayers);

	return 0;
}