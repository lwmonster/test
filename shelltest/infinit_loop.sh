#! /bin/sh

taskset -cp 0 $$

while [[ 1 -eq 1 ]]
do
  echo "ok" > /dev/null

done
