Pasos para compilar el trabajo correspondiente a la semana 5 del MOOC de Fundamentals of Parallelism on Intel Architecture:

1) Compilar el programa con el siguiente comando para soportar el uso de MPI

$ make

2) Crear el archivo 'mympi' con la siguiente información:

PBS -l nodes=1
cd $PBS_O_WORKDIR
mpirun -host localhost -np 4 -env I_MPI_SHM_LMT=shm ./app $ALPHA

3) Enviar el trabajo a la cola de trabajo del clúster con el siguiente comando:

$ qsub mympi

4) Verificar el estado del trabajo en el clúster con el siguiente comando:

$ qstat

5) Revisar los resultados obtenidos abriendo con el editor de texto predilecto el archivo 'mympi.o*****'

