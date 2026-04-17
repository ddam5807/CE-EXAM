#dictionary 자료형 공부

def cleanText(text):
    for i in range(len(text)):
        if(text[i] in ',;:-'): #키보드에 있는 거 보면서 치면 됩니다(까지가 내 답)
            text = text[:i] + text[i:] #text[i:] -> text[i+1:]
    return text.lower()
def wordFrequency(cleanText):
    key = cleanText.slice() #split이다 븅
    result = {}
    for i in range(len(key)):
        if(key[i] in result.keys()):
            result[key[i]] += 1 #result[key(i)] += 1
        else:
            result = dict(key[i],1) #result[key(i)] = 1
    return result

num = 0
most = 0
print('Input string')
userInput = input()
userInput = cleanText(userInput)
result = wordFrequency(userInput)
for i in range(len(list(result.keys()))):
    print(list(result.keys())[i]+':', list(result.values())[i])
    if(num < list(result.values())[i]):
        most = list(result.keys())[i]
        num = list(result.values())[i]
print('The most frequent word: '+most)