Algoritmo ejercicio_1
	definir llantas, opc como entero
	Definir costoLlantas como entero
	definir valorTotal como entero
	
	Escribir "Ingrese la cantidad de llantas a comprar: "
	Leer llantas
	
	Si llantas > 2 Entonces
		costoLlantas<-llantas * 200000
	SiNo
		costoLlantas<-llantas * 220000
	Fin Si
	
	Escribir "Tipo de pago."
	Escribir "Digite (1) para de contado en efectivo."
	Escribir "Digite (2) para de contado con targeta."
	Escribir "Digite (3) para de credito."
	Leer opc
	Si opc == 1 Entonces
		valorTotal <- costoLlantas * 0.92
		Escribir "El costo de las llantas es: $", costoLlantas
		Escribir "Aplicando el 8% de descuento..."
		Escribir "EL valor total a cancelar por el cliente es: $", valorTotal
		
		SiNo Si opc == 2 Entonces
			valorTotal <- costoLlantas * 0.96
			Escribir "El costo de las llantas es: $", costoLlantas
			Escribir "Aplicando el 4% de descuento..."
			Escribir "EL valor total a cancelar por el cliente es: $", valorTotal
		siNo
			valorTotal <- costoLlantas
			Escribir "El costo de las llantas es: $", costoLlantas
			Escribir "EL valor total a cancelar por el cliente es: $", valorTotal
		Fin Si
	FinSi

FinAlgoritmo
