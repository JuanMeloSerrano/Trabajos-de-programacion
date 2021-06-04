Algoritmo Area
	Definir  opc Como Entero
	Definir  a, base, alt como real
	definir x, b Como real
	
	Escribir "1. Area de un triangulo."
	Escribir "2. Area de un cuadrado."
	Escribir "3. Area de un trapecio."
	Escribir "4. Area de un circulo."
	Escribir "5. Area de un rectangulo."
	
	Escribir "Ingrese la opcion de la figura geometrica que desee calcular: "
	Leer opc
	
	Segun opc hacer
		1:
			escribir "Area de un triangulo."
			escribir "Ingrese la base: "
			leer base
			escribir "Ingrese la altura: "
			leer alt
			a <- (base * alt)/2
			escribir "El area es: ", a
		2:
			escribir "Area de un cuadrado."
			escribir "Ingrese la base: "
			leer base
			a <- (base * base)
			escribir "El area es: ", a
		3:
			escribir "Area de un trapecio."
			escribir "Ingrese el lado B: "
			leer x
			Escribir "Ingrese el lado b: "
			Leer b
			escribir "Ingrese la altura: "
			leer alt
			a <- ((b + x) * alt)/2
			escribir "El area es: ", a
		4:
			escribir "Area de un circulo."
			escribir "Ingrese el radio: "
			leer b
			a <- (b * b) * 3.1416
			escribir "El area es: ", a
		5:
			escribir "Area de un triangulo."
			escribir "Ingrese la base: "
			leer base
			escribir "Ingrese la altura: "
			leer alt
			a <- (base * alt)
			escribir "El area es: ", a
		de otro modo:
			Escribir "A ingresado una opcion incorrecta!"
			
	FinSegun
	
	
FinAlgoritmo
