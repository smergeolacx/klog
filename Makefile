cc = gcc

OBJS = main.c debug.c chunk.c memory.c

app: $(OBJS)
	$(cc) $(OBJS) -o app

clean:
	rm -f $(wildcard *.gch)
