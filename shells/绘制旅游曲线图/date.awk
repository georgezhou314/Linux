/\(9点至16点每小时更新一次数据\)/{date=$1;print $1;}
/查看/&& !/暂无/ {
	for(i=0;i<8;i++)
	printf("%s, %s %s:00, %s\n",$1,date,9+i,$(i*2+2));
}
