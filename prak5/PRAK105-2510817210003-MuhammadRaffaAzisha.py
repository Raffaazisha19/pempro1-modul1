a = 9
b = 5
x = 8
y = 8
sisa_ab = a % b
sisa_xy = x % y
total_sisa = sisa_ab + sisa_xy

print(f"Variabel a bernilai {a}")
print(f"Variabel b bernilai {b}")
print(f"Variabel x bernilai {x}")
print(f"Variabel y bernilai {y}\n")

print(f"Sisa bagi dari a / b ({a} % {b}) adalah {sisa_ab}")
print(f"Sisa bagi dari x / y ({x} % {y}) adalah {sisa_xy}\n")

print(f"Total sisa bagi dari a dibagi b dan x dibagi y adalah {total_sisa}")