#!/bin/bash
gcc 2_2.c -o 2_2
./2_2 & (sleep 1; pstree -H $$)
