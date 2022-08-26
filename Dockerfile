FROM alpine:3.14
WORKDIR /course_contents/
RUN apk add --update build-base python3 python3-dev py3-pip libxml2-dev libxslt-dev git openssh
RUN mkdir -p env /root/.ssh/
RUN python3 -m venv env
RUN . env/bin/activate
RUN pip install -r requirements.txt

EXPOSE 8000