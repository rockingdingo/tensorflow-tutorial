/*
 * main.cpp
 *
 *  Created on: 2017年7月7日
 *      Author: Derek
 */

#include <iostream>
#include "tensorflow/core/public/session.h"
#include "tensorflow/core/platform/env.h"
#include "ann_model_loader.h"

using namespace tensorflow;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "WARNING: Input Args missing" << std::endl;
        return 0;
    }
    std::string model_path = argv[1];  // Model_path *.pb file

    // TensorName pre-defined in python file, Need to extract values from tensors
    std::string input_tensor_name = "inputs";
    std::string output_tensor_name = "output_node";

    // Create New Session
    Session* session;
    Status status = NewSession(SessionOptions(), &session);
    if (!status.ok()) {
        std::cout << status.ToString() << "\n";
        return 0;
    }

    // Create prediction demo
    tf_model::ANNModelLoader model;  //Create demo for prediction
    if (0 != model.load(session, model_path)) {
        std::cout << "Error: Model Loading failed..." << std::endl;
        return 0;
    }

    // Define Input tensor and Feature Adapter
    // Demo example: [1.0, 1.0, 1.0, 1.0, 1.0] for Iris Example, including bias
    int ndim = 5;
    std::vector<double> input;
    for (int i = 0; i < ndim; i++) {
        input.push_back(1.0);
    }

    // New Feature Adapter to convert vector to tensors dictionary
    tf_model::ANNFeatureAdapter input_feat;
    input_feat.assign(input_tensor_name, &input);   //Assign vec<double> to tensor

    // Make New Prediction
    double prediction = 0.0;
    if (0 != model.predict(session, input_feat, output_tensor_name, &prediction)) {
        std::cout << "WARNING: Prediction failed..." << std::endl;
    }
    std::cout << "Output Prediction Value:" << prediction << std::endl;

	return 0;
}
