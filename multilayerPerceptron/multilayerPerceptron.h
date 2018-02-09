#ifndef multilayerPerceptron
#define mutlilayerPerceptron

#pragma once

class neuralNetwork
{
private:
	array<int, 3> modelShape;
	int numberOfLayers;
public:
	neuralNetwork(int ms[]);
	void initVariables(int model);
	float sigmoid(float x);
	float sigmoidDerivative(float x);
	void feedforward();
	void backpropagate();
	void stochasticGradientDescent();
};


#endif;
