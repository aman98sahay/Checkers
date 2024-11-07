cmake_minimum_required(VERSION 3.20)

project (TIC_TAK_TOE LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)


include(FetchContent)

FetchContent_Declare(FMT 
	GIT_REPOSITORY https://github.com/fmtlib/fmt.git
	GIT_TAG 	  11.0.2
)

FetchContent_MakeAvailable(FMT)

add_executable(checkers 

	"src/main.cpp"
	"src/MeshData.cpp" 
	"src/MeshPrinter.cpp"
	# "src/TikTakToe.cpp"
	"src/Cheker.cpp"
 	"hpp/MeshData.hpp"
 	"hpp/MeshPrinter.hpp"
 	"hpp/TikTakToe.hpp"

)

target_link_libraries(checkers PRIVATE fmt::fmt)

target_include_directories(checkers PUBLIC

	${CMAKE_SOURCE_DIR}/hpp/
)