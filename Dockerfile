FROM alpine:3.14
RUN apk add --update build-base python3 python3-dev py3-pip libxml2-dev libxslt-dev git openssh
RUN mkdir -p /course/contents /root/.ssh/
COPY requirements.txt /course/
RUN python3 -m venv /course/env
RUN . /course/env/bin/activate
RUN pip install -r /course/requirements.txt

WORKDIR /course/contents/

EXPOSE 8000
