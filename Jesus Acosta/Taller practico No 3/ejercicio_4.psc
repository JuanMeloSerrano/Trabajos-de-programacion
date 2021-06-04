Algoritmo ejercicio_4
	Definir suma, i Como Entero
	
	escribir "Programa que calcula la suma de los numeros multiplos de 5 que se encuentran entre 1 y 100"
	Para i <- 1 Hasta 100 Hacer
		
		si i%5 == 0 entonces
			Escribir i, " es multiplo de 5."
			suma <- suma + i
		FinSi
		
	FinPara
	
	Escribir "La suma total es: ", suma
	
FinAlgoritmo
