# rust_memtest
Build target:
    cargo build

Run valgrind on rust executable that calls a C function containing a memory leak: 
    valgrind --leak-check=full --show-leak-kinds=all target/debug/rust_mem_test
