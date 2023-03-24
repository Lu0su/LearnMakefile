#使用便利
OBJ=add.o sub.o multi.o calculate.o
TARGET=calculate

#$^将作为指定目标的替代,￥@将作为指定依赖的替代
# 生成最终的目标文件时就不要使用-c参数了
# 使用CXX这些是为了可移植性
${TARGET}:${OBJ}
	${CXX} $^ -o $@

add.o:add.cpp
	${CXX} -c $^ -o $@

sub.o:sub.cpp
	${CXX} -c $^ -o $@

multi.o:multi.cpp
	${CXX} -c $^ -o $@

#这里将calculate.cpp也事先编译为了.o文件
calculate.o:calculate.cpp
	${CXX} -c $^ -o $@

clean:
	${RM} *.o ${TARGET} 

show:
	echo ${AS}
	echo ${CC}
	echo ${CPP}
	echo ${CXX}
	echo ${RM}