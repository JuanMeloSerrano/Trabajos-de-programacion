Algoritmo ejercicio_8
	Definir aux Como Logico
	Definir prod, total Como Real
	definir cont como entero
	
	aux <- Verdadero
	
	Mientras aux = Verdadero Hacer
		Escribir "Digite (0) para facturar."
		Escribir "Igrese el valor del producto #", cont + 1
		Leer prod
		total <- total + prod
		si prod = 0 entonces
			aux <- falso
			cont <- cont - 1
		FinSi
		cont <- cont + 1
	FinMientras
	Escribir ""
	Escribir "******FACTURA*******"
	Escribir "La cantidad de productos facturados fue: ", cont
	Escribir "EL total a pagar es: $ ",total
	
FinAlgoritmo
