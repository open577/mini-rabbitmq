main.exe:main.cc protoc.pb.cc
	g++ -o $@ $^ -std=c++11 -lprotobuf

.PHONY:clean
clean:
	rm main.exe