ip: unbutn16版/20版本 

ssh  chenq@172.16.148.130

ssh  chenq129@ 172.16.148.129

ssh  chenq128@ 172.16.148.128

产生公钥私钥
ssh-keygen -t rsa -C  '？？？@qq.com'



cat /Users/？？？/.ssh/id_rsa.pub


scp ~/.ssh/id_rsa.pub 用户名@ip:/home/id_rsa.pub

scp /Users/roc/.ssh/id_rsa.pub  ？？@ 172.16.148.129:/home/id_rsa.pub



 cd /home/？？/.vscode-server/data/User/globalStorage/llvm-vs-code-extensions.vscode-clangd/install/17.0.3/clangd_17.0.3/bin/clangd


  cd  /home/？？？/.vscode-server/data/User/globalStorage/llvm-vs-code-extensions.vscode-clangd/install/17.0.3/clangd_17.0.3/bin




scp ~/.ssh/id_rsa.pub 用户名@ip:/home/id_rsa.pub

scp /Users/roc/.ssh/id_rsa.pub  roc@ 172.16.148.129:/home/id_rsa.pub


 cd /home/roc/.vscode-server/data/User/globalStorage/llvm-vs-code-extensions.vscode-clangd/install/17.0.3/clangd_17.0.3/bin/clangd


服务端安装ssh服务
sudo service sshd

sudo apt-get install sshd

sudo apt-get install openssh-server

sudo service sshd start

（设置成开机自启）

sudo systemctl enable ssh

sudo passwd root

apt  install  net-tools





Host server（根据你的设置这里有不同，主机名字）  HostName server_ip_address（根据你的设置这里有不同，服务器ip地址）  User username（根据你的设置这里有不同，用户名）  IdentityFile ~/.ssh/id_rsa



Linux su -root 和su root 

makedir -p和 makedir

Linux 修改用户名

1. $ sudo pkill -u dan
2. $ sudo pkill -9 -u dan
3. su - root
4. usermod -l susan dan

 usermod -l new_username old_username

要同时更改家目录，我们需要在执行 usermod 命令的同时加上 `-d` 选项，


$ sudo usermod -d /home/susan -m susan


1. $ sudo usermod -u 2000 susan
2. $ groupmod -n susan（new） dan(old)
3. id susan(new name)


powershell
ssh-copy-id -i ~/.ssh/id_rsa.pub username@server_ip_address


在根目录下创建.ssh目录（若存在，则忽略这一步）

mkdir -p ~/.ssh
// 修改权限
chmod 700  ./.ssh  
cd .ssh
touch authorized_keys
//修改权限
chmod 600 authorized_keys

通过FZ将本地电脑的authorized_keys(pub的内容复制到authorized_keys 文件)



执行 cat ~/id_rsa.pub > ./.ssh/authorized_keys 命令，
将公钥文件信息写入authorized_keys文件（cat命令使用 > 符号时，若文件不存在会自动创建。> 代表覆盖，>>代表追加）

执行  service sshd restart 或者  sudo service sshd restart 重启 sshd 服务
（如果服务器版本过高可能会要求使用 systemctl restart sshd）

同时，由于ssh不希望`home`目录以及`~/.ssh`目录对组有写权限，所以需要对目录进行权限更改。同时，ssh对于authorized_keys也有权限需求。

chmod 700 ./.ssh  

chmod 600 ./.ssh/authorized_keys



sudo chown chenq testfile //修改文件拥有者为 chenq 

[root@localhost home]# ls testfile -l 

chgrp [-R] 用户组名称 dirname/filename ...

参数：

-R : 进行递归( recursive )的持续更改，即连同子目录下的所有文件、目录

都更新成为这个用户组。常常用在更改某一目录的情况。

[root@localhost home]# chgrp chenq testfile //修改拥有者组为 chenq 

 使用 chown 一次性修改拥有者及组 
[root@localhost home]# chown root:root testfil e


更改为一个 /etc/group里不存在的用户组

[root@linux ~]# chgrp testing install.log

chgrp: invalid group name `testing' <== 出现错误信息～找不到这个用户组名～

gcc -v, gdb -v, g++ -v

sudo apt-get install openssh-server
sudo service ssh start
sudo service ssh status
sudo netstat -tlnp | grep sshd
sudo systemctl enable ssh

[root@localhost sysconfig]# sudo firewall-cmd --zone=public --add-port=8000/tcp --permanent
success
[root@localhost sysconfig]#sudo firewall-cmd --reload
success

//查看 端口和进程
lsof -i:8888
netstat -tnlp

pid_t p;
pthread_t t;
//获得进程id
p = getpid();
//获得线程id
t=pthread_self();
printf("\nthread id is %lld,procees id is %lld,waiting for into while...\n",(long long)t,(long long)p);
printf("\n进入线程：thread id is %lld,procees id is %lld,waiting for into while...\n",(long long)t,(long long)p);  
