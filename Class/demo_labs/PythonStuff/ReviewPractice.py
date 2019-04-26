def half(num):
    num = num // 2
    for count in range(1, num+1):
        print(count, end=" ")
    print()
def main():
    num = 8
    half(11)
    half(2-3+2*8)
    half(num)
    print("number =", num)
main()
