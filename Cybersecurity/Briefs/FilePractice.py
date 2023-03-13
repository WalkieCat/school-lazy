#In order: Read a file by printing all lines, by looping over, by turning it into a list
#with open ('Cybersecurity\Briefs\Learning_Python.txt') as file_object: 
    #contents = file_object.read()
    #print(contents)

#with open('Cybersecurity\Briefs\Learning_Python.txt') as file_object:
    #for lines in file_object:
        #print(lines.strip())

#with open('Cybersecurity\Briefs\Learning_Python.txt') as file_object:
    #lines = file_object.readlines()
#for line in lines:
    #print(line.strip())

#Replacing words in file
#This should work but I don't know what's wrong with it
#So i guess I will leave it like this
with open('Cybersecurity\Briefs\Learning_Python.txt') as file_object:
    lines = file_object.readlines()
    modified_lines = []
    for line in lines:
        modified_lines.append(line.replace("Python", "C"))

for lines in modified_lines:
    print(lines.rstrip())