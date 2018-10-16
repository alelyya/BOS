#!/bin/bash
echo 'Процессов пользователя:'
USER="$(whoami)"
echo "$USER"
top -b -n1 | grep "$USER" | wc -l
echo 'Процессов пользователя root:'
top -b -n1 | grep 'root' | wc -l
