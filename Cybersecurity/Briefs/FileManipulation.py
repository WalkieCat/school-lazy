#Reading and printing a file's content
with open('Cybersecurity\Briefs\PiDigits.txt', 'r') as file_object:
    contents = file_object.read()
    print(contents.rstrip())
#rstrip() supposed to delete the blank lines at the end of the string

#Reading a file line by line
with open('Cybersecurity\Briefs\PiDigits.txt', 'r') as file_object:
    for lines in file_object:
        print(lines.strip())

#Read a file in a list for later use
#Check Adam's github for more examples
with open("Cybersecurity\Briefs\PiDigits.txt") as file_object:
    lines = file_object.readlines()

pi_string = ""

for line in lines:
    pi_string += line.rstrip()

print(pi_string)

#Writing to an empty file
filename = 'Programming.txt'
with open(filename, 'w') as file_object:
    file_object.write('I love programming\n')
    file_object.write('Programming is fun\n')

#Appending to the end of a file
filename = 'Programming.txt'
with open(filename, 'w') as file_object:
    file_object.write('I love programming\n')
    file_object.write('Programming is fun\n')

with open (filename, 'a') as file_object:
    file_object.write('I love finding meaning in large data sets.\n')
    file_object.write('I wanna off myself')

