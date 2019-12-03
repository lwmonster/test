#! /bin/sh

set -x

while [[ true ]]
do
    echo "ok"
    wget www.baidu.com -O index.html > /dev/null
    
    sleep `echo $RANDOM % 10 | bc`
    
    rm index.html*
done
