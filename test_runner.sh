#!/bin/bash

EXE=student_code

g++ -o $EXE student_code.cpp || {
  echo "Compilation failed"
  exit 1
}

pass=0
total=3

for i in 1 2 3
do
  echo "Running test $i..."
  ./$EXE < input/$i.in > temp.out
  if diff -q temp.out output/$i.out > /dev/null; then
    echo "✅ Test $i passed"
    pass=$((pass + 1))
  else
    echo "❌ Test $i failed"
    echo "Expected:"
    cat output/$i.out
    echo "Got:"
    cat temp.out
  fi
done

echo "Passed $pass out of $total tests."
exit $((total - pass))
