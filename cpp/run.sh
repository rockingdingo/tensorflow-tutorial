#!/bin/bash

folder_dir=`pwd`
model_path=${folder_dir}/model/nn_model_frozen.pb

#cp binary to root folder
cp ./bin/tfcpp_demo ./tfcpp_demo

./tfcpp_demo ${model_path}

