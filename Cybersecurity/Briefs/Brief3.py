for i in reversed(range(1, 11)):
    print(i)

for i in range(1, 11):
    if i % 2 == 0:
        print(i)

SquareSum = 0
for i in range(1,11):
    SquareSum += i ** 2
print(SquareSum)

for i in range(20, 31):
    print(i)

SumOfNumber = 0
for i in range(1, 101):
    SumOfNumber += i
print(SumOfNumber)

for i in range(1, 10):
    if i <= 5:
        print(i)

EvenSum = 0
for i in range (1, 11):
    if i % 2 == 0:
        EvenSum += i
        if i == 6:
            break
print(EvenSum) #Weird ass thing going on here

count = 0
odd_num = 0
for i in range(1, 21):
    if i % 2 == 0:
        odd_num += 1
        if odd_num == 5:
            break
    count += 1
print(odd_num)

i = 0
while i < 10:
    i = i + 1
print(i)

#Make the rest into a while loop 