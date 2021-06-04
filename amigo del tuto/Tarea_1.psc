Algoritmo RaizCuadreada 
	
	Definir n, r Como Real
	
	Escribir "Programa que calcula la raiz cuadrada de cualquier real."
	
	Escribir "Ingrese un numero: "
	
	Leer n
	
	si n > -1 Entonces
		
		r <- rc(n)
		
		Escribir "La raiz cuadrada de ",n," es: ",r
		
	SiNo
		r <- rc(-n)
		
		Escribir "La raiz cuadrada de ",n," es: ",r,"i"
		
	FinSi
	
FinAlgoritmo
