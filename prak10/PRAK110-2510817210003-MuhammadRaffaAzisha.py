import math # Diperlukan untuk fungsi math.sqrt() (akar kuadrat)
alas = 5
tinggi = 12
sisi_c = math.sqrt((alas ** 2) + (tinggi ** 2))
keliling = alas + tinggi + sisi_c
luas = 0.5 * alas * tinggi

print("Diketahui :")
print(f"Alas = {int(alas)} cm")
print(f"Tinggi = {int(tinggi)} cm\n")

print("Jawab :")
print(f"Sisi A = {int(alas)} cm")
print(f"Sisi B = {int(tinggi)} cm")
print(f"Sisi C = {int(sisi_c)} cm")
print(f"Keliling = {int(keliling)} cm")
print(f"Luas = {int(luas)} cm")