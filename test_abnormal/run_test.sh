#!/bin/sh

TEST_BIN="`dirname $0`/test_abnormal"

$TEST_BIN --verbose -j1 --no-early-exit --xml=result.xml
