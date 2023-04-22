#include <iostream>
#include "network.h"

int main() {

	network nw = network();

	int val = nw.setAdjFunc(nullptr);

	std::cout << val << std::endl;

	return 0;
}