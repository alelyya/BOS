#!/bin/bash
ls ~/ | grep 'txt$'
echo 'Суммарный размер:'
du -ch ~/*.txt | grep 'total' | cut -f1
echo 'Суммарное количество строк:'
cat ~/*.txt | wc -l
