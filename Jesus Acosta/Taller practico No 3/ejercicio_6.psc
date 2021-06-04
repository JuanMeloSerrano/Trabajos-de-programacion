Algoritmo ejercicio_6
	Definir i, n Como Entero
	Definir promedio, suma, nota Como Real
	
	Escribir "Numero de notas a ingresasr: "
	Leer n
	
	suma <- 0
	i <- 1
	
	Mientras n >= i Hacer
		Escribir "Ingrese na nota #", i, " :"
		Leer nota
		suma <- suma + nota
		i <- i + 1 
	FinMientras
	
	promedio <- suma/n
	
	Escribir "El promedio de las otas es: ", promedio
	
FinAlgoritmo
