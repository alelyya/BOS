#!/bin/bash
echo -n "$USER /"
echo -n `basename "$HOME"`
echo " $(( (($(echo $USER | wc -m)+$(basename $HOME | wc -m))-1) ))"
