FROM centos:6.9
RUN /etc/init.d/sshd start && echo "123456" | passwd root --stdin
EXPOSE 22
CMD ["/usr/sbin/sshd","-D"]
