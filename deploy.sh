#!/bin/sh
docker run  -it -v ${HOME}/.ssh/:/root/.ssh/:z -v ${PWD}:/course/contents:z active-handout:supercomp mkdocs gh-deploy