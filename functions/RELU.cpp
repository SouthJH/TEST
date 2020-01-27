#include "act_functions.h"

double RELU::act(double input) {
	return input < 0 ? 0 : input;
}

double RELU::dct(double input) {
	return input < 0 ? 0 : 1;
}
