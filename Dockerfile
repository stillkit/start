#first dockerfile

FROM ubuntu:latest
# RUN apt-get update
# RUN apt-get install -y vim 

# RUN apt-get install -y nginx
# 以上执行会创建 3 层镜像。可简化为以下格式：
RUN apt-get update && apt-get install -y vim &&  apt-get install -y nginx
# 如上，以 && 符号连接命令，这样执行后，只会创建 1 层镜像。
#指定运行该镜像的容器使用的端口为 80
# docker run的时候 一定要加上 -P
EXPOSE 80
CMD ["nginx","-g","daemon off;"]
