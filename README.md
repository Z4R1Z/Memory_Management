# Memory_Management

Furkan Demir

A Operating Systems project to study and investigate how memory management is done on processor level.
A memory management library, sbmem.a, is implemented with buddy memory allocation algorithm from shared memory. The library can serve up to 10 processes at a time.
Each process uses the library to allocate memory dynamically, as they do in malloc function. Library creates shared segment for the process and passes the address to the process and memory allocations by the process are made to that segment. Library keeps track of the shared segments as well as the processes who owns segments, and executes necessary deallaction routines when the process asks.
