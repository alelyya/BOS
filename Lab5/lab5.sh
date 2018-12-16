#!/bin/bash
ps axo ruid,euid,comm | tr -s ' ' | awk '$1 != $2 {print $3 }'
