#Practicing Python
#String:
familyName = "Nguyen"
givenName = "Minh"
out = f"My name is {familyName} {givenName}"
print(f"{out}\n")

#Lists:
#Goal: understand how list work and how to manipulate lists
#shields = ['round', 'buckler', 'heater']
#print(shields)
#shields[0] = 'kite'
#print(shields)
#shields.append('targe')
#print(shields)
#shields.insert(0, 'pavise')
#print(shields)
#del shields[0] #removing an element from a list
#print(shields)
#shields.remove('heater')
#print(shields)

#Iterating through list
knights = ["joe", "joe1", "joe3"]
for knight in knights:
  print(knight)
print("\n")

squareNumber = []
for num in range(1, 5):
  square = num**2
  squareNumber.append(square)
print(squareNumber)
print(max(squareNumber))
print(min(squareNumber))
print(sum(squareNumber))
print("\n")

#Conditions
utensils = ["Spoon", "Spatula", "Chopsticks", "Knife"]
for stuff in utensils:
  if stuff == "Knife":
    print(stuff.upper())
  else:
    print(stuff.title())
print("\n")

myGuests = ["hey", "hey1", "hey2", "hey3"]
for guest in myGuests:
  print(f'Hello, how are you {guest}?')
print("\n")

moving = ["tank", "tank1", "tank2", "tank3"]
for move in moving:
  print(f"I want {move} for my birthday")
print("\n")

history = ["Stalin", "Hitler", "Churchil"]
for man in history:
  print(f"Please dinner {man}")
  if man == "Stalin":
    print(f"Bruh {man} cannot make it")
  else:
    print(f"Please come dinner, {man}")
history[0] = "Eisenhower"
for remaining in history:
  print(f"Then please come dinner, {remaining}")
print("\n")

#Looping
for i in reversed(range(1, 11)):
  print(i)
print("\n")

for i in range(1, 11):
  if i % 2 == 0:
    print(i)
print("\n")

squareI = 0
for i in range(1, 11):
  squareI = i**2
  print(squareI)
print("\n")

for i in range(20, 31):
  print(i)
print("\n")

sums = 0
for i in range(1, 101):
  sums += i
print(sums)

for i in range(1, 11):
  if i > 5:
    break
  else:
    print(i)
print("\n")

for i in range(1, 11):
  if i == 6:
    continue
  print(i)
print("\n")

#Functioning
def display_message():
  print("Hello, we are learning stuff")
display_message()

def best_friend(name):
  print(f"Hello, {name}")
best_friend("Timmy")
print("\n")

x = int(input("Enter number: "))
if x % 2 == 0:
  print("Even")
else:
  print("Odd")
print("\n")

#Check again (u messed up the logic)
string = input("Enter string: ")
if string:
  print("Ain't null bruh")
else:
  print("Nulled bruh")

numeral = int(input("Enter number: "))
if numeral > 0:
  print("Pos")
else:
  print("Neg")
print("\n")

option = int(input("NUMBER: "))
if 0 < option < 10:
  print("In range 0 to 10")
elif 20 < option < 30:
  print("In range 20 to 30")
else: 
  print("Not in either range")

theString = input("Give goddamn string: ")
if "a" in theString and "b" in theString:
  print("Yeah bruh")
else:
  print("Nah bruh")

#Opening file, reading and
#with open("filenane.txt", "r") as file:
    #for line in file:
      #nameParts = studentName.split()
      #formater = nameParts[0] + ' ' + nameParts[1]
      #print(formater)

def make_shirt(size, message):
  print(f"Making a shirt of size {size} with '{message}'")

def s_shirt(message):
  make_shirt("S", message)
def m_shirt(message):
  make_shirt("M", message)
def l_shirt(message):
  make_shirt("L", message)

s_shirt("Hello")
m_shirt("Goodbye")
l_shirt("Moon men")

# Create a dictionary of fruit prices
prices = {
    'apple': 0.5,
    'banana': 0.25,
    'orange': 0.75
}

# Print out the values using a loop
for value in prices.values():
    print(f"The prices are: {value}")

favNum = {
  'John': 25,
  'Christina': 6,
  'Pasha': 89,
  'Thom': 14,
  'Azhar': 99
}

for name, numbers in favNum.items():
  print(name + "'s favorite number is " + str(numbers))