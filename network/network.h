
class network {

private:
	double *weight;

public:
	int numOfLayers;
	int *layerSize;

	network(int numOfLayers) {
		numOfLayers = numOfLayers;
	}

	int initialize();
};