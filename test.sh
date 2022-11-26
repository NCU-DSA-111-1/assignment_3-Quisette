make
echo "arithmetic encoding"
./arth/main.o -e ./io_files/test.txt ./io_files/arith/arith_out
echo "arithmetic decoding"
./arth/main.o -d ./io_files/arith/arith_out ./io_files/arith/arith_back.txt

echo "----------------"

echo "huffman encoding"

./chuffman/main.o -e ./io_files/test.txt -b ./io_files/huff/huff_booktable.txt -o io_files/huff/huff_out
./chuffman/main.o -d ./io_files/huff/huff_out -b ./io_files/huff/huff_booktable.txt -o io_files/huff/huff_back.txt
echo "huffman decoding"
