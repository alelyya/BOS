#!/bin/bash
du --all --max-depth=1 ~/ | sort -n -k1
