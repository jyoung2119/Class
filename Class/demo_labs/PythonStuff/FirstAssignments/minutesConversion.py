#Years and Days

minutes = float(input("Enter the number of minutes: "))
days = minutes/1440
years = int(days/365)
remDays = int(days % 365)
print(minutes, "minutes is approximately", years, "years and", remDays, "days")
