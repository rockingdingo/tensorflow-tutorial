/*
 *  model_loader_base.h
 *
 *  Created on: 2017年7月7日
 *      Author: Derek
 */

#ifndef MODEL_LOADER_BASE_H_
#define MODEL_LOADER_BASE_H_

#include <iostream>
#include <vector>
#include "tensorflow/core/public/session.h"
#include "tensorflow/core/platform/env.h"

using namespace tensorflow;

namespace tf_model {

/**
 * Base Class for feature adapter, common interface convert input format to tensors
 * */
class FeatureAdapterBase{
public:
    FeatureAdapterBase() {};

    virtual ~FeatureAdapterBase() {};

    virtual void assign(std::string, std::vector<double>*) = 0;  // tensor_name, tensor_double_vector

    std::vector<std::pair<std::string, tensorflow::Tensor> > input;

};

class ModelLoaderBase {
public:

    ModelLoaderBase() {};

    virtual ~ModelLoaderBase() {};

    virtual int load(tensorflow::Session*, const std::string) = 0;     //pure virutal function load method

    virtual int predict(tensorflow::Session*, const FeatureAdapterBase&, const std::string, double*) = 0;

    tensorflow::GraphDef graphdef; //Graph Definition for current model

};

}
#endif /* MODEL_LOADER_BASE_H_ */
