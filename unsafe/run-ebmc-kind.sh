#!/bin/bash
TIMEOUT=3600
TOOL=ebmc
SUFFIX=${TOOL}
BENCHMARKDIRS=`cat benchmarks-ebmc.txt`
PWD=`pwd`
PROGRESSLOG=${PWD}/progress.log-$SUFFIX
FLAGS="--module main --k-induction --bound 10"
EXEC=/users/rajdeep/temp/hw-cbmc-db/hw-cbmc/src/ebmc/ebmc

echo "Starting experiments at `date` on `hostname`" > ${PROGRESSLOG}
for dir in $BENCHMARKDIRS
do
filename=main.sv
cd ${dir}
echo "Starting to processing  $dir/$filename at `date`" >> ${PROGRESSLOG}
runsolver -C $TIMEOUT -W $TIMEOUT -d 1 -M 32768 $EXEC $filename $FLAGS >> ${PROGRESSLOG}
echo "done at `date`" >> ${PROGRESSLOG}
cd ../
done
