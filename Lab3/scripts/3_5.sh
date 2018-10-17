#!/bin/bash
grep "$1" "$2" | head -n $3 | sort | cat -n
