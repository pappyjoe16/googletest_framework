#!/bin/bash

compile_build="cmake -Bbuild"
build_test="cmake --build build"
build_dir="build"
run_test="./Test"

echo "Compilation started..."
if ! ${compile_build}; then 
    echo "Compilation error"
else 
    echo "Compilation finished"
fi
sleep 2

echo "Building started..."
if ! ${build_test}; then 
    echo "Building error"
else 
    echo "Building of Test Project finished"
fi
sleep 2

echo "Test running..."
cd ${build_dir} || exit
if ! ${run_test}; then 
    echo "Test failed to run"
else 
    echo "Test run successfully"
fi
exit 0