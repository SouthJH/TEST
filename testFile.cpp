#include <iostream>
#include "network.h"

int main() {

	network nw = network();

	int val = nw.setAdjFunc(convolutionalNeuralNetwork());

	std::cout << val << std::endl;

	return 0;
}