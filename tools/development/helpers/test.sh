#!/bin/bash

################################################################################################################################################################

# @project        Library/IO
# @file           tools/docker/environment/helplers/test.sh
# @author         Lucas Brémond <lucas@loftorbital.com>
# @license        TBD

################################################################################################################################################################

script_directory="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

# make test

if [[ -z ${1} ]]; then
    ${script_directory}/../bin/*.test
else
    ${script_directory}/../bin/*.test --gtest_filter=${1}
fi

################################################################################################################################################################