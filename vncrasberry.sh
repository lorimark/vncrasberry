#!/bin/bash
set -x #echo on

#
# run this from the build folder as;
#   ../swims.sh
#

echo running...
# gdb --args                                            \
./vncrasberry.bin                                     \
  --config=../src/wt_config.xml                       \
  --session-id-prefix=swm                             \
  --docroot="../docroot;.,/images,/resources,/styles" \
  --approot="../approot"                              \
  --http-listen 0.0.0.0:8123

#--accesslog=/dev/null
#  --deploy-path="/italabels" \

#echo restarting in 5 seconds
#echo hit ctrl-C again to stop the script
#sleep 5

