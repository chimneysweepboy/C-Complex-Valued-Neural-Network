#include <Eigen/Dense>
#include <complex>
#include <iostream>

// Defining basic types
using Scalar = std::complex<double>;
using CMatrix = Eigen::MatrixXcd;
using CVector = Eigen::VectorXcd;

// Activation function logic
Scalar ModRelu(Scalar z, double threshold) {
  double abs_z = std::abs(z);
  if (abs_z == 0.0) {
    return Scalar(0.0, 0.0);
  }
  Scalar result = std::max(0.0, abs_z + threshold) * (z / abs_z);
  return result;
}

// Forward pass logic
Scalar NeuronFunction(CVector input, CVector weights, Scalar bias,
                      double threshold = -0.1) {
  return ModRelu(weights.dot(input) + bias, threshold);
}

CVector LayerForward(CVector Inputs, CMatrix Weights, CVector Biases,
                     double threshold) {
  CVector Layer = Weights * Inputs + Biases;
  CVector Output(Layer.size());
  for (Eigen::Index i = 0; i < Layer.size(); ++i)
    Output[i] = ModRelu(Layer[i], threshold);
  return Output;
}

struct Layer {
  CMatrix weights;
  CVector biases;
  double threshold = -0.1;

  CVector Forward(CVector input) {
    return LayerForward(input, weights, biases, threshold);
  }
};

struct FullNetwork {
  std::vector<Layer> Layers;

  CVector ForwardProp(CVector input) {
    CVector Activation = input;
    for (Layer layer : Layers) {
      Activation = layer.Forward(Activation);
    }
    return Activation;
  }
};
