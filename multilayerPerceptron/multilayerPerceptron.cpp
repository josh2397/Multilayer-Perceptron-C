// multilayerPerceptron.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "multilayerPerceptron.h"

int main()
{
    return 0;
}

/*
Requirements - Use the modelShape array to initialise the weights and biases of the network
-
*/


#include <math.h>
#include <random>   
#include <array>
#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <cstdlib>

using namespace std;

neuralNetwork::neuralNetwork(int ms[])
{
	modelShape = ms;
	numberOfLayers = sizeof(modelShape);
}


float neuralNetwork::sigmoid(float x)
{
	return 1 / 1 + exp(x);
}

float neuralNetwork::sigmoidDerivative(float x)
{
	return sigmoid(x) * (1 / -sigmoid(x));
}


void neuralNetwork::initVariables(int modelShape)
{   /*
	TODO - Generate intial weight values for the modelShape
	- as specified by the network hyperparameters
	-
	*/

	array<float, 1> weights;
	array<float, 1> bias;

	for (int n = 0; n < sizeof(modelShape) / sizeof(modelShape[0]); n++)
	{
		for (int j = 0; j < modelShape[&n]; j++)
		{
			std::random_device rd;
			std::mt19937 gen(rd);
			std::uniform_real_distribution<> dis(-1.0, 1.0);


		}
	}
	//Print out initial weight and bias values
	for (int i = 0; i < (sizeof(modelShape) / sizeof(modelShape[0])); i++)
	{
		vector<float>;
	}
}

void neuralNetwork::feedforward()
{

}

void neuralNetwork::backpropagate()
{

}

void neuralNetwork::stochasticGradientDescent()
{

}

int main(int argc, char *argv[])
{
	/*
	neuralNetwork({784, 30, 10});

	*/
}
