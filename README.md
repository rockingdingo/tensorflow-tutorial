Tensorflow CPP API demo
--------------------------------------
Tensorflow cpp API 调用python预训练模型

###Python定义NN模型训练

```python

cd cpp/scripts

python nn_model.py   # 训练nn模型对Iris数据集分类

sh build.sh          # 运行 freeze_graph.py 将*.ckpt 参数文件和 nn_model.pbtxt 模型定义文件绑定, 输出 nn_model_frozen.pb

# 成功标志: 
# Converted 2 variables to const ops.
# 9 ops in the final graph.

```

###编译CPP项目进行预测

```python
cd ../

make        # 编译cpp代码的demo, 编译好的可执行文件在 ./bin/tfcpp_demo 文件夹下

sh run.sh   # 运行可执行文件 tfcpp_demo, 读取python预训练好的模型 ./model/nn_model_frozen.pb  进行预测

```
