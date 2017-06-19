#!/bin/bash -e

declare awslib="$(readlink -f "${BASH_SOURCE[0]}")"
awslib="$(cd "$(dirname "$awslib")" && pwd)"
for f in "$awslib"/inc/**/*.fn; do source "$f"; done
