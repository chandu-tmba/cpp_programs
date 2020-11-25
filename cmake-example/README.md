cmake is used to generate unix make files/ other build files like ninja,etc

cmake commands to generate make file

create new build directory in project location and enter build directory (all build files in one folder will make it easy for cleaning )

cd build

run cmake command using this command

cmake /path/to/camkelistfile

after this command makefile will be generated, then run following commands

make

make install
