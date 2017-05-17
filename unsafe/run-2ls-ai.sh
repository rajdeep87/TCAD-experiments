#!/bin/bash
TIMEOUT=18000
TOOL=2ls
SUFFIX=${TOOL}-ai
BENCHMARKDIRS=`cat benchmarks.txt`
PWD=`pwd`
PROGRESSLOG=${PWD}/progress.log-$SUFFIX
FLAGS="--inline --competition-mode"
EXEC=/users/rajdeep/acdlp/2ls/src/2ls/2ls

echo "Starting experiments at `date` on `hostname`" > ${PROGRESSLOG}
for dir in $BENCHMARKDIRS;
do
filename=main.c
cd ${dir}/
echo "Starting to processing  $dir/$filename at `date`" >> ${PROGRESSLOG}
runsolver -w ${filename}.watch-$SUFFIX -v ${filename}.time-$SUFFIX -o ${filename}.out-$SUFFIX -C $TIMEOUT -W $TIMEOUT -d 1 -M 32768 ${EXEC} ${FLAGS} $filename
echo "done at `date`" >> ${PROGRESSLOG}
cd ../../..
done
