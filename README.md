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
[AI VIDEO GENERATOR Reviews](http://www.deepnlp.org/store/video-generator) <br>
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
[Robot Quadruped Robot Reviews](http://www.deepnlp.org/store/quadruped-robot) <br>
[Robot Humanoid Robot Reviews](http://www.deepnlp.org/store/humanoid-robot) <br>
[Robotaxi Reviews](http://www.deepnlp.org/store/robotaxi) <br>
[Electric Vehicle Reviews](http://www.deepnlp.org/store/electric-vehicle) <br>
[ChatGPT User Reviews](http://www.deepnlp.org/store/pub/pub-chatgpt-openai) <br>
[Gemini User Reviews](http://www.deepnlp.org/store/pub/pub-gemini-google) <br>
[Perplexity User Reviews](http://www.deepnlp.org/store/pub/pub-perplexity) <br>
[Claude User Reviews](http://www.deepnlp.org/store/pub/pub-claude-anthropic) <br>
[Midjourney User Reviews](http://www.deepnlp.org/store/pub/pub-midjourney) <br>
[Stable Diffusion User Reviews](http://www.deepnlp.org/store/pub/pub-stable-diffusion) <br>
[Runway User Reviews](http://www.deepnlp.org/store/pub/pub-runway) <br>
[GPT-5 Forecast](http://www.deepnlp.org/store/pub/pub-gpt-5) <br>
[Generative AI Search Engine Optimization](http://www.deepnlp.org/blog/generative-ai-search-engine-optimization-how-to-improve-your-content)

## DeepNLP AI & Robots Community Communities

[DeepNLP AI & Robots Community for AI Practitioner](http://www.deepnlp.org/question) <br>
[Would you share your experience using AI Productivity Tools such as AI Writing Coding CoPilot](http://www.deepnlp.org/question/would-you-share-your-experience-using-ai-productivity-tools-such-as-ai-writing-coding-copilot) <br>
[What are the features you need for AI Video Generator apps and tools](http://www.deepnlp.org/question/what-are-the-features-you-need-for-ai-video-generator-apps-and-tools) <br>
[Which one is the best AI Video Generator Runway Luma Pika Kling and Why](http://www.deepnlp.org/question/which-one-is-the-best-ai-video-generator-runway-luma-pika-kling-and-why) <br>
[What are the typical use scenarios of Quadruped Robot Dogs](http://www.deepnlp.org/question/what-are-the-typical-use-scenarios-of-quadruped-robot-dogs) <br>
[Humanoid Robot Husband Vote for the most popular appearance of Humanoid Robot Husband](http://www.deepnlp.org/question/humanoid-robot-husband-vote-for-the-most-popular-appearance-of-humanoid-robot-husband) <br>
[Humanoid Robot Wife Who would you choose your humanoid robot wife to look like human females](http://www.deepnlp.org/question/humanoid-robot-wife-who-would-you-choose-your-humanoid-robot-wife-to-look-like-human-females) <br>
[What are the most important features Humanoid Robot should have in the future](http://www.deepnlp.org/question/what-are-the-most-important-features-humanoid-robot-should-have-in-the-future) <br>
[What are the typical use cases of Humanoid Robots](http://www.deepnlp.org/question/what-are-the-typical-use-cases-of-humanoid-robots) <br>


## Related Blog
[Statistics Equation Formula](http://www.deepnlp.org/blog/statistics-equations-latex-code) <br>
[Machine Learning Equation Formula](http://www.deepnlp.org/blog/latex-code-machine-learning-equations) <br>
[Introduction to multimodal generative models](http://www.deepnlp.org/blog/introduction-to-multimodal-generative-models) <br>
[Generative AI Search Engine Optimization: How to Improve Your Content](http://www.deepnlp.org/blog/generative-ai-search-engine-optimization-how-to-improve-your-content) <br>
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
[DeepNLP Review Panel](http://www.deepnlp.org/review) <br>
[DeepNLP Car Review Panel](http://www.deepnlp.org/review/car) <br>
[DeepNLP Ecommerce Review Panel](http://www.deepnlp.org/review/ecommerce) <br>
[DeepNLP Ecommerce Bags Review Panel](http://www.deepnlp.org/review/ecommerce/bag) <br>
[DeepNLP Watch Bags Review Panel](http://www.deepnlp.org/review/ecommerce/watch) <br>
[DeepNLP Review Ecommerce Brand List](http://www.deepnlp.org/review/ecommerce/pub) <br>
[DeepNLP Review Car Brand List](http://www.deepnlp.org/review/car/pub) <br>
