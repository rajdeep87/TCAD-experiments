#!/bin/bash
TIMEOUT=18000
TOOL=cbmc-kind
SUFFIX=${TOOL}
BENCHMARKDIRS=`cat benchmarks.txt`
PWD=`pwd`
PROGRESSLOG=${PWD}/progress.log-$SUFFIX
FLAGS=""
EXEC=~/svnDATE-experiments/cbmc-kind.sh

echo "Starting experiments at `date` on `hostname`" > ${PROGRESSLOG}
for dir in $BENCHMARKDIRS;
do
filename=main.c
cd ${dir}/software/${TOOL}
echo "Starting to processing  $dir/software/$TOOL/$filename at `date`" >> ${PROGRESSLOG}
runsolver -w ${filename}.watch-$SUFFIX -v ${filename}.time-$SUFFIX -o ${filename}.out-$SUFFIX -C $TIMEOUT -W $TIMEOUT -d 1 -M 32768 ${EXEC} ${FLAGS} $filename
echo "done at `date`" >> ${PROGRESSLOG}
cd ../../..
done
