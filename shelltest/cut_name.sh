#! /bin/sh

LOCAL_DIR="/home/liangwei/work/1/2/3"

seg2=${LOCAL_DIR##*/}
seg1=${LOCAL_DIR%/*} 

seg1=${seg1##*/}

echo $seg1  $seg2
