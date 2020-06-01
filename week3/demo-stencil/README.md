En las siguientes carpetas se encuentran los archivos correspondientes al demo de esta semana

- En la carpeta 'solucion-serial' se encuentra la implementación de la demo para la solución del problema de stencil sin usar ningún método de paralelización.

- En la carpeta 'solucion-threads' se encuentra la implementación de la solución correspondiente a esta semana, haciendo uso de los threads para paralelizar la solución del problema de stencil.

Para correr ambas carpetas es necesario usar los siguientes comandos:

- $ make // Compilación de los archivos
- $ queue <nombre_de_la_aplicación> // Para ingresar un nuevo trabajo a la cola que corra nuestra aplicación.
- $ qstat // Para verificar el estado de la ejecución de la aplicación en el clúster.

Posteriormente pueden verificar la salida y rendimiento de la solución al abrir con su editor de texto favorito el archivo 'edgedetection.o****'

