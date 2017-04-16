#!/bin/bash
TIMEOUT=18000
TOOL=cpachecker
SUFFIX=${TOOL}-predabs
BENCHMARKDIRS=`cat benchmarks.txt`
PWD=`pwd`
PROGRESSLOG=${PWD}/progress.log-$SUFFIX
CONFIG=~/CPAchecker-1.4-unix/config/predicateAnalysis-PredAbsRefiner-ABEl-bitprecise.properties
FLAGS="-config $CONFIG -preprocess -heap 29000M -setprop limits.time.cpu=${TIMEOUT}s"
EXEC=~/CPAchecker-1.4-unix/scripts/cpa.sh 

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
