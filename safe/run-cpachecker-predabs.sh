#!/bin/bash
TIMEOUT=3600
TOOL=cpachecker
SUFFIX=${TOOL}-predabs
BENCHMARKDIRS=`cat benchmarks.txt`
PWD=`pwd`
PROGRESSLOG=${PWD}/progress.log-$SUFFIX
CONFIG=/users/rajdeep/CPAchecker-1.6.1-unix/config/predicateAnalysis-PredAbsRefiner-ABEl-bitprecise.properties
FLAGS="-config $CONFIG -preprocess -heap 29000M -setprop limits.time.cpu=${TIMEOUT}s"
EXEC=/users/rajdeep/CPAchecker-1.6.1-unix/scripts/cpa.sh
echo "Starting experiments at `date` on `hostname`" > ${PROGRESSLOG}
for dir in $BENCHMARKDIRS;
do
filename=main.c
cd ${dir}
echo "Starting to processing  $dir/$filename at `date`" >> ${PROGRESSLOG}
#runsolver -C $TIMEOUT -W $TIMEOUT -d 1 -M 32768 
${EXEC} ${FLAGS} $filename >> ${PROGRESSLOG}
echo "done at `date`" >> ${PROGRESSLOG}
cd ../
done
