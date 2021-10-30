#DON'T NEED TO BE COMPILED

import os

l = os.listdir()
my_name = __file__

for i in range(0, len(l)):
    if l[i] != my_name:
        #Check if the current file l[i] is a python script
        try:
            if l[i].split(".")[1].lower() == "py":
                #Create the setup file
                print("Creating setup for " + l[i] + "...")
                file = open("setup/" + l[i].split(".")[0] + "-setup.py", "w")
                file.write("""from cx_Freeze import setup, Executable
setup(
    name = \"""" + l[i].split(".")[0].lower() + """\",
    version = "1",
    description = \"""" + l[i].split(".")[0].lower() + """\",
    executables = [Executable(\"../""" + l[i] + """\")],
)""")
                file.close()
            else: pass
        except: pass
    else: pass