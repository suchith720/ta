main : wc map wc.c main.c map.c
	cc main.c -g -o main
wc : wc.c 
	cc wc.c -g -o wc 
map : map.c 
	cc map.c -g -o map
.PHONY : clean
clean : 
	rm main wc map
