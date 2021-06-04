Algoritmo ejercicio_7
	Definir i, horas, vh, total Como Entero
	i <- 50
	vh <- 30000
	Mientras i >= 1  Hacer
		Escribir "Ingrese las horas trabajadas del trabajador #: ",i
		Leer horas
		total <- horas * vh
		Escribir "El total a pagar a el trabajador #", i, " es: ",total, " Bolivares"
		Escribir "---------------------------------------------------------"
		i <- i - 1
	FinMientras 
	
FinAlgoritmo