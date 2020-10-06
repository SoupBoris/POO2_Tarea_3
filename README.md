# Unidad 2 - Semana 3 - Templates
Tarea #3 del curso de programación orientado a objetos II, incluye el proyecto cmake: **poo2_unit2_week_3_2020-2_exercise**

## Contiene
- **main.cpp**, programa principal.  
- **my_linked_list.h**, para desarrollar el template linked_list   
- **test_1.cpp, test_2.cpp, test_3.cpp, test_4.cpp, test_5.cpp**, contienen pruebas para verificar que la clase linked_list funcione minimamente correcto.  

## Problema 
Crea un template de clase que se denominará `utec::linked_list`, utilizando templates y deberá contar con los siguientes métodos:
- constructores básicos (default) y constructor con parámetros que permita ingresar 0 o n valores dentro del linked list.
- destructor
- `push_back`
- `pop_back`
- `insert`, debido a que no se va esta version no va contar con iteradores, utilizar posición.
- `erase`, similar a `insert` utilizar posición para remover un item del linked list.
- `first`, para retornar el primer nodo  
- `last`, para retornar el ultimo nodo
- `clase de nodo`, esta clase debera contar con un metodo que permita retornar un valor `value()` y un metodo que permita retornar el siguiente valor `next()`.  
**NOTA**: Debera de tomarse en cuenta que debe implementarse la clase que represente los nodos de un linked_list.
## Rubrica  
- Los siguientes items seran evaluados:  

    |Problema|Excelente: Funciona correctamente en todos los test propuestos, el código esta bien organizado y los algoritmos utilizados son eficientes e implementados con un buen nivel de abstracción|Adecuado: Funciona correctamente al menos el 50% de los test propuestos, el código esta bien organizado y los algoritmos utilizados son eficientes e implementados con un buen nivel de abstracción|Insuficiente: No funciona correctamente en ninguno de los test propuestos, el código no esta bien organizado y los algoritmos utilizados son deficientes e implementados con un bajo nivel de abstracción|
    |--|:--:|:--:|:--:|
    |`constructores, varadic` |4 pts |2 pts |0 pts|
    |`destructor` |2 pts |1 pts |0 pts|
    |`push_back` |2 pts |1 pts |0 pts|
    |`insert` |2 pts |1 pts |0 pts|
    |`pop_back` |2 pts |1 pts |0 pts|
    |`erase` |2 pts |1 pts |0 pts|
    |`first` |2 pts |1 pts |0 pts|
    |`last` |2 pts |1 pts |0 pts |
    |`clase nodo` |2 pts |1 pts |0 pts |
    
