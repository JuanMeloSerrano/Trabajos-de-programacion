Algoritmo ejercicio_4
	Definir est Como caracter
	Definir n1, n2, n3, n4, n5, n6, n7, p1, p2, p3, prom como real
	Escribir "Ingrse el nombre del estudiante: "
	Leer est
	Escribir "Ingrese las 7 notas del estudiante."
	
	escribir "ingrese nota 1: "
	Leer n1
	escribir "ingrese nota 2: "
	Leer n2
	escribir "ingrese nota 3: "
	Leer n3
	escribir "ingrese nota 4: "
	Leer n4
	escribir "ingrese nota 5: "
	Leer n5
	escribir "ingrese nota 6: "
	Leer n6
	escribir "ingrese nota 7: "
	Leer n7
	
	p1 <- ((n1 + n2)/2) * 0.3	
	p2 <- ((n3 + n4)/2) * 0.3
	p3 <- ((n5 + n6 + n7)/3) * 0.4
	
	prom <- p1 + p2 + p3
	
	Escribir "Las resultados de ",est," son los siguientes:"
	Escribir "Nota del primer seguimiento: ", p1
	Escribir "Nota del segundo seguimiento: ", p2
	Escribir "Nota del tercer seguimiento: ", p3
	
	Escribir "El promedio total es: ", prom
	
FinAlgoritmo
