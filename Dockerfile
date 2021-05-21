FROM centos:6.9
EXPOSE 22
CMD ["/usr/sbin/sshd","-D"]
