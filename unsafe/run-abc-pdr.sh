PWD=`pwd`
TIMEOUT=3600
TOOL=abc
BENCHMARKDIRS=`cat benchmarks.txt`
PROGRESSLOG=${PWD}/progress.log-${TOOL}
FLAGS="-c read main.aig;strash;pdr" 
ENGINE="pdr"
EXEC=/users/rajdeep/bin/abc
echo "Starting experiments at `date` on `hostname`" > ${PROGRESSLOG}
for DIR in $BENCHMARKDIRS
do
  echo  ${DIR}
  cd ${DIR}
  filename="main.aig"
  echo "Starting to processing $DIR/$filename at `date`" >> ${PROGRESSLOG}
  #$EXEC -c "read $filename;strash;pdr" >> ${PROGRESSLOG}
  runsolver -C $TIMEOUT -W $TIMEOUT -d 1 -M 32768 $EXEC -c "read $filename;strash;pdr" >> ${PROGRESSLOG}
 
  echo "done at `date`" >> ${PROGRESSLOG}
  cd ../
done
