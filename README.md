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


# DeepNLP AI APP Store
DeepNLP AI Store (http://www.deepnlp.org/store) is a newly released website to let users write genuine reviews, ratings, human evaluation, prompts and share use cases
about detailed aspects of AI services from users' perspective (different from researchers' perspective like the LLM/MultiModal benchmarks). 
We want to build the "Yelp" for AI and Robotics community and ease the burden of customers choosing various AI services. 

![image text](./store/image_generator.jpg "AI Image Generator Reviews and Ratings")


## Detailed AI Service Use Case
Users can write detailed reviews about some functions about an AI service (ChatGPT/Gemini/Perplexity/Midjourney/) like how AI is doing on "Correct Grammarly Mistakes in Essays", 
"Acting like doctors about Illness", or text-to-image ability like "Generate Cartoon Characters", "Draw Picture of Fantasy Humanoid", by uploading the screenshots
of a conversation or the generated images of AI image generator.

## Multi-Aspect Rating
Users can write review and give overall rating from 1 to 5 to each function of AI service, 
as well as give detailed rating of different aspects of each function, including "Correctness", "Helpfulness" and "Interesting", 
and customized aspects of each function, such as "Clarity of image", "Image Resolution", "Artistic", "Grammar", "Succintness" and more.

![image text](./store/image_generator_example_1.jpg "AI Image Generator Reviews and Ratings Comments 1")


## All Categories and People Groups
We cover 30+ different categories of use cases, such as 
AI Image Generators, AI Assistant & Chatbot, AI Translator, AI Search Engine,
AI for kids, AI for adults, AI for elderly, AI in TRAVEL, AI in TRANSPORTATION
AI in HEALTHCARE, AI in BUSINESS, AI in FINANCE, AI in EDUCATION, AI in PRODUCTIVITY TOOL,
AI in POLITICS,  AI in ENTERTAINMENT, AI in NEWS, AI in ART AND SPORTS, AI in LIFESTYLE
AI in PAYMENT, AI in SOCIAL, AI in AGRICULTURE
AI in SCIENCE, AI in TECHNOLOGY, AI in TRAVEL, AI in TRANSPORTATION, AI in CAR, AI in CHARITY
AI in PUBLIC SERVICE, AI in HOUSING, AI in LAW, AI in COMMUNICATION, AI in FOOD


## Reviews and Rating of AI App Store By Categories

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




## AI Store of Image Generator

[Best AI Tools in Image Generator User Ratings Reviews and Showcase](http://www.deepnlp.org/store/image-generator) <br>

![image text](./store/image_generator.jpg "AI Image Generator Reviews and Ratings")

DeepNLP AI store is a platform and community for user to write genuine user reviews and ratings of AI apps and services. User can upload pictures as showcase of AI Image Generator,
such as Midjourney, Canva, Stable Diffusion, etc. People can write reviews about some common user prompts (questions or intents), such as "Generate Cartoon Characters", "Draw Fantacy and Humanoids", "Plot Architecture" and more.

![image text](./store/image_generator_example_1.jpg "AI Image Generator Reviews and Ratings Comments 1")
![image text](./store/image_generator_example_2.jpg "AI Image Generator Reviews and Ratings Comments 2")

### ShowCases
[Use Midjourney to Generate Cartoon Characters](http://www.deepnlp.org/store/image-generator/cartoon-character/pub-midjourney/use-midjourney-to-generate-cartoon-characters) <br>
[Use Midjourney to Draw Fantacy and Humanoids](http://www.deepnlp.org/store/image-generator/fantacy/pub-midjourney/use-midjourney-to-draw-fantacy-and-humanoids) <br>
[Use Midjourney to Plot Architecture](http://www.deepnlp.org/store/image-generator/architecture/pub-midjourney/use-midjourney-to-plot-architecture)
[Use Stable Diffusion to Generate Cartoon Characters](http://www.deepnlp.org/store/image-generator/cartoon-character/pub-stable-diffusion/use-stable-diffusion-to-generate-cartoon-characters)
[Use Stable Diffusion to Generate Fantacy and Humanoids](http://www.deepnlp.org/store/image-generator/fantacy/pub-stable-diffusion/use-stable-diffusion-to-generate-fantacy-and-humanoids)
[Use Canva to Draw Fantacy and Humanoids](http://www.deepnlp.org/store/image-generator/fantacy/pub-canva/use-canva-to-draw-fantacy-and-humanoids)



## AI Store in Law
[Best AI in Law and Legal User Ratings Reviews and Showcase](http://www.deepnlp.org/store/law) <br>

![image text](./store/ai_for_law.jpg "AI for Law and Legal Reviews and Ratings")


Unlike most Large Language Models(LLM) benchmark and arena's win-rate metric, which is quite difficult for customers to understand (1 vs 1 metric), users' reviews on DeepNLP AI store is about AI tool's performance in a detailed subfield of the industry, such as "Ask ChatGPT Employment Law Related Questions" and "Ask Gemini Contracts and Agreements Related Questions". Users can give rating from 1 to 5 stars on different aspects of the answeres generated by AI systems, including "Overall", "Correctness", "Helpfulness", "Interesting". They can also give rating to any customized aspect of the service, such as "whether the information is realtime", "generation speed", and many others. Here, we are going to cover different sub areas of AI in Law, includine Employment Law, Contracts and Agreements, Business and Corporate Law, Real Estate, Family Law, Personal Injury, Criminal Law, Immigration Law, and Civil Rights Law, etc.


Prompts (Questions) exmaples
- You are a lawyer specialized in employment Law. I will consult you a few questions. And my questions include "Can my employer fire me without cause and how much compensation can I get if I live in California?". 
- What are my rights regarding workplace discrimination?
- Act as an employment law expert and please answer this question "Can I fight for unjustified evaluation if I am placed on performance improvement plan?".



### Employment Law
[Best AI in Employment Law](http://www.deepnlp.org/store/law/employment-law)  <br>
[ask-chatgpt-employment-law-related-questions](http://www.deepnlp.org/store/law/employment-law/pub-chatgpt-openai/ask-chatgpt-employment-law-related-questions)  <br>
[ask perplexity ai employment law related questions](http://www.deepnlp.org/store/law/employment-law/pub-perplexity/ask-perplexity-ai-employment-law-related-questions)  <br>
[ask gemini employment law related questions](http://www.deepnlp.org/store/law/employment-law/pub-gemini-google/ask-gemini-employment-law-related-questions)  <br>
[ask claude employment law related questions](http://www.deepnlp.org/store/law/employment-law/pub-claude-anthropic/ask-claude-employment-law-related-questions)  <br>


### Contracts and Agreements
[Best AI in Contracts and Agreements](http://www.deepnlp.org/store/law/contracts-and-agreements) <br>
[Ask perplexity ai contracts and agreements related questions](http://www.deepnlp.org/store/law/contracts-and-agreements/pub-perplexity/ask-perplexity-ai-contracts-and-agreements-related-questions)  <br>
[Ask chatgpt contracts and agreements related questions](http://www.deepnlp.org/store/law/contracts-and-agreements/pub-chatgpt-openai/ask-chatgpt-contracts-and-agreements-related-questions)  <br>
[Ask gemini contracts and agreements related questions](http://www.deepnlp.org/store/law/contracts-and-agreements/pub-gemini-google/ask-gemini-contracts-and-agreements-related-questions)  <br>
[Ask claude contracts and agreements related questions](http://www.deepnlp.org/store/law/contracts-and-agreements/pub-claude-anthropic/ask-claude-contracts-and-agreements-related-questions)  <br>


###  Business and Corporate Law
[Best AI in Business and Corporate Law](http://www.deepnlp.org/store/law/business-and-corporate-law)
[ask gemini business and corporate law related questions](http://www.deepnlp.org/store/law/business-and-corporate-law/pub-gemini-google/ask-gemini-business-and-corporate-law-related-questions)  <br>
[ask chatgpt business and corporate law related questions](http://www.deepnlp.org/store/law/business-and-corporate-law/pub-chatgpt-openai/ask-chatgpt-business-and-corporate-law-related-questions)  <br>
[ask perplexity ai business and corporate law related questions](http://www.deepnlp.org/store/law/business-and-corporate-law/pub-perplexity/ask-perplexity-ai-business-and-corporate-law-related-questions)  <br>
[ask claude business and corporate law related questions](http://www.deepnlp.org/store/law/business-and-corporate-law/pub-claude-anthropic/ask-claude-business-and-corporate-law-related-questions)  <br>


### Real Estate
[Best AI in Real Estate Law](http://www.deepnlp.org/store/law/real-estate)
[ask-chatgpt-real-estate-related-questions](http://www.deepnlp.org/store/law/real-estate/pub-chatgpt-openai/ask-chatgpt-real-estate-related-questions) <br>
[ask-perplexity-ai-real-estate-related-questions](http://www.deepnlp.org/store/law/real-estate/pub-perplexity/ask-perplexity-ai-real-estate-related-questions) <br>
[ask-gemini-real-estate-related-questions](http://www.deepnlp.org/store/law/real-estate/pub-gemini-google/ask-gemini-real-estate-related-questions) <br>
[ask claude real estate related questions](http://www.deepnlp.org/store/law/real-estate/pub-claude-anthropic/ask-claude-real-estate-related-questions) <br>


### Civil Rights Law
[Best AI in Civil Rights Law](http://www.deepnlp.org/store/law/civil-rights-law) <br>
[ask perplexity ai civil rights law related questions](http://www.deepnlp.org/store/law/civil-rights-law/pub-perplexity/ask-perplexity-ai-civil-rights-law-related-questions) <br>
[ask gemini civil rights law related questions](http://www.deepnlp.org/store/law/civil-rights-law/pub-gemini-google/ask-gemini-civil-rights-law-related-questions) <br>
[ask chatgpt civil rights law related questions](http://www.deepnlp.org/store/law/civil-rights-law/pub-chatgpt-openai/ask-chatgpt-civil-rights-law-related-questions) <br>
[ask claude civil rights law related questions](http://www.deepnlp.org/store/law/civil-rights-law/pub-claude-anthropic/ask-claude-civil-rights-law-related-questions) <br>


### Family Law
[Best AI in Family Law](http://www.deepnlp.org/store/law/family-law)
[Ask chatgpt family law and related question](http://www.deepnlp.org/store/law/family-law/pub-chatgpt-openai/ask-chatgpt-family-law-and-related-question) <br>
[Ask claude family law related questions](http://www.deepnlp.org/store/law/family-law/pub-claude-anthropic/ask-claude-family-law-related-questions) <br>
[Ask perplexity ai family law related questions](http://www.deepnlp.org/store/law/family-law/pub-perplexity/ask-perplexity-ai-family-law-related-questions) <br>
[Ask gemini family law related questions](http://www.deepnlp.org/store/law/family-law/pub-gemini-google/ask-gemini-family-law-related-questions) <br>


### Personal Injury
[Best AI in Personal Injury](http://www.deepnlp.org/store/law/personal-injury) <br>
[Ask perplexity ai personal injury law and accidents related question](http://www.deepnlp.org/store/law/personal-injury/pub-perplexity/ask-perplexity-ai-personal-injury-law-and-accidents-related-question) <br>
[Ask chatgpt personal injury law and accidents related question](http://www.deepnlp.org/store/law/personal-injury/pub-chatgpt-openai/ask-chatgpt-personal-injury-law-and-accidents-related-question) <br>
[Ask claude personal injury law and accidents related question](http://www.deepnlp.org/store/law/personal-injury/pub-claude-anthropic/ask-claude-personal-injury-law-and-accidents-related-question) <br>
[Ask gemini personal injury law and accidents related question](http://www.deepnlp.org/store/law/personal-injury/pub-gemini-google/ask-gemini-personal-injury-law-and-accidents-related-question) <br>

### Criminal Law
[Best AI in Criminal Law](http://www.deepnlp.org/store/law/criminal-law)
[Ask gemini criminal law related questions](http://www.deepnlp.org/store/law/criminal-law/pub-gemini-google/ask-gemini-criminal-law-related-questions) <br>
[Ask perplexity ai criminal law related questions](http://www.deepnlp.org/store/law/criminal-law/pub-perplexity/ask-perplexity-ai-criminal-law-related-questions) <br>
[Ask chatgpt criminal law related questions](http://www.deepnlp.org/store/law/criminal-law/pub-chatgpt-openai/ask-chatgpt-criminal-law-related-questions) <br>
[Ask claude criminal law related questions](http://www.deepnlp.org/store/law/criminal-law/pub-claude-anthropic/ask-claude-criminal-law-related-questions) <br>

### Immigration Law
[Best AI in immigration law](http://www.deepnlp.org/store/law/immigration-law)
[Ask perplexity ai immigration law related questions](http://www.deepnlp.org/store/law/immigration-law/pub-perplexity/ask-perplexity-ai-immigration-law-related-questions) <br>
[Ask gemini immigration law related questions](http://www.deepnlp.org/store/law/immigration-law/pub-gemini-google/ask-gemini-immigration-law-related-questions) <br>
[Ask chatgpt immigration law related questions](http://www.deepnlp.org/store/law/immigration-law/pub-chatgpt-openai/ask-chatgpt-immigration-law-related-questions) <br>
[Ask gemini criminal law related questions](http://www.deepnlp.org/store/law/criminal-law/pub-gemini-google/ask-gemini-criminal-law-related-questions) <br>


## AI in Finance: User Ratings, Reviews and Showcase

[Best AI in Finance User Ratings Reviews and Showcase](http://www.deepnlp.org/store/finance) <br>

![image text](./store/ai_for_finance.jpg "AI for Finance Reviews and Ratings")

Prompts (Questions)
- You are an expert in stock investment, and I will consult you a few questions. The questions include "Is Tesla a buy stock? Should I sell Nvidia stock after financial report season?"
- Please act as a trader. Please answer this question "Summarize Nvidia's GAAP Financial Report Q4 FY24 statistics and compare P/E ratio with other tech company such as google and apple"
- Act as a financial analyst and "Please draw a bar chart comparing the market capital of Google, Apple, Tesla, Nvidia and Microsoft."


### AI in Investment Finance
[Best AI in Investment Finance](http://www.deepnlp.org/store/finance/investment) <br>
[Ask chatgpt facts about investment and seek advice](http://www.deepnlp.org/store/finance/investment/pub-chatgpt-openai/ask-chatgpt-facts-about-investment-and-seek-advice) <br>
[Ask Gemini Facts about Investment and Seek Advice](http://www.deepnlp.org/store/finance/investment/pub-gemini-google/ask-gemini-facts-about-investment-and-seek-advice) <br>
[Ask Claude INVESTMENT Related Questions](http://www.deepnlp.org/store/finance/investment/pub-claude-anthropic/ask-claude-investment-related-questions) <br>
[Ask Perplexity AI INVESTMENT Related Questions](http://www.deepnlp.org/store/finance/investment/pub-perplexity/ask-perplexity-ai-investment-related-questions) <br>


### AI in INSURANCE Finance
[Best AI in Finance INSURANCE User Ratings Reviews and Showcase](http://www.deepnlp.org/store/finance/insurance) <br>
[Ask Gemini INSURANCE Related Questions](http://www.deepnlp.org/store/finance/insurance/pub-gemini-google/ask-gemini-insurance-related-questions) <br>
[Ask Perplexity AI INSURANCE Related Questions](http://www.deepnlp.org/store/finance/insurance/pub-perplexity/ask-perplexity-ai-insurance-related-questions) <br>
[Ask ChatGPT INSURANCE Related Questions](http://www.deepnlp.org/store/finance/insurance/pub-chatgpt-openai/ask-chatgpt-insurance-related-questions) <br>
[Ask Claude INSURANCE Related Questions](http://www.deepnlp.org/store/finance/insurance/pub-claude-anthropic/ask-claude-insurance-related-questions) <br>

### AI in Mortgage and Loan Finance
[Best AI in Mortgage Loan Finance](http://www.deepnlp.org/store/finance/mortgage-&-loan) <br>
[Ask ChatGPT MORTGAGE & LOAN Related Questions](http://www.deepnlp.org/store/finance/mortgage-&-loan/pub-chatgpt-openai/ask-chatgpt-mortgage-&-loan-related-questions) <br>
[Ask Gemini MORTGAGE & LOAN Related Questions](http://www.deepnlp.org/store/finance/mortgage-&-loan/pub-chatgpt-openai/ask-gemini-mortgage-&-loan-related-questions) <br>
[Ask Claude MORTGAGE & LOAN Related Questions](http://www.deepnlp.org/store/finance/mortgage-&-loan/pub-claude-anthropic/ask-claude-mortgage-&-loan-related-questions) <br>
[Ask Perplexity AI MORTGAGE & LOAN Related Questions](http://www.deepnlp.org/store/finance/mortgage-&-loan/pub-perplexity/ask-perplexity-ai-mortgage-&-loan-related-questions) <br>


### AI in BANKING Finance
[Best AI in BANKING Finance](http://www.deepnlp.org/store/finance/banking) <br>
[Ask Perplexity AI BANKING Related Questions](http://www.deepnlp.org/store/finance/banking/pub-perplexity/ask-perplexity-ai-banking-related-questions) <br>
[Ask Gemini BANKING Related Questions](http://www.deepnlp.org/store/finance/banking/pub-gemini-google/ask-gemini-banking-related-questions) <br>
[Ask ChatGPT BANKING Related Questions](http://www.deepnlp.org/store/finance/banking/pub-chatgpt-openai/ask-chatgpt-banking-related-questions) <br>
[Ask Claude BANKING Related Questions](http://www.deepnlp.org/store/finance/banking/pub-claude-anthropic/ask-claude-banking-related-questions) <br>


### AI in DEBT Finance
[Best AI in Debt Finance](http://www.deepnlp.org/store/finance/debt) <br>
[Ask Claude DEBT Related Questions](http://www.deepnlp.org/store/finance/debt/pub-claude-anthropic/ask-claude-debt-related-questions) <br>
[Ask ChatGPT DEBT Related Questions](http://www.deepnlp.org/store/finance/debt/pub-chatgpt-openai/ask-chatgpt-debt-related-questions) <br>
[Ask Gemini DEBT Related Questions](http://www.deepnlp.org/store/finance/debt/pub-gemini-google/ask-gemini-debt-related-questions) <br>
[Ask Perplexity AI DEBT Related Questions](http://www.deepnlp.org/store/finance/debt/pub-perplexity/ask-perplexity-ai-debt-related-questions) <br>


## AI in Healthcare
[Best AI in Healthcare User Ratings Reviews and Showcase](http://www.deepnlp.org/store/healthcare/) <br>

### HOSPITAL APPOINTMENT
[Best AI in HOSPITAL APPOINTMENT](http://www.deepnlp.org/store/healthcare/hospital-appointment)

### HOSPITAL
[Best AI in Hospital Healthcare](http://www.deepnlp.org/store/healthcare/hospital)

### AI in ILLNESS
[Best AI in ILLNESS Healthcare](http://www.deepnlp.org/store/healthcare/illness)

### MEDICINE
[Best AI in Medicine Healthcare](http://www.deepnlp.org/store/healthcare/medicine)

### NURSING
[Best AI in NURSING Healthcare](http://www.deepnlp.org/store/healthcare/nursing)

### BEAUTY
[Best AI in BEAUTY Healthcare](http://www.deepnlp.org/store/healthcare/nursing)

### ELDERLY CARE
[Best AI in ELDERLY CARE](http://www.deepnlp.org/store/healthcare/elderly-care)

### MEDICAL INSTRUMENT
[Best AI in MEDICAL INSTRUMENT](http://www.deepnlp.org/store/healthcare/medical-instrument)


## AI for Elderly: User Ratings, Reviews and Showcase
[Best AI for Elderly User Ratings, Reviews and Showcase](http://www.deepnlp.org/store/elderly) <br>

Prompts (Questions) exmaples
What are the side effects of [medication]?
How can I manage [illness]?

e.g. 
What are the side effects of Tylenol?
How can I manage arthritis pain?


### ShowCases
[Elderly People Ask Gemini Personal Hobbies Related Questions](http://www.deepnlp.org/store/elderly/hobby/pub-gemini-google/elderly-people-ask-gemini-personal-hobbies-related-questions) <br>
[Elderly People Ask Gemini Legal Questions](http://www.deepnlp.org/store/elderly/legal/pub-gemini-google/elderly-people-ask-gemini-legal-questions) <br>
[Elderly People Ask Gemini Health and Medicine Related Questions](http://www.deepnlp.org/store/elderly/health/pub-gemini-google/elderly-people-ask-gemini-health-and-medicine-related-questions) <br>
[Elderly People Ask ChatGPT Health and Medicine Related Questions](http://www.deepnlp.org/store/elderly/health/pub-chatgpt-openai/elderly-people-ask-chatgpt-health-and-medicine-related-questions) <br>
[Elderly People Ask Perplexity AI Health and Medicine Related Questions](http://www.deepnlp.org/store/elderly/health/pub-perplexity/elderly-people-ask-perplexity-ai-health-and-medicine-related-questions) <br>
[Elderly People Ask Claude Health and Medicine Related Questions](http://www.deepnlp.org/store/elderly/health/pub-claude-anthropic/elderly-people-ask-claude-health-and-medicine-related-questions) <br>


## AI for Kids: User Ratings, Reviews and Showcase

[Best AI for Kids User Ratings, Reviews and Showcase](http://www.deepnlp.org/store/kids)

Prompts (Questions) exmaples

### STORY TELLING for KIDS
1. Please tell me a bedtime story about unicorns for my 4 years old daughter.
2. Help me write a story about Paw Patrol Dogs Fighting Bad Guys

### DRAWING|AIGC
1. Help me Draw a picture about Paw Patrol Dogs Chase Driving Police Car
2. Help me Draw a picture Peppa Pig playing in the swimming pool

ShowCases
[Ask Gemini to Tell a Bedtime Story](http://www.deepnlp.org/store/kids/story-telling/pub-gemini-google/ask-gemini-to-tell-a-bedtime-story)
[Ask Gemini to Draw Cartoon Characters](http://www.deepnlp.org/store/kids/drawing/pub-gemini-google/ask-gemini-to-draw-cartoon-characters)
[Ask Gemini to Tell a Bedtime Story](http://www.deepnlp.org/store/kids/story-telling/pub-chatgpt-openai/ask-chatgpt-to-tell-a-bedtime-story)
[Ask ChatGPT to Draw Cartoon Character](http://www.deepnlp.org/store/kids/drawing/pub-chatgpt-openai/ask-chatgpt-to-draw-cartoon-character)


## AI in LifeStyle
[Best AI in LifeStyle User Ratings, Reviews and Showcase](http://www.deepnlp.org/store/lifestyle)

Prompts (Questions) exmaples

#### Act as ${role}
I want you to respond and answer like ${role} using the tone, manner that ${role} would use. Do not write any explanations. My first sentence is ${your_question}.

#### ShowCases
[Ask ChatGPT to Act As Lovers in a Relationship](http://www.deepnlp.org/store/lifestyle/relationship/pub-chatgpt-openai/ask-chatgpt-to-act-as-lovers-in-a-relationship) <br>
[Ask Gemini to Act As Lovers in a Relationship](http://www.deepnlp.org/store/lifestyle/relationship/pub-gemini-google/ask-gemini-to-act-as-lovers-in-a-relationship) <br>
[Ask Character AI to Act As Lovers in a Relationship](http://www.deepnlp.org/store/lifestyle/relationship/pub-character-ai/ask-character-ai-to-act-as-lovers-in-a-relationship) <br>
[Ask Doubao to Act As Lovers in a Relationship](http://www.deepnlp.org/store/lifestyle/relationship/pub-doubao-douyin/ask-doubao-to-act-as-lovers-in-a-relationship) <br>
[Ask Qwen AI from Alibaba to Act As Lovers in a Relationship](http://www.deepnlp.org/store/lifestyle/relationship/pub-qwen-alibaba/ask-qwen-ai-from-alibaba-to-act-as-lovers-in-a-relationship) <br>
[Ask Zhipu AI to Act As Lovers in a Relationship](http://www.deepnlp.org/store/lifestyle/relationship/pub-zhipu-ai/ask-zhipu-ai-to-act-as-lovers-in-a-relationship) <br>

## AI in Productivity Tool
[Best AI in Productivity Tool User Ratings, Reviews and Showcase](http://www.deepnlp.org/store/productivity-tool)

![image text](./store/ai_productivity_tool.jpg "AI Productivity Tool")

### Writing Tool
[Best AI in Writing Tool](http://www.deepnlp.org/store/productivity-tool/writing)

### Research Analysis
[Best AI in Research & Analysis](http://www.deepnlp.org/store/productivity-tool/research-&-analysis)

###  Programming
[Best AI in Programming](http://www.deepnlp.org/store/productivity-tool/programming)

Prompts:
Show me the ${programming language} code of ${algorithm}, no explanation.
Write the ${programming language} to implement ${function}, no explanation.
Generate the ${programming language} code of a ${description} website, no explanation.
Find the ${statistic} from ${data_source} and display in ${format}.

e.g. 
1. Show me the latex code of KL Divergence
2. Write the python code for QuickSort Implementation
3. Generate the html code of a login page of a community website, no explanation.
4. Find the 2023 divorce rate of all states in US and display in the table and line chart.


#### ShowCase
##### Programming
[Gemini for Programming](http://www.deepnlp.org/store/productivity-tool/programming/pub-gemini-google/gemini-for-programming)
[ChatGPT for Programming](http://www.deepnlp.org/store/productivity-tool/programming/pub-chatgpt-openai/chatgpt-for-programming)

##### Plot Chat
[Use ChatGPT to Draw Plot of Math Function](http://www.deepnlp.org/store/productivity-tool/research-&-analysis/pub-chatgpt-openai/use-chatgpt-to-draw-plot-of-math-function)
##### Data Analysis
[Use Gemini to Conduct Data Analysis](http://www.deepnlp.org/store/productivity-tool/research-&-analysis/pub-gemini-google/use-gemini-to-conduct-data-analysis)



## Related
http://www.deepnlp.org/blog/ <br>
http://www.deepnlp.org/equation/ <br>
http://www.deepnlp.org/search/ <br>
http://www.deepnlp.org/workspace/ai_courses/ <br>
http://www.deepnlp.org/workspace/aigc_chart/ <br>
http://www.deepnlp.org/workspace/ai_writer/ <br>
http://www.deepnlp.org/workspace/detail/ <br>


