#!/bin/sh
docker  run  -it -v ${PWD}:/course/contents:z -p 8000:8000 active-handout:supercomp  mkdocs serve --dev-addr=0.0.0.0:8000