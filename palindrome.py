a = int(input("enter :"))
b = a
r=0
while(a>0): 
    d = a%10
    r = r*10 + d
    a = a//10
if (r == b) : print("palindrome")
else : print("not palindrome")
