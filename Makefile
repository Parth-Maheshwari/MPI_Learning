EXECS=Hello_world
MPICC?=mpicc

all: ${EXECS}

Hello_world: Hello_world.c
	${MPICC} -o Hello_world Hello_world.c

clean:
	rm -f ${EXECS}