w = float(input())
h = float(input())
w = w / (h ** 2)
if w > 25 :
    print("Overweight")
elif w > 18.5 : print("Normal weight")
else : print("Underweight")