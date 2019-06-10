#Class practice

class Date:
    def __init__(self, m, d):
        self.__month = m
        self.__day = d
    
    #Returns the date's day
    def get_day(self):
        return self.__day

    #Returns the date's month
    def get_month(self):
        return self.__month

    #Returns number of days in this date's month
    def days_in_month(self):
        print()

    #Modifies date by 1
    def next_day(self):
        print()
    
    def compare(self, mon, day):
        if mon > self.__month:
            return -1
        elif mon == self.__month and day == self.__day:
            return 0
        elif mon == self.__month and day < self.__day:
            return 1
        elif mon == self.__month and day > self.__day:
            return -1
        else:
            return 1

def main():
    dayList = [31,30,31,30,31,30,31,31,30,31,30,31]
    try:
        month = int(input("Enter month #: "))
        day = int(input("Enter the day #: "))
        secMonth = int(input("Enter second month #: "))
        secDay = int(input("Enter the second day #: "))
    except ValueError:
        print("(ノಠ益ಠ)ノ彡┻━┻")
    else:
        if (month > 12 or month < 0) or dayList[month - 1] < day or day < 0:
            print("(ಥ ╭╮ಥ )")
            print("Check Your Dates...")
        elif (secMonth > 12 or secMonth < 0) or dayList[month - 1] < secDay or day < 0:
            print("ಡ _ಡ")
            print("Check Your Dates...")
        else:
            dateVar = Date(month, day)
            compRes = dateVar.compare(secMonth, secDay)
            
            if compRes == -1:
                print("First date comes before the second date.")
            elif compRes == 0:
                print("SAME DAY REEEEEE")
            else:
                print("Second date comes before the first date.")
            
main()