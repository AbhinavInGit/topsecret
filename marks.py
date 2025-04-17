maths = float(input("Enter the marks of maths: "))
phy = float(input("Enter the marks of physics: "))
chem = float(input("Enter the marks of chemistry: "))
eng = float(input("Enter the marks of english: "))

total = maths + phy + chem + eng
avg = total / 400 * 100
print("The average of the student is:", avg)

if avg > 75: 
    print("Grade is Distinction")
elif avg >= 60 and avg <= 75:
    print("1st Division")
elif avg >= 50 and avg < 60:
    print("2nd Division")
elif avg >= 40 and avg < 50:
    print("3rd Division")
else:
    print("Fail")
