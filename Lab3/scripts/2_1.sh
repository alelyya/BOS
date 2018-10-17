#!/bin/bash
date >> /tmp/run.log
echo 'Hello World!'
wc -l /tmp/run.log | cut -d' ' -f1 >&2 
