## Git的使用
* `git branch branch1`
表示创建branch1分支  
* `git checkout branch1` 
由当前分支切换到branch1分支  
* `git push origin branch1:branch1` 
 表示从本地branc1推送到远程branch1  
* `git branch -d branch1` 
 表示删除本地分支branch1  
* `git push origin --delete branch1` 
表示删除远程分支branch1  
* `git branch -a` 
### 只clone近几次的提交
```
# 仅跟踪近3次commit，体积明显要小很多
git clone xxx.git --depth 3
```
### 抛弃全部提交历史，重建
```
rm -rf .git
git init
git add -A
git commit -m "核平"
git remote add origin '*.git'
git push origin master --force

```
### 清除跟踪所有的.idea文件
```
# -r表示递归删除跟踪的目录
git rm -r --cached -rf .idea
```

### 从GitHub拉去出一个仓库并在本地新增文件
>1. `git remote rm origin`   
>2. `git remote add origin git@github.com:Geogechou/Java.git`   
>3. `git clone git@github.com:Geogechou/Java.git`   
>4. `git push origin master`     

### Git命令行中文路径出现\123编码
切换回正常中文显示
`git config --global core.quotepath false`
