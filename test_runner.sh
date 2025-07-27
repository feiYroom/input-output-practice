#!/bin/bash

set -e
# This script compiles and tests student code in each subdirectory of the current directory.
all_passed=true

for i in p*/; do
  echo "==Testing $i=="
  if ! g++ -o $i/student $i/student_code.cpp; then
    echo "Compilation failed in $i"
    all_passed=false
    continue
  fi
  ./$i/student < $i/input/1.in > $i/temp.out
  if diff -q $i/temp.out $i/output/1.out > /dev/null; then
    echo "✅ Passed"
  else
    echo "❌ Failed"
    echo "Expected:"
    cat ./$i/output/1.out
    echo "Got:"
    cat ./$i/temp.out
    all_passed=false
  fi
done

if $all_passed; then
  echo "All tests passed!"
  exit 0
else
  echo "Some tests failed."
  exit 1
fi
