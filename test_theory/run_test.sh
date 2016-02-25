#!/bin/sh

TEST_BIN="`dirname $0`/test_theory"

$TEST_BIN --verbose -j1 --no-early-exit --xml=result.xml
