/*Ejercicio 1) Estación de servicios
Se solicita el desarrollo de un programa para administrar las ventas de combustible en una estación de servicios
Hasta el momento la estación cuenta con 7 surtidores (del 1 al 7) y 4 tipos de combustibles (Nafta Premium [Np], Nafta común [Nc], 
GasOil Premium [Gp], GasOil común [Gc]) y puede ser atendido por alguno de nuestros 5 playeros.
Se requiere:
a.	Llevar una matriz del tipo surtidor X combustible para almacenar
b.	Llevar un vector para registro de ventas ($) por playero
c.	Al cierre del día,
i.	Mostrar los totales (litros) vendidos por surtidor y tipo de combustible
ii.	Mostrar los totales ($) vendidos por playero
iii.	Mostrar los totales (Litros) y ($) vendidos en el día por tipo de combustible
iv.	Mostrar los totales (Litros) y ($) vendidos en el día por la estación 
Operación:
d.	El programa deberá consultar si desea iniciar una venta (V) o hacer el cierre del día (C), cualquier otra opción deberá informar: Opción incorrecta, ingrese Venta (V) o Cierre (C).
e.	Por cada venta deberá solicitar: Nro de playero, Tipo de combustible y cantidad (litros) vendida.
f.	De ingresarse un playero o el tipo de combustible inválidos deberá informar al operador y solicitar valores correctos.
g.	La venta en Litros No podrá ser 0 (cero).

Precios ($) por litro de combustible:
i.	Nafta Premium	: $60,35 L
ii.	Nafta Común 	: $53,28 L	
iii.	GasOil Premium	: $58,32 L
iv.	GasOil Común	: $42,56 L
v.	

Ejemplo de tabla para mostrar litros vendidos por surtidor y tipo de combustible
	Np	Nc	Gp	Gc
Surtidor 1	100 litros	10 litros	0 litros	5 litros
Surtidor 2				
….	….	….	….	….
….	….	….	….	….
Surtidor 7	0 litros	5 litros	10 litros	8 litros

Nomenclaturas:
Np: Nafta Premium	Nc: Nafta Común	
Gp: GasOil Premium	Gc: GasOil Común
*/

void main(){
//surtidor x tpo de combustible
int matriz[7][4];
int Venta_Por_Playero[50];
int total_litros_vendidos_por_surtidor;//y tipo de combustible

}