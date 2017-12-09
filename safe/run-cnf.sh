PWD=`pwd`
TIMEOUT=7200
TOOL=lingeling
BENCHMARKDIRS=`cat benchmarks.txt`
PROGRESSLOG=${PWD}/progress.log-${TOOL}
FLAGS="-v 4" 
EXEC=/users/rajdeep/bin/lingeling
echo "Starting experiments at `date` on `hostname`" > ${PROGRESSLOG}
for DIR in $BENCHMARKDIRS
do
  echo  ${DIR}
  cd ${DIR}
  filename=main_70.cnf
  FILELOG=${PWD}/progress.log-cnf70-${TOOL}
  echo "Starting to processing $DIR/$filename at `date`" >> ${PROGRESSLOG}
  runsolver -C $TIMEOUT -W $TIMEOUT -d 1 -M 32768 ${EXEC} $filename >> ${FILELOG}
  echo "done at `date`" >> ${PROGRESSLOG}
  cd ../
done
