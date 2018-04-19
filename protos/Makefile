INCLUDE = -I=.

protoc:
	## If you get the following error,
	## "error while loading shared libraries: libprotobuf.so.14: cannot open shared object file: No such file or directory"
	## See https://stackoverflow.com/a/25518702
	protoc $(INCLUDE) --cpp_out=./ ./*.proto
	protoc $(INCLUDE) --grpc_out=./ --plugin=protoc-gen-grpc=/usr/local/bin/grpc_cpp_plugin types.proto

