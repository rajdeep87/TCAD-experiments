#!/bin/bash

#$1... file

MAX_K=100
CBMC=~/svncprover/trunk/src/cbmc/cbmc

for k in {1..100}
do
  echo ""
  echo "k=$k"
  echo ""
  $CBMC $1 -DK=$k -DBASE
  rc=$?
  if [ $rc -ne 0 ]; then echo ""; echo "k-induction: VERIFICATION FAILED"; exit $rc; fi

  $CBMC $1 -DK=$k -DSTEP
  rc=$?
  if [ $rc -eq 0 ]; then echo ""; echo "k-induction: VERIFICATION SUCCESSFUL"; exit $rc; fi
done
