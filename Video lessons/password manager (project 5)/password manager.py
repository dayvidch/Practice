from cryptography.fernet import Fernet
# in terminal enter: pip install cryptography

'''
def write_key():
    key = Fernet.generate_key()
    with open ("key.key", "wb") as key_file: #opens a file called key.key in wb mode as key_file
        key_file.write(key) #write in key that was generated in line 7
'''

def load_key():
    file = open("key.key", "rb").read()
    key = file.read()
    file.close()
    return key

#master_pwd = input("What is the master password? ")
key = load_key() # + master_pwd.encode()
fer = Fernet(key)

def view():
    with open("passwordd.txt", "r") as f:
        for line in f.readlines():
            data = (line.rstrip()) #rstrip() gets rigt of the \n from the line
            user, passw = data.split("  |  ") # data.split() returns a list of different items that were seperated by what was in the parameter
            print("User:", user, "| Password: ", fer.decrypt(passw.encode()).decode())

def add():
    name = input("Account Name: ")
    pwd = input("Password: ")

#with open creates a file called "password.txt" in "a" (append) mode
#the with keyword automatically closes the file when done
    with open("passwordd.txt", "a") as f:
        f.write(name + "  |  " + fer.encrypt(pwd.encode()).decode() + "\n") #\n adds the next things in a seperate line under.

while True:
    mode = input("would you like to view an existing password or add a new one? (view, add, or q to quit)").lower()
    if mode == "q":
        break
    elif mode == "view":
        view()
    elif mode == "add":
        add()
    else:
        print("Invalid mode.")
        continue