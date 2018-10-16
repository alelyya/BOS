#!/bin/bash
echo 'Домашний каталог пользователя'
whoami
echo 'содержит обычных файлов:'
find ~/ -maxdepth 1 -type f ! -name '.*' | wc -l
echo 'скрытых файлов:'
find ~/ -maxdepth 1 -type f -name '.*' | wc -l
