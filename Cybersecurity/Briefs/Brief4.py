def display_message():
    print("Hello!")
display_message()

def best_friend(name):
    return f'My best friend is {name}'
the_friend = 'Tommy'
print(best_friend(the_friend))

#functions are fun af (please kill me)

def make_shirt(size, message):
    print(f"Making a {size}-sized shirt with the message '{message}'")

def s_shirts(message):
    make_shirt("S", message)

def m_shirts(message):
    make_shirt("M", message)

def l_shirts(message):
    make_shirt("L", message)

#Call the function by the name of the function and the message you want to print
s_shirts("Hello")
m_shirts("Goodbye")
l_shirts("Moon men")

def describe_city(city, country = "Australia"):
    return f'{city} is in {country}'

print(describe_city("Sydney"))
print(describe_city("Paris", "France"))