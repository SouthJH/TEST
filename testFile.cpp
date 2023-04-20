#include <stdio.h>
#include "network/network.h"

int main() {

	network nw = network(3);

	printf(nw.numOfLayers);

	return 0;
}