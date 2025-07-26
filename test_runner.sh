#!/bin/bash

set -e

for i in p*/; do
  echo "==Testing $i=="
  g++ -o $i/student $i/student_code.cpp || { echo "Compilation failed"; exit 1; }
  ./$i/student < $i/input/1.in > $i/temp.out
if diff -q $i/temp.out $i/output/1.out > /dev/null; then
  echo "✅ Passed"
  exit 0
else
  echo "❌ Failed"
  echo "Expected:"
  cat ./$i/output/1.out
  echo "Got:"
  cat ./$i/temp.out
  exit 1
fi

done


