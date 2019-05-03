# Determine the monthly payment for a car loan.

def main():
    loanAmount = float(input("Enter amount of loan: "))
    intRate = float(input("Enter interest rate (%): "))
    ratePer = (intRate / 12) / 100
    years = int(input("Enter number of years: "))
    numPayments = years * 12
    #monPayment = float(loanAmount * ((ratePer * (1 + ratePer)**numPayments) / (((1 + ratePer)**numPayments) - 1)))

    holder1 = loanAmount * (ratePer*(1 + ratePer)**numPayments)
    holder2 = (1 + ratePer)**numPayments - 1
    monPayment = holder1 / holder2

    print("Monthly payment: $", format(monPayment, '.2f'))

main()