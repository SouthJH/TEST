#include <math.h>
#include "act_functions.h"

double SIGMOID::act(double input) {
	return 1.0 / (1.0 + exp(-input));
}
double SIGMOID::dct(double input) {
	double value = act(input);
	return value * (1.0 - value);
}
