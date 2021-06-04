Algoritmo ejercicio_5
	Definir n1, n2, n3, n4, n5, n6, a, b, d, e, f como real
	Definir c1, c2, c3, c4, c5, c6 como real
	
	Escribir "Ingrese 5 numeros cualquiera."
	
	escribir "ingrese el primer numero: "
	Leer n1
	escribir "ingrese el segundo numero: "
	Leer n2
	escribir "ingrese el tercero numero: "
	Leer n3
	escribir "ingrese el cuarto numero: "
	Leer n4
	escribir "ingrese el quinto numero: "
	leer n5
	escribir "ingrese el sexto numero: "
	leer n6
	
	a <- ((n2^2)*(n4^2)*(n6^2))^3
	
	b <- ((n1-n4)/(n2^(1/3)*n5))
	
	c1 <- (n1-1)^2
	c2 <- (n2-1)^2
	c3 <- (n3-1)^2
	c4 <- (n4-1)^2
	c5 <- (n5-1)^2
	c6 <- (n6-1)^2
	
	d <- (n2^2)*(n4^2)-n6
	
	e <- n3+n4/n2^3
	
	f <- (n1^(1/4))*(n3^(1/4))*(n5^(1/4))
	
	
	Escribir "Punto (a). Resultado: ", a
	Escribir "Punto (b). Resultado: ", b
	Escribir "Punto (c). Resultado: c1 -> ", c1 ", c2 -> ", c2 ", c3 -> ", c3 ", c4 -> ", c4 ", c1 -> ", c5 ", c1 -> ", c6
	Escribir "Punto (d). Resultado: ", d
	Escribir "Punto (e). Resultado: ", e
	Escribir "Punto (f). Resultado: ", f
	
FinAlgoritmo 