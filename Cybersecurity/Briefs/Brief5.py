#Make a list of name, then print a message to them
names = ['joe', 'manning', 'howitzer']
for name in names:
    print('Hello', name)

#Make a list of your favorite mode of transport
transports = ['motorcycle', 'sports car', 'tank']
for mode in transports:
    print('I want a', mode)

#Inviting people from the past for a dinner
guests = ['Stalin', 'Ho Chi Minh', 'Vo Nguyen Giap']
for guest in guests:
    if guest == 'Stalin':
        print('Mr. Stalin cannot join us for dinner')
guests[0] = 'Vo Thi Sau'
for remaining in guests: 
    print('The remaining guest who will be joining are: ', remaining)
