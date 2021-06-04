Algoritmo ejercicio_9
	Definir dia, ayo, mes, sem, n Como Entero
	Definir cAyo, cMes, cSem, cDia como entero
	ayo <- 365
	mes <- 30
	sem <- 7
	dia <- 1
	
	Escribir "Numero de dias: "
	Leer n
	
	Escribir "El numero de dias equivale a: "
	Mientras n > 0 Hacer
		
		si n >= ayo entonces
			cAyo <- cAyo + 1
			ayos <- n/ayo
			
			n <- n - ayo
			
		SiNo si n >= mes entonces
				cMes <- cMes + 1
				ayos <- n/mes
				
				n <- n - mes
				
			sino si n >= sem entonces
					cSem <- cSem + 1
					ayos <- n/sem
					
					n <- n - sem
					
				sino
					cDia <- cDia + 1
					ayos <- n/dia
					
					n <- n - dia
					
				FinSi
			FinSi
		FinSi
		
	FinMientras
	
	Escribir cAyo, " años"
	Escribir cMes, " meses"
	Escribir cSem, " semanas"
	Escribir cDia, " dias"
	
FinAlgoritmo
