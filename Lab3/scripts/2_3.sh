#!/bin/bash
grep '000000' ~/bash.txt > /tmp/zeros
grep -v '000000' ~/bash.txt > /tmp/nozeros
head -10 /tmp/zeros
echo '...'
tail -10 /tmp/zeros
head -10 /tmp/nozeros
echo '...'
tail -10 /tmp/nozeros
