with open("modelo.obj", "w") as file:
    for _ in range(int(input("Número de vértices: "))):
        file.write(f"v {input('Vértice (x y z): ')}\n")
    for _ in range(int(input("Número de caras: "))):
        file.write(f"f {input('Cara (índices separados por espacio): ')}\n")

print("Archivo 'modelo.obj' creado.")
