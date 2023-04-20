#define	errCode	0x1000


class network {

private:
	double *weight;
	
	int numOfLayers;
	int totalLength;
	int *eachLayerSize;

public:

	network() {
		numOfLayers = 0;
		totalLength = 0;

		eachLayerSize = nullptr;
		weight = nullptr;
	}

	int initialize(int layerSize[], int arrSize);
};