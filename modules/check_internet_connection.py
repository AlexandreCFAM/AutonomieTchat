import urllib.request
import sys

if len(sys.argv) == 1: print("Bad arguments!")
else:
    try:
        urllib.request.urlopen(sys.argv[1])
        print("True")
    except: print("False")