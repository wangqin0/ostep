add_executable(ch02_cpu cpu.c)
target_include_directories(ch02_cpu PRIVATE ../util)

add_executable(ch02_mem mem.c)
target_include_directories(ch02_mem PRIVATE ../util)

add_executable(ch02_threads threads.c)
target_include_directories(ch02_threads PRIVATE ../util)

add_executable(ch2_io io.c)