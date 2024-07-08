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

====================================================

# Related
====================================================

## References
[DeepNLP Blog](http://www.deepnlp.org/blog) <br>
[DeepNLP Equation](http://www.deepnlp.org/equation) <br>
[DeepNLP Search](http://www.deepnlp.org/search) <br>
[DeepNLP AI Courses](http://www.deepnlp.org/workspace/ai_courses) <br>
[DeepNLP AIGC Chart](http://www.deepnlp.org/workspace/aigc_chart) <br>
[DeepNLP AI Writer](http://www.deepnlp.org/workspace/ai_writer) <br>
[DeepNLP Workspace](http://www.deepnlp.org/workspace/detail) <br>
[DeepNLP AI App Store](http://www.deepnlp.org/store) <br>
[AI IMAGE GENERATOR](http://www.deepnlp.org/store/image-generator) <br>
[AI Search Engine](http://www.deepnlp.org/store/search-engine)  <br>
[AI Chatbot Assistant](http://www.deepnlp.org/store/chatbot-assistant)  <br>
[AI for ELDERLY](http://www.deepnlp.org/store/elderly)  <br>
[AI for KIDS](http://www.deepnlp.org/store/kids)  <br>
[AI in LAW](http://www.deepnlp.org/store/law) <br>
[AI in FINANCE](http://www.deepnlp.org/store/finance) <br>
[AI in HEALTHCARE](http://www.deepnlp.org/store/healthcare)  <br>
[AI in BUSINESS](http://www.deepnlp.org/store/business)  <br>
[AI in EDUCATION](http://www.deepnlp.org/store/education) <br>
[AI in PRODUCTIVITY TOOL](http://www.deepnlp.org/store/productivity-tool) <br>
[AI in POLITICS](http://www.deepnlp.org/store/politics) <br>
[AI in ENTERTAINMENT](http://www.deepnlp.org/store/entertainment) <br>
[AI in NEWS](http://www.deepnlp.org/store/news) <br>
[AI in ART AND SPORTS](http://www.deepnlp.org/store/art-and-sports) <br>
[AI in LIFESTYLE](http://www.deepnlp.org/store/lifestyle) <br>
[AI in PAYMENT](http://www.deepnlp.org/store/payment) <br>
[AI in SOCIAL](http://www.deepnlp.org/store/social) <br>
[AI in AGRICULTURE](http://www.deepnlp.org/store/agriculture) <br>
[AI in SCIENCE](http://www.deepnlp.org/store/science) <br>
[AI in TECHNOLOGY](http://www.deepnlp.org/store/technology) <br>
[AI in TRAVEL](http://www.deepnlp.org/store/travel) <br>
[AI in TRANSPORTATION](http://www.deepnlp.org/store/transportation) <br>
[AI in CAR](http://www.deepnlp.org/store/car) <br>
[AI in CHARITY](http://www.deepnlp.org/store/charity) <br>
[AI in PUBLIC SERVICE](http://www.deepnlp.org/store/public-service) <br>
[AI in HOUSING](http://www.deepnlp.org/store/housing) <br>
[AI in COMMUNICATION](http://www.deepnlp.org/store/communication) <br>
[AI in FOOD](http://www.deepnlp.org/store/food) <br>

## Related Blog
[Statistics Equation Formula](http://www.deepnlp.org/blog/statistics-equations-latex-code) <br>
[Machine Learning Equation Formula](http://www.deepnlp.org/blog/latex-code-machine-learning-equations) <br>
[AI Courses for Kids](http://www.deepnlp.org/blog/how-to-use-generative-ai-to-draw-paw-patrol-dog-skye) <br>
[AI in Fashion: Tell IWC Schaffhausen Watches Real or Fake](http://www.deepnlp.org/blog/how-to-tell-iwc-schaffhausen-watches-real-or-fake-20-steps) <br>
[AI in Fashion: Tell Fendi bags real or fake](http://www.deepnlp.org/blog/how-to-tell-fendi-bags-real-or-fake-20-steps) <br>
[AI in Fashion: Tell Coach bags real or fake](http://www.deepnlp.org/blog/how-to-tell-coach-bags-real-or-fake-20-steps) <br>
[AI in Fashion: Tell Prada bags real or fake](http://www.deepnlp.org/blog/how-to-tell-prada-bags-real-or-fake-20-steps) <br>
[AI in Fashion: Tell Gucci bags real or fake](http://www.deepnlp.org/blog/20-tricks-to-tell-gucci-bags-real-or-fake) <br>
[AI in Fashion: Tell Dior bags real or fake](http://www.deepnlp.org/blog/tell-dior-bags-real-or-fake-20-steps) <br>
[AI in Fashion: Tell Hermes bags real or fake](http://www.deepnlp.org/blog/20-tricks-to-tell-hermes-bags-real-or-fake) <br>
[AI in Fashion: Tell Chanel bags real or fake](http://www.deepnlp.org/blog/20-tricks-to-tell-chanel-bags-real-or-fake) <br>
[AI in Fashion: Tell Louis Vuitton bags real or fake](http://www.deepnlp.org/blog/20-tricks-to-tell-louis-vuitton-bags-real-or-fake) <br>
[AI in Fashion: Tell Omega Watches real or fake](http://www.deepnlp.org/blog/20-tricks-to-tell-if-omega-watch-is-real-or-fake) <br>
[AI in Fashion: Tell Rolex Watches real or fake](http://www.deepnlp.org/blog/20-tricks-to-tell-if-rolex-watch-is-real-or-fake) <br>
