ragel_host(ragel-pascal rlparsePascal "rlhcPascal" "rlhc-pascal.lm")

if(COLM_INSTALL_RAGEL)
	install(FILES out-pascal.lm
		DESTINATION "${CMAKE_INSTALL_DATADIR}")
endif()
