#include <string.h>

class AdjFunction {
private:
	std::string name = "default";

public:
	AdjFunction() { }

	void setName(std::string _name) {
		name = _name;
	}
	std::string getName() {
		return name;
	}

	bool isConnected(int LeftLayer, int LeftPerceptron, int RightLayer, int RightPerceptron) {
		return true;
	}
};


class fullyConnectedNetwork : public AdjFunction {};
class convolutionalNeuralNetwork : public AdjFunction {};