import random

def selectAnswer(wordList):
    Answer = wordList[random.randint(1,len(wordList) + 1)]
    return Answer
def getInput():
    while 1:
        print('Input 5 letters')
        userInput = 0
        userInput = input()
        if(userInput != userInput.lower()): #처음에 여기 처리를 못 했었음
            print('UPPER is an invalid input.Try again')
        else:
            return userInput
def checkLetters(inputLetters):
    for i in range(0,len(inputLetters)):
        if(inputLetters[i] in answer):
            if(inputLetters[i] == answer[i]):
                print('G',end='')
            else:
                print('Y',end='')
        else:
            print('B',end='')
    #print("\n")
words = ['apple', 'bound', 'nasty', 'seven', 'world', 'piano', 'green', 'woman','dream', 'death']
answer = selectAnswer(words)
trial = 0

while(trial <= 5):
    n = getInput() #변수 이름이 내장 함수랑 겹치면 안 됨
    checkLetters(n)
    if(n == answer):
        print('You Win!')
        break
    trial += 1
if(trial == 6): print('You Lose!') #if 넣어야 승리시 you lose가 출력되지 않음