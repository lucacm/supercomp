

## build 
```
docker build --tag active-handout:supercomp . 
```


## run

```
docker run  -it -v ${PWD}:/course/contents:z -p 8000:8000 active-handout:supercomp mkdocs serve --dev-addr=0.0.0.0:8000
```

## deploy

```
docker run  -it -v ${HOME}/.ssh/:/root/.ssh/:z -v ${PWD}:/course/contents:z active-handout:supercomp mkdocs gh-deploy
```
