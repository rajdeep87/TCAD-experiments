PWD=`pwd`
TIMEOUT=3600
TOOL=ebmc
BENCHMARKDIRS=`cat benchmarks.txt`
PROGRESSLOG=${PWD}/progress.log-${TOOL}
FLAGS="--ic3 --module main --property main.property.1 --aiger" 
EXEC=/users/rajdeep/temp/hw-cbmc-db/hw-cbmc/src/ebmc/ebmc
echo "Starting experiments at `date` on `hostname`" > ${PROGRESSLOG}
for DIR in $BENCHMARKDIRS
do
  echo  ${DIR}
  cd ${DIR}
  filename=main.sv
  echo "Starting to processing $DIR/$filename at `date`" >> ${PROGRESSLOG}
  runsolver -C $TIMEOUT -W $TIMEOUT -d 1 -M 32768 ${EXEC} ${FLAGS} $filename >> ${PROGRESSLOG}
  echo "done at `date`" >> ${PROGRESSLOG}
  cd ../
done
