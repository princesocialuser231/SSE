import os #Import the built-in OS module 

# Get the list of files and folders in the current directory
files = os.listdir()

# Print them one bye one 
print("Contents of the current directory: ")
for f in files:
    print(f)