

## build 
```
docker build --tag active-handout:supercomp -f ./Dockerfile
```


## run

```
docker run  -it -v ${PWD}:/course/contents:z --network host  active-handout:supercomp mkdocs serve
```

## deploy

```
docker run  -it -v ${HOME}/.ssh/:/root/.ssh/:z -v ${PWD}:/course/contents:z --network host  active-handout:supercomp mkdocs gh-deploy
```
