Algoritmo raiz_cuadrada 
	Definir num Como Real
	Definir result Como Real
	
	Escribir "Ingrese un numero para calcularle la raiz cuadrada: "
	Leer num
	
	si num >=0 Entonces
		result <- raiz(num)
		Escribir "La raiz cuadrada de ",num," es: ",result
	SiNo
		result <- raiz(-num)
		Escribir "La raiz cuadrada de ",num," es: ",result,"i"
	FinSi
FinAlgoritmo
