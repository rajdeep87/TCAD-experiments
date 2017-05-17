#!/bin/bash
TIMEOUT=18000
TOOL=cbmc-kind
SUFFIX=${TOOL}
BENCHMARKDIRS=`cat benchmarks.txt`
PWD=`pwd`
PROGRESSLOG=${PWD}/progress.log-$SUFFIX
FLAGS=""
EXEC=~/svncprover/releases/cbmc-5.1/src/cbmc/cbmc

echo "Starting experiments at `date` on `hostname`" > ${PROGRESSLOG}
for dir in $BENCHMARKDIRS;
do
filename=main.c
cd ${dir}/software/${TOOL}
echo "Starting to processing  $dir/software/$TOOL/$filename at `date`" >> ${PROGRESSLOG}
runsolver -w ${filename}.watch-$SUFFIX -v ${filename}.time-$SUFFIX -o ${filename}.out-$SUFFIX -C $TIMEOUT -W $TIMEOUT -d 1 -M 32768 ${EXEC} ${FLAGS} -DBASE $filename
runsolver -w ${filename}.watch-$SUFFIX -v ${filename}.time-$SUFFIX -o tmp.txt -C $TIMEOUT -W $TIMEOUT -d 1 -M 32768 ${EXEC} ${FLAGS} -DSTEP $filename
cat tmp.txt >> ${filename}.out-$SUFFIX
rm tmp.txt
echo "done at `date`" >> ${PROGRESSLOG}
cd ../../..
done
