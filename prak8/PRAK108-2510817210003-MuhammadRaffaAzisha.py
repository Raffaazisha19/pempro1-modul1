import math

jumlah_putaran = 5
total_jarak_km = 14
phi = 3.14
keliling_taman_km = total_jarak_km / jumlah_putaran
jari_jari_km = keliling_taman_km / (2 * phi)


print("Diketahui :")
print(f"Pak Dengklek mengelilingi taman = {jumlah_putaran} Putaran")
print(f"Jarak tempuh Pak Dengklek = {total_jarak_km} Kilometer\n")
print("Jawaban :")
print(f"Jari-jari taman yang dikelilingi Pak Dengklek adalah {jari_jari_km:.2f} Kilometer")