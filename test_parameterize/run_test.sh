#!/bin/sh

TEST_BIN="./test"

$TEST_BIN --verbose -j1 --no-early-exit --xml=result.xml
