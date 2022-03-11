#include "InsertionSort.h"
#include "QuickSort.h"
#include "MergeSort.h"
#include "ShellSort.h"
#include "IntroSort.h"
#include "TimSort.h"
#include <string>
#include <chrono>
using namespace std;
using namespace chrono;

#ifndef INC_22S_PA02_CULLENW_DRIVER_H
#define INC_22S_PA02_CULLENW_DRIVER_H
template<typename T>
class Driver{
public:
    void insertionSort(T a[], int size){
        start = high_resolution_clock::now();
        insertion_sort.sort(a, size);
        end = high_resolution_clock::now();

        getTime(start, end);

    }
    void quickSort(T a[], int size){
        start = high_resolution_clock::now();
        quick_sort.sort(a, size);
        end = high_resolution_clock::now();

        getTime(start, end);

    }
    void mergeSort(T a[], int size){
        start = high_resolution_clock::now();
        merge_sort.sort(a, size);
        end = high_resolution_clock::now();

        getTime(start, end);

    }
    void shellSort(T a[], int size){
        start = high_resolution_clock::now();
        shell_sort.sort(a, size);
        end = high_resolution_clock::now();

        getTime(start, end);

    }
    void introSort(T a[], int size){
        start = high_resolution_clock::now();
        intro_sort.sort(a, size);
        end = high_resolution_clock::now();
        getTime(start, end);

    }
    void timSort(T a[], int size){
        start = high_resolution_clock::now();
        tim_sort.sort(a, size);
        end = high_resolution_clock::now();
        getTime(start, end);
    }
    void sortRandomIntArrays(){
        // wake random array

        for(int i=0; i<sizes[0]; i++){
            srand(time(NULL));
            array[i] = rand()%sizes[0];
        }
        for(int i=0; i<sizes[1]; i++){
            srand(time(NULL));
            array2[i] = rand()%sizes[1];
        }
        for(int i=0; i<sizes[2]; i++){
            srand(time(NULL));
            array3[i] = rand()%sizes[2];
        }
        for(int i=0; i<sizes[3]; i++){
            srand(time(NULL));
            array4[i] = rand()%sizes[3];
        }
        for(int i=0; i<sizes[4]; i++){
            srand(time(NULL));
            array5[i] = rand()%sizes[4];
        }
        for(int i=0; i<sizes[5]; i++){
            srand(time(NULL));
            array6[i] = rand()%sizes[5];
        }

        timeIntSorts();

    }
    void sort80PercentRandomIntArrays(){
        // wake random array

        // ARRAY 1
        int size = sizes[0];
        int bound = size*.8;
        for(int i=0; i<bound; i++){
            srand(time(NULL));
            array[i] = rand()%size;
        }
        for(int i=bound; i<size; i++){
            array[i] = bound;
        }

        // array 2
        size = sizes[1];
        bound = size*.8;
        for(int i=0; i<bound; i++){
            srand(time(NULL));
            array2[i] = rand()%size;
        }
        for(int i=bound; i<size; i++){
            array2[i] = bound;
        }

        // ARRAY 3
        size = sizes[2];
        bound = size*.8;
        for(int i=0; i<bound; i++){
            srand(time(NULL));
            array3[i] = rand()%size;
        }
        for(int i=bound; i<size; i++){
            array3[i] = bound;
        }

        // ARRAY 4
        size = sizes[3];
        bound = size*.8;
        for(int i=0; i<bound; i++){
            srand(time(NULL));
            array4[i] = rand()%size;
        }
        for(int i=bound; i<size; i++){
            array4[i] = bound;
        }

        // ARRAY 5
        size = sizes[4];
        bound = size*.8;
        for(int i=0; i<bound; i++){
            srand(time(NULL));
            array5[i] = rand()%size;
        }
        for(int i=bound; i<size; i++){
            array5[i] = bound;
        }

        // ARRAY 6
        size = sizes[5];
        bound = size*.8;
        for(int i=0; i<bound; i++){
            srand(time(NULL));
            array6[i] = rand()%size;
        }
        for(int i=bound; i<size; i++){
            array6[i] = bound;
        }

        timeIntSorts();

    }
    void sort60PercentRandomIntArrays(){
        // wake random array

        // ARRAY 1
        int size = sizes[0];
        int bound = size*.6;
        for(int i=0; i<bound; i++){
            srand(time(NULL));
            array[i] = rand()%size;
        }
        for(int i=bound; i<size; i++){
            array[i] = bound;
        }

        // array 2
        size = sizes[1];
        bound = size*.6;
        for(int i=0; i<bound; i++){
            srand(time(NULL));
            array2[i] = rand()%size;
        }
        for(int i=bound; i<size; i++){
            array2[i] = bound;
        }

        // ARRAY 3
        size = sizes[2];
        bound = size*.6;
        for(int i=0; i<bound; i++){
            srand(time(NULL));
            array3[i] = rand()%size;
        }
        for(int i=bound; i<size; i++){
            array3[i] = bound;
        }

        // ARRAY 4
        size = sizes[3];
        bound = size*.6;
        for(int i=0; i<bound; i++){
            srand(time(NULL));
            array4[i] = rand()%size;
        }
        for(int i=bound; i<size; i++){
            array4[i] = bound;
        }

        // ARRAY 5
        size = sizes[4];
        bound = size*.6;
        for(int i=0; i<bound; i++){
            srand(time(NULL));
            array5[i] = rand()%size;
        }
        for(int i=bound; i<size; i++){
            array5[i] = bound;
        }

        // ARRAY 6
        size = sizes[5];
        bound = size*.6;
        for(int i=0; i<bound; i++){
            srand(time(NULL));
            array6[i] = rand()%size;
        }
        for(int i=bound; i<size; i++){
            array6[i] = bound;
        }

        timeIntSorts();

    }
    void sortAscendingArraysInt60(){
        // wake ascending array
        for(int i=0; i<sizes[0]*.6; i++)
            array[i] = i;
        for(int i=sizes[0]*.6, j=sizes[0]; i<sizes[0]; i++, j--)
            array[i] = j;

        for(int i=0; i<sizes[1]*.6; i++)
            array2[i] = i;
        for(int i=sizes[1]*.6, j=sizes[1]; i<sizes[1]; i++, j--)
            array2[i] = j;

        for(int i=0; i<sizes[2]*.6; i++)
            array3[i] = i;
        for(int i=sizes[2]*.6, j=sizes[2]; i<sizes[2]; i++, j--)
            array3[i] = j;

        for(int i=0; i<sizes[3]*.6; i++)
            array4[i] = i;
        for(int i=sizes[3]*.6, j=sizes[3]; i<sizes[3]; i++, j--)
            array4[i] = j;

        for(int i=0; i<sizes[4]*.6; i++)
            array5[i] = i;
        for(int i=sizes[4]*.6, j=sizes[4]; i<sizes[4]; i++, j--)
            array5[i] = j;

        for(int i=0; i<sizes[5]*.6; i++)
            array6[i] = i;
        for(int i=sizes[5]*.6, j=sizes[5]; i<sizes[5]; i++, j--)
            array6[i] = j;

        timeIntSorts();

    }
    void sortArraysString(){
        cout<<"INSERTION SORT\n";
        insertionSort(sarray, ssizes[0]);
        insertionSort(sarray2, ssizes[1]);
        insertionSort(sarray3, ssizes[2]);
        insertionSort(sarray4, ssizes[3]);
        insertionSort(sarray5, ssizes[4]);
        insertionSort(sarray6, ssizes[5]);

        cout<<"\nQUICKSORT\n";
        quickSort(sarray, ssizes[0]);
        quickSort(sarray2, ssizes[1]);
        quickSort(sarray3, ssizes[2]);
        quickSort(sarray4, ssizes[3]);
        quickSort(sarray5, ssizes[4]);
        quickSort(sarray6, ssizes[5]);

        cout<<"\nMERGE SORT\n";
        mergeSort(sarray, ssizes[0]);
        mergeSort(sarray2, ssizes[1]);
        mergeSort(sarray3, ssizes[2]);
        mergeSort(sarray4, ssizes[3]);
        mergeSort(sarray5, ssizes[4]);
        mergeSort(sarray6, ssizes[5]);

        cout<<"\nSHELL SORT\n";
        shellSort(sarray, ssizes[0]);
        shellSort(sarray2, ssizes[1]);
        shellSort(sarray3, ssizes[2]);
        shellSort(sarray4, ssizes[3]);
        shellSort(sarray5, ssizes[4]);
        shellSort(sarray6, ssizes[5]);

        cout<<"\nINTRO SORT\n";
        introSort(sarray, ssizes[0]);
        introSort(sarray2, ssizes[1]);
        introSort(sarray3, ssizes[2]);
        introSort(sarray4, ssizes[3]);
        introSort(sarray5, ssizes[4]);
        introSort(sarray6, ssizes[5]);

        cout<<"\nTIM SORT\n";
        timSort(sarray, ssizes[0]);
        timSort(sarray2, ssizes[1]);
        timSort(sarray3, ssizes[2]);
        timSort(sarray4, ssizes[3]);
        timSort(sarray5, ssizes[4]);
        timSort(sarray6, ssizes[5]);

    }

    void timeIntSorts(){
//        cout<<"INSERTION SORT\n";
//        insertionSort(array, sizes[0]);
//        insertionSort(array2, sizes[1]);
//        insertionSort(array3, sizes[2]);
//        insertionSort(array4, sizes[3]);
//        insertionSort(array5, sizes[4]);
//        insertionSort(array6, sizes[5]);

//        cout<<"\nQUICKSORT\n";
//        quickSort(array, sizes[0]);
//        quickSort(array2, sizes[1]);
//        quickSort(array3, sizes[2]);
//        quickSort(array4, sizes[3]);
//        quickSort(array5, sizes[4]);
//        quickSort(array6, sizes[5]);
//
//        cout<<"\nMERGE SORT\n";
//        mergeSort(array, sizes[0]);
//        mergeSort(array2, sizes[1]);
//        mergeSort(array3, sizes[2]);
//        mergeSort(array4, sizes[3]);
//        mergeSort(array5, sizes[4]);
//        mergeSort(array6, sizes[5]);

//        cout<<"\nSHELL SORT\n";
//        shellSort(array, sizes[0]);
//        shellSort(array2, sizes[1]);
//        shellSort(array3, sizes[2]);
//        shellSort(array4, sizes[3]);
//        shellSort(array5, sizes[4]);
//        shellSort(array6, sizes[5]);
//
        cout<<"\nINTRO SORT\n";
        introSort(array, sizes[0]);
        introSort(array2, sizes[1]);
        introSort(array3, sizes[2]);
        introSort(array4, sizes[3]);
        introSort(array5, sizes[4]);
        introSort(array6, sizes[5]);

//        cout<<"\nTIM SORT\n";
//        timSort(array, sizes[0]);
//        timSort(array2, sizes[1]);
//        timSort(array3, sizes[2]);
//        timSort(array4, sizes[3]);
//        timSort(array5, sizes[4]);
//        timSort(array6, sizes[5]);
    }
private:
    InsertionSort<T> insertion_sort;
    QuickSort<T> quick_sort;
    MergeSort<T> merge_sort;
    ShellSort<T> shell_sort;
    IntroSort<T> intro_sort;
    TimSort<T> tim_sort;

    constexpr static const int sizes[6] = {1000, 10000, 100000, 250000, 500000, 600000};
    constexpr static const int ssizes[6] = {10, 100, 250, 500, 750, 1000};
    int array[sizes[0]];
    int array2[sizes[1]];
    int array3[sizes[2]];
    int array4[sizes[3]];
    int array5[sizes[4]];
    int array6[sizes[5]];

    string sarray[10] ={"pkorit", "kzmnla", "gthimh", "aguoje", "sohryc", "sohryc", "sohryc", "sohryc", "sohryc", "sohryc"};
    string sarray2[100]={"ebefqx", "fwqqqp", "brgvdm", "ayabct", "nfsxie", "zfjdqt", "zprtyj", "agwsgi", "tiizud", "ugszrr", "rfyyas", "jlimmw", "vkdeju", "tnoehv", "viwbnn", "gqunvc", "lvdzrt", "ibpxbe", "gfhnwp", "yhgvuf", "trztnd", "udbeck", "cwkcbv", "gffcjy", "djkobo", "whqoud", "riguvp", "lvrjjb", "thelfx", "hdwwwq", "ppymdi", "wctzik", "uwvbwq", "jvjavr", "jsovij", "lmiuji", "oamkjw", "rynmmq", "ljpbrz", "tygrxw", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr", "fhorsr"};
    string sarray3[250]={"oizqyk", "qidukp", "tkpsto", "hmnlgq", "izubns", "olzgrx", "peuydm", "utulos", "strlth", "gemlao", "dwrxni", "ijtcqu", "smwxse", "lzgtcl", "zfpybr", "agwcgh", "lcjvlv", "iooxcz", "nepuel", "kziixk", "qvpvtn", "nmdggo", "uitabb", "cvpkrs", "vbudur", "mgmzoq", "qwxhum", "drqzaq", "wcihoz", "opozwv", "cpgjtt", "tpniej", "lmexix", "ykhosh", "mvphnj", "evcgub", "cirjrh", "hxgxvt", "jdpbfy", "alenec", "momenz", "zdehit", "ahbsgp", "soehxo", "knogkn", "esbjld", "abhvjm", "vzzjxb", "rxoigl", "sgidkh", "hnhyle", "pxveke", "uudysg", "eoupql", "zkldyg", "sslfcv", "zvgstm", "wdvkvl", "hgsbwe", "yskmoz", "pkiijz", "djpgsm", "tvlfjg", "cksaos", "zqqxwb", "aogjuw", "pzluum", "pehaxz", "kalgom", "tulszw", "ibfrst", "meezem", "nydyxt", "knlcvq", "qnvjbj", "geqgyt", "snbwao", "fadrks", "fuxuzu", "ttzdnw", "axphwt", "xaseuw", "yzvsit", "ogkwhz", "fvqbun", "byspco", "osfjdi", "ozplwr", "tdydev", "xohvok", "edfoze", "eenxxe", "oyfszt", "qazpab", "udqqtc", "hcfmal", "azrkmt", "lxdbku", "cvfpgo", "yoxgfb", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw", "igrenw"};
    string sarray4[500]={"dewijb", "nwdloj", "uazlzb", "fvmmkc", "bouyue", "ceywwr", "vjvodu", "dupxyu", "paavir", "npmsjg", "smvpdp", "leygef", "cfhevf", "eersqd", "wlwwka", "gnhuyk", "dkjpje", "vlwsxh", "gkpuih", "lplsdz", "clqdtz", "rhusdo", "qpywsm", "zpvmly", "sqwznf", "nawdjb", "rrebgn", "jijxay", "hwpddz", "aggvxi", "cvloev", "qnrqcb", "aygdkq", "xtcmkc", "wbpaec", "selulr", "btkeqt", "yzdmkw", "hzhxsw", "fwaoaj", "rkgfcz", "voazfa", "sbmbed", "xjiyvn", "ahcsvk", "ugmbny", "hauddl", "jlhvxe", "fgaoxv", "lcptrq", "gxhjyp", "bkmvtk", "ezegfj", "zgqapo", "tqvvgk", "qgvaqn", "zpevpo", "kmafjv", "cdxahw", "zdcbve", "tocjvr", "ojkxfj", "hudgpo", "hiusab", "ogcuxr", "gidbej", "muarop", "ixvzdm", "pnnhcj", "lnuhrq", "zidndt", "mltfdc", "bnotja", "jrzmcz", "bjrbkr", "ryyfbr", "tcogma", "ixdbyw", "ylgkza", "hpmrsc", "mxruzh", "ueptsh", "yodngi", "jrsofl", "kjfyom", "pmiyjz", "epsdsa", "dqdzqk", "npyyyl", "rivggp", "rbznhe", "tbuuga", "lupdyy", "jfcnvu", "bevgnw", "zftfxq", "nycjck", "qnpihs", "bnntvj", "uwdtqb", "byznkv", "gwwnzn", "uaixvq", "aeadmi", "arqjkb", "kqltlm", "xmjucx", "ynfeaz", "ndrtfx", "gcuerg", "dpaqtk", "sgvjtz", "sqursn", "rmpayk", "mcsbpz", "tzweyl", "nttxxc", "esvbqy", "ojmzcs", "fmrvnu", "ecnplz", "wrldts", "kdgmvu", "jtiuxr", "ewaavv", "vjgoso", "jssgwu", "nwlafw", "xzitsz", "ctohvs", "tascgc", "azbznz", "xtwypo", "tdxosg", "uesdla", "mmbpoi", "feskbz", "tfmonz", "wschph", "vfbpmc", "gbmdmj", "oafwzz", "zixfht", "pifdue", "kyygre", "cfugnb", "rdrvpg", "zlrnso", "weesym", "tnwcio", "guhffh", "grqxdi", "alwcuu", "chrhvr", "iatgaw", "unfndk", "rjrkrq", "iwxeet", "pusdkb", "imvbeg", "cgqdqr", "gsluhi", "woesnh", "qryptm", "ylcvdf", "vsgmco", "ldkuhy", "wnctfc", "uzlthx", "phkrwu", "dgsiwj", "zovvdp", "bhthrg", "orebyn", "kjotoo", "hthexl", "udddjk", "oingat", "rlxvkb", "uabbpt", "snvjyn", "kxqwxh", "ulvdul", "kszvsn", "xsxwls", "bfmehq", "qgzsjc", "ngfgxk", "anahrs", "tckhjx", "srjojs", "hsewhc", "rdbkml", "gnwhrr", "qlantk", "ubekre", "ogsedc", "wzcrdn", "qpfglz", "vhrmgo", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk", "avbdfk"
    };
    string sarray5[750]={"zwsorj", "trhzty", "hvbqvo", "jxynpe", "tjmker", "xgtftm", "ecpxpc", "odojni", "ipeqcg", "mykbxi", "dmrlne", "lixcrw", "idmvwo", "zmjahi", "iuijqv", "khvxyb", "dwdbim", "lithhs", "fnosqf", "jiqeza", "trjffn", "jeorfs", "ueyacw", "svjyvz", "eqrchw", "ertzht", "zjdrph", "bodsyc", "ciiuhm", "gesswo", "qfgbaj", "ewcryj", "tdembk", "jbcfqj", "gjosle", "msiaza", "hiqmnx", "egdhfc", "fqocpf", "gqwtsu", "xzttum", "yyhgzl", "oapjhu", "vpnwbp", "fdnhvt", "rvtpcq", "qnerdb", "pogvvd", "jdolxu", "hbffjw", "oziwro", "rgbsnl", "qchyhm", "nbboyr", "uodgrq", "dynxoo", "iqvysl", "jxyxdc", "xpkkrg", "zibleu", "tipvrx", "yvqpsj", "axwplm", "zjgpfk", "nkultt", "dnzgqm", "szvgoz", "dhogmg", "poocsa", "vkogks", "qjirrw", "myvghm", "ejrpct", "xlfqho", "ltgbeo", "qhabrr", "crlxjq", "bjvgsi", "yhrepz", "oavpmo", "sdnrxx", "daffwe", "djuslk", "qeotux", "lxxntm", "uvtccm", "pydpnw", "audkku", "vzgiqu", "dzsjib", "ebgubl", "gphocg", "cjcgit", "rfbzfh", "ehrekj", "hspayv", "enfimx", "osgzyy", "hogmde", "deanrf", "cnchul", "fcgmlp", "ovutrs", "tppugs", "cxvwsm", "iuzdod", "tgudie", "cqhzwa", "hivbdi", "drdidb", "bgnxqt", "xsarly", "fkytft", "bkwdow", "acsqww", "rpcppe", "zledjm", "bnnkuw", "qqnfqj", "wotidg", "hqnolc", "adqxue", "avrnfj", "cjsvtd", "zqpeqh", "jdmlhf", "zxgrlt", "uvsjzl", "hemoel", "ntatql", "nrnyra", "fqwnag", "cvhxau", "uqlmsd", "qijmiy", "talucy", "twcpdf", "lijlje", "zqkrpw", "shxgzv", "yjncov", "lbtmth", "bhouai", "thcxye", "uiokyg", "nhksmu", "ukzgwp", "gowmja", "cmzuge", "wrtvud", "tgmjuk", "huwawm", "srixpe", "mdjifa", "qveqdk", "egdvrx", "tdbgeo", "tmtisy", "dakvri", "szfbin", "uwpvws", "pmvhrr", "szeomu", "iohsgk", "pyxfxh", "rhcusa", "ukuiel", "ncrdmr", "wvkrii", "xucfso", "azkjrm", "hcxzqv", "eqsbjw", "otohpp", "umlrec", "vnnyax", "acnqzq", "ltlume", "tpjfpj", "uwxipb", "ynskrv", "ajgntu", "tapjrl", "dulzng", "hdveox", "zyiqvo", "qkiprl", "gxbwyi", "wvvdgf", "epeoum", "hnevti", "wptpxe", "cmtpol", "guntry", "iphdmj", "dqudmj", "eaacpq", "ybodty", "plxivl", "uauspl", "iqnzxc", "bndpab", "vpfziy", "wkavze", "moixav", "uehppw", "uraabw", "rzjsaj", "pytgjo", "hlaxeu", "nbqoql", "egpotm", "ightol", "qjemug", "xdqycp", "piejfc", "mutaeq", "gblmpk", "ryggyz", "fchqiv", "afgebb", "smaqki", "uxwhdb", "dqnbcq", "elewft", "wymdgs", "wkavxh", "mdvvds", "nwkqge", "mffgfd", "snqtjy", "dqxhba", "jzbtxj", "aptbzi", "msekqy", "fppxqy", "vaxtak", "smoqxo", "fgohxa", "dmottv", "vsrfsp", "kwqbjf", "micqcz", "molhny", "afqsjc", "jtduuo", "aohsbw", "pssrmt", "oalmsk", "cepqdu", "huorol", "liznma", "kzalgv", "tiliib", "wtkvhe", "getqgl", "ntycvl", "jhxjsj", "ohwfsb", "cmunft", "cwmlex", "djevew", "ufxaxa", "yxtpih", "nfattw", "dzevnz", "zsafdi", "qglvzv", "rzzpdg", "fcbkoa", "jvqirb", "urlglc", "mmfgvb", "yrfktw", "gpghvv", "qpdabr", "panbgj", "ilopfy", "tcovtz", "rmznau", "qgfwie", "udxals", "hawprc", "omfgza", "dibhej", "xqrfxj", "trpdgg", "bvvdvt", "rxczdy", "xlsyup", "jzhyir", "xtsksq", "mdiold", "wyqkzp", "whtwnf", "vkxvch", "tnqihl", "vbzmys", "qntfcg", "xjzyne", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq", "stbkwq"
    };
    string sarray6[1000]={"srbish", "otjvha", "juiygy", "jnzeft", "yyhkvw", "uingnb", "jorfkk", "aujxxm", "yirrsr", "sdxznn", "bjrkdq", "zefrfu", "mibznt", "nmknjg", "lhuzlq", "dtznaa", "rgbioo", "jhxlee", "lhbepo", "hbqwxf", "mvvebd", "ymrblh", "niizvk", "tcpago", "zgzhfp", "yheabx", "eztyhs", "nxargj", "awnrdg", "ddwbqg", "uvqrml", "tazvcg", "qlyrzh", "whdrzc", "vmyoto", "mutllu", "ncadgw", "yuqpjq", "nqityl", "bflxob", "ylzydd", "nptzjj", "eakkte", "hglzro", "vixyfy", "glneoy", "azejmm", "hrpkuy", "mcvkcl", "biuplu", "aoqznq", "nluvhw", "cgudsu", "qwfibl", "qkdemp", "ftegyi", "dkcypz", "ihyolf", "rmflzt", "hcdxks", "rklnnx", "woqtdb", "orlvls", "efycbu", "oipiab", "eigcvq", "gkrpru", "jaodwy", "ectcie", "jwntpu", "knetuw", "wymsos", "fclonc", "ryykik", "mrpgqi", "rzvbrn", "gfsdvi", "ltklwo", "zcdape", "izbqnz", "yhgdtb", "enzmso", "dpttri", "fmriou", "nqetit", "ciiurb", "lbmyqs", "evxblr", "fryxuk", "swniqm", "apibgv", "kbsrsb", "gbywga", "vuxwao", "olwkir", "ojpgaw", "hkwlmn", "adviqo", "rpiooo", "laflsk", "yhoihi", "hvzhsl", "rrxynk", "qtwcuy", "fznivh", "wtjszh", "bpmvoi", "cljvlu", "izhkyu", "tswpim", "vrwzrj", "nwyuxb", "vgdcwv", "injlcc", "ncuqnk", "eretfp", "eckmsk", "muyhsp", "sqjafn", "avdhkh", "xavzwt", "abxwvw", "ciiukj", "ejulag", "xepghj", "skhzyz", "ulbbcd", "fmdfkv", "kwgnlu", "tojyvs", "hxujpy", "xuhtin", "apwnkf", "jiibvp", "weffgh", "dqgvha", "phcwhb", "frqcdl", "wjpgaj", "gsocrn", "xhkrwz", "qjnsnf", "alazgi", "bnydgj", "fwaoor", "sxevhr", "qirsts", "bevpbp", "wuhyvf", "baukpf", "sjztaj", "etsysr", "fozmjb", "gkzswm", "ivsbed", "ejysbz", "fbjtlt", "knaaqa", "gnjpoc", "ofeair", "zdlyye", "hvchfo", "qilnrw", "wttzjx", "egezuj", "yufbta", "jmrjwx", "sgipby", "wnjhjp", "rsohzd", "eyofnz", "nmdywp", "mdogel", "ugfwsh", "wrkiiu", "ukutfh", "dzlltw", "weswvy", "haphnl", "jhglsf", "bxpbwx", "edddly", "hpifyh", "vohden", "nrgosa", "kcmufg", "yephdy", "hphpuj", "osxfpx", "dxsbqg", "smhkon", "yedfbl", "fvhydg", "istkca", "mydbbf", "nqehak", "biyfln", "vflgne", "rjtxjh", "hyxsth", "mjwomw", "ymbmax", "svghun", "swlsch", "smpfdx", "buocdp", "rvxfgj", "quustf", "esgvkk", "oitcfn", "sdvhbq", "myscnz", "deuvxt", "awgdbh", "azqucs", "xjeagq", "wbmsio", "bpjbmb", "sjldjb", "xtshqa", "ksumpp", "mlhicu", "xauadb", "bbjrpe", "adclfa", "sptcgd", "kwqybr", "ncadyh", "tqakcq", "cdhqgb", "drnkky", "nenbpr", "bfrzls", "hwotdn", "bfcgul", "svpyop", "reaywv", "mbjlhb", "zlxelj", "zsoxbc", "ovpjvf", "aihmxn", "bswkov", "otapzb", "etgtam", "urpuut", "igmjds", "izyecw", "ookbjr", "qhphhj", "ftmmyx", "toiwme", "gmrnws", "ccrzgd", "xqnjbc", "wfudgn", "lzjnqs", "dtried", "hllwir", "hdxvzf", "pkyjrk", "fnmogb", "roaito", "zjqhwk", "zjlsoz", "elkhlr", "vxicxh", "dyyydc", "jgrnht", "dwsdet", "jeawiw", "gthulo", "ypfrgm", "zqwecx", "dqjcuk", "wwdynl", "jtcphv", "dzimzx", "xeqomt", "igahqj", "ppffjq", "pvathq", "mpkeid", "fpdpqt", "ckfepw", "gsglhl", "zlwmik", "lsuzvu", "cmteus", "cmqxss", "qsmeci", "pfyfpd", "uacpsm", "egjqae", "ylhmow", "gtdnau", "fdhsug", "hvuxvw", "khwncd", "njqcaw", "xeycbu", "lenwig", "rthfrq", "vhwsnr", "srvtuw", "qbcdnk", "rxexxg", "iswwij", "lxjphl", "milydb", "jmwsxc", "snnomj", "xkalfz", "lwvbld", "dritpa", "lyocsu", "zsguuz", "qcclne", "jshkfr", "znaqmp", "xeqzpb", "nrhvip", "bywwjk", "mvahiz", "zogind", "hfcgnb", "ymnccc", "gjemyt", "ktesmq", "ghchxu", "vwezjv", "cvfykh", "zhdzll", "cavpav", "svvtui", "dmhawg", "wigduw", "jdexow", "xovrpd", "ouqzml", "cnqrve", "mhpikm", "ddphry", "pjptrt", "akxgeo", "fqolqc", "qdfxbm", "mojzjl", "idzqeo", "speaqz", "cyecue", "ipwlap", "bbqurc", "yldppl", "uvzkqa", "quhbik", "peyako", "vazkna", "rhwmmj", "myiyyq", "ysqbft", "rykbkm", "bbvjje", "zingtk", "pfigtt", "jpills", "yjkswb", "zrnctl", "ibcyqh", "lgsmob", "zihgfr", "ojgsdu", "gbpunq", "pwcmbn", "giwxux", "jnmncm", "guykcb", "piwqre", "enzkui", "wcxbrx", "vkctyv", "uftbmu", "xkdxiu", "ivhywp", "kzpxmh", "ohvuug", "kgssgy", "jsamuf", "byjewv", "yadzqo", "cfoeja", "ecuakb", "nwaoqp", "kxqkzs", "pmvtxh", "jcmzpe", "xmozin", "pejdfr", "orwbqt", "dybfzs", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc", "mlnulc"
    };



    time_point<high_resolution_clock> start, end;

    double getTime(time_point<high_resolution_clock> start, time_point<high_resolution_clock> end){
        //calculate the duration between start and end and print to the terminal
        duration<double> time_in_seconds = end - start;
        cout << fixed << time_in_seconds.count() << endl;
        return time_in_seconds.count();
    }
};
#endif //INC_22S_PA02_CULLENW_DRIVER_H
