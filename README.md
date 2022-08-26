

## build 
```
docker build --tag active-handout:supercomp -v ${PWD}:/course_contents:z -f ./Dockerfile
```


## run

```
docker run  -it -v ${PWD}:/course_contents:z --network host  active-handout:supercomp mkdocs serve
```

## deploy

```
docker run  -it -v ${HOME}/.ssh/:/root/.ssh/:z -v ${PWD}:/course_contents:z --network host  active-handout:supercomp mkdocs gh-deploy
```
