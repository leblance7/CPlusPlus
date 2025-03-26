ptrs: pointer.cpp incrm_pnt.cpp
	clang++ pointer.cpp -o pointer 
	clang++ incrm_pnt.cpp -o incrm_pnt
	./pointer 
	./incrm_pnt

.PHONY: clean
clean:
	rm -f Test
