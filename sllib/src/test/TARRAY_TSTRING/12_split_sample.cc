/**
  example code
  tarray_tstringクラス:tarray_tstring &split( const char *line, const char *delims,
				      bool zero_str,const char *quotations, int escape )
		       tarray_tstring &split( const char *line, const char *delims, bool zero_str = false )
                       文字列を分割し文字列配列へ代入
*/
#include <sli/stdstreamio.h>
#include <sli/tarray_tstring.h>

using namespace sli;

int main( int argc, char *argv[] )
{
    stdstreamio sio;

    const char *line = "Fragrant olive is 'KINMOKUSEI'. It is good smell.";
    tarray_tstring my_arr;
    //lineの文字列を空白文字で分割
    my_arr.split(line, " ", false);
    for ( size_t i=0 ; i < my_arr.length() ; i++ ) {
        sio.printf("my_arr[%zu] ===> %s\n", i, my_arr.cstr(i));
    }

    return 0;
}

