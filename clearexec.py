import os

def remove():
    toremove = []
    for i in os.listdir():
        #check if it's a directory and that it's not a hidden directory (.git)
        if (os.path.isdir(i) and i[0] != '.'):
            os.chdir(i)
            try:
                for j in os.listdir():
                    #removes all executables (could potentially be bad depending)
                    if (j[-4:] == '.exe'):
                        toremove.append(os.getcwd().split('\\')[-1] + '\\' + j)
                        os.remove(j)
            except:
                pass
            os.chdir('..')
    return toremove


x = input("you are about to remove ALL EXECUTABLES from ALL of your directories. Are you sure? Type CONFIRM to confirm: \n")
if (x == 'CONFIRM'):
    removed = remove()
    if (len(removed) == 0):
        print("none removed")
    else:
        print("removed:")
        [print(x) for x in removed]
    