#Search for Ruby in list

def main():
    #name = ['Joe', 'Travis', 'Butler', 'Jesus','Ruby', 'Dude']
    name = ['Joe', 'Travis', 'Butler', 'Jesus','Test', 'Dude']
    check = 0
    for i in range(len(name)):
        if name[i] == 'Ruby':
            check = 1
    
    if check == 1:
        print("Hello Ruby")
    else:
        print("No Ruby")

main()