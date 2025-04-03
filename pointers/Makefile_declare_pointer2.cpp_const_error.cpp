ptrs: declare_pointer2.cpp
	clang++ declare_pointer2.cpp -o declare_pointer2
	clang++ const_error.cpp -o const_error
	./const_error
	./declare_pointer2

.PHONY: clean
clean:
	rm -f make
