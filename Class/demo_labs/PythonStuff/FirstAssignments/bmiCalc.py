#BMI Calculator

weight = float(input("Enter weight in pounds: "))
height = float(input("Enter height in inches: "))
kg = weight * 0.45359237
meters = height * 0.0254
bMI = kg / (meters**2)
print("BMI is ", format(bMI, '.4f'))
