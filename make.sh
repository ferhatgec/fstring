#!/bin/sh

# Build latest example.

# Change directory.
cd examples

# Change directory with latest folder.
cd `ls -t1 |  head -n 1`

# Build and run it!
sh make.sh && ./test