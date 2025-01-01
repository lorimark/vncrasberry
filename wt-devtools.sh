#
# This runs the artecams-live container, hooking it in to
#  the local file system for logging and other things.
#

docker run                             \
  -it                                  \
  --rm                                 \
  --net host                           \
  -u $(id -u ${USER}):$(id -g ${USER}) \
  -v /etc/passwd:/etc/passwd           \
  -v /etc/group:/etc/group             \
  -v /home:/home                       \
  -v /home/mark/projects:/mnt/btrfsroot/fileserver/users/mark/projects \
  -e "TERM=xterm-256color"             \
  -w ${PWD}                            \
  wt-devtools:1

#  --user ${UID}                        \


