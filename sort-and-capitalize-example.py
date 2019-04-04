f = raw_input('Which file do you want?')
file = open(f,'r')

print file.read()

file.close()

file = open(f,'w') 
 
file.write('Hello World\n') 
file.write('This is our new text file\n') 
file.write('and this is another line.\n') 
file.write('Why? Because we can.\n') 
 
file.close() 
