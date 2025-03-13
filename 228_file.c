//append mode for append new content inside file 
#include <stdio.h>
void main()
{
    FILE *ptr;
    ptr = fopen("abc.txt", "a");
    fprintf(ptr, "this content write inside file using printf\n");
    fprintf(ptr, "Indore is a city in west-central India. It’s known for the 7-story Rajwada Palace and the Lal Baag Palace, which date back to Indore’s 19th-century Holkar dynasty. The Holkar rulers are honored by a cluster of tombs and cenotaphs at Chhatri Baag. The night market Sarafa Bazar sells street food. East is the Indo-Gothic Gandhi Hall and clock tower. The Jain temple Kanch Mandir has a mirrored\n");
    fclose(ptr);
}