PWD=`pwd`
TIMEOUT=3600
TOOL=git
BENCHMARKDIRS=`cat benchmarks.txt`
PROGRESSLOG=${PWD}/progress.log-${TOOL}
FLAGS="add" 
EXEC=git 
echo "Starting experiments at `date` on `hostname`" > ${PROGRESSLOG}
for DIR in $BENCHMARKDIRS
do
  echo  ${DIR}
  cd ${DIR}
  filename=main.cnf
  echo "Starting to processing $DIR/$filename at `date`" >> ${PROGRESSLOG}
  ${EXEC} ${FLAGS} $filename >> ${PROGRESSLOG}
  echo "done at `date`" >> ${PROGRESSLOG}
  cd ../
done
