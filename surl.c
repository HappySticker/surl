
#include <stdio.h>
#include <unistd.h>
#include <curl/curl.h>

static const char *optString = "ab:c:h";

int main(int argc, char const *argv[])
{
    
    int opt;
    opt = getopt(argc, (char *const *)argv, optString);
    while (opt != -1)
    {
        switch (opt)
        {
        case 'a':
            printf("receive a \n");
            break;

        case 'b':
            printf("receive b with argument :%s \n", optarg);
            break;

        case 'h':
            printf("Usage : help \n");
            break;

        default:
            printf("*** can't recognize input char!!! \n");
            break;
        }

        opt = getopt(argc, (char *const *)argv, optString);
    }

    CURL *easy_handle = curl_easy_init();
    if(easy_handle != NULL){

        printf("curl_easy_init OK!\n");
    }
    

    return 0;
}
