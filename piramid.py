for i in range(6):
    for j in range (6-i):
        print(end="_")
    for j in range(i):
        print("*", end = " ")
    print()