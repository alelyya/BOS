#!/bin/bash
date
cut -d: -f1 /etc/passwd
uptime | awk -F'( |:|,)+' '{print "Uptime: ", $6, "hours", $7, "minutes."}'
