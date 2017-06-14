PWD=`pwd`
TIMEOUT=3600
TOOL=ebmc
BENCHMARKDIRS=`cat benchmarks.txt`
PROGRESSLOG=${PWD}/progress.log-${TOOL}
FLAGS="" 
EXEC=/users/rajdeep/bin/aigtoaig
echo "Starting experiments at `date` on `hostname`" > ${PROGRESSLOG}
for DIR in $BENCHMARKDIRS
do
  echo  ${DIR}
  cd ${DIR}
  name=main
  filename=res.aag
  echo "Starting to processing $DIR/$filename at `date`" >> ${PROGRESSLOG}
  ${EXEC} $filename > $name.aig
  echo "done at `date`" >> ${PROGRESSLOG}
  cd ../
done
