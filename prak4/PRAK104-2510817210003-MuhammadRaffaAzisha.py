sepatu_a = 400000
diskon_a = 13.0
sepatu_b = 350000
diskon_b = 21.0

hasil_a = sepatu_a - (sepatu_a * (diskon_a / 100))
hasil_b = sepatu_b - (sepatu_b * (diskon_b / 100))

print(f"Harga awal Sepatu A adalah Rp {sepatu_a:.0f}")
print(f"Harga awal Sepatu B adalah Rp {sepatu_b:.0f}")
print(f"Sepatu A mendapat diskon {diskon_a:.0f}% sehingga harganya menjadi Rp {hasil_a:.0f}")
print(f"Sepatu B mendapat diskon {diskon_b:.0f}% sehingga harganya menjadi Rp {hasil_b:.0f}")