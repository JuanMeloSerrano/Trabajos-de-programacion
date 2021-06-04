Algoritmo ejercicio_5
	Definir sumaPar, i, sumaImpar, j Como Entero

	Para i <- 1 Hasta 100 Hacer
		
		si i%2 == 0 entonces
			Escribir i, " <- par"
			sumaPar <- sumaPar + i
		FinSi
		
	FinPara
	
	Para j <- 1 Hasta 1000 Hacer
		
		si j%2 == 1 entonces
			Escribir j, " <- impar"
			sumaImpar <- sumaImpar + j
		FinSi
		
	FinPara
	
	Escribir "La suma total de los pares comprendidos entre 1 y 100 es: ", sumaPar
	Escribir "La suma total de los impares comprendidos entre 1 y 1000 es: ", sumaImpar
	
FinAlgoritmo

