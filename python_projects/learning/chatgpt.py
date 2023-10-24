# 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
import os
import openai

openai.api_key = "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"

prompt_input = input("type in something \n")

response = openai.Completion.create(
  model="text-davinci-003",
  prompt=(prompt_input),
  temperature=0.5,
  max_tokens=3000,
  n=1,
  stop=None,
)

print(response["choices"][0]["text"])