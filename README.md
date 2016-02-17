# CriterionSample
Sample code for Criterion.

Snaipe/Criterion: A KISS, non-intrusive cross-platform C unit testing framework
https://github.com/Snaipe/Criterion


# Build
e.g. Build test_parameterize

```console
cd test_parameterize/
cmake .
make
```


# Running tests
```console
./run_test.sh
[----] Criterion v2.2.0
[====] Running 1 test from parameterized_test:
[RUN ] parameterized_test::add
Test: lhs=1, rhs=1, expected=2
[PASS] parameterized_test::add: (0.00s)
[RUN ] parameterized_test::add
Test: lhs=-1, rhs=-1, expected=-2
[PASS] parameterized_test::add: (0.00s)
[RUN ] parameterized_test::add
Test: lhs=-100, rhs=200, expected=100
[PASS] parameterized_test::add: (0.00s)
[----] Writing xml report in `result.xml`.
[====] Synthesis: Tested: 3 | Passing: 3 | Failing: 0 | Crashing: 0
```
