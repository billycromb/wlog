I created this as a repo because I essentially end up rewriting this header for every C project I have to do in school.

This is just a quick and dirty logging macro to put line numbers into all log messages and put them on seperate lines. It's not particularly robust. In particular, it requires the format string to be a literal, and it relies on the gnu extension that lets variadic macros with 0 arguments work (should work fine in GCC and Clang).

The Makefile is just there to build tests (if you're running Clang), all you actually need is the header.
