#!/bin/bash
gcc 2_3.c -o 2_3
./2_3 & (sleep 1; pstree -H $$)
