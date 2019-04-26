#Store Checkout

salesTax = 0.06
item1 = float(input("Enter price for first item: "))
item2 = float(input("Enter price for second item: "))
item3 = float(input("Enter price for third item: "))
item4 = float(input("Enter price for fourth item: "))
item5 = float(input("Enter price for fifth item: "))

subTotal = item1 + item2 + item3 + item4 + item5
taxAmount = subTotal * salesTax
finTotal = subTotal + taxAmount

print("Subtotal = $", format(subTotal, '.2f'))
print("Sales Tax = $", format(taxAmount, '.2f'))
print("Final Total = $", format(finTotal, '.2f'))
