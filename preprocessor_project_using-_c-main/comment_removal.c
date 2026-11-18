 #include"header.h"
 void remove_comments(const char *line, char *processed_line, int *in_multi_comment) {
     int p = 0;
     int i = 0;

     while (line[i] != '\0') {
         if (*in_multi_comment) {
             if (line[i] == '*' && line[i+1] == '/') {
                 *in_multi_comment = 0;
                  i += 2;
              } else {
                  i++;
              }
          } else {
              if (line[i] == '/' && line[i+1] == '*') {
                  *in_multi_comment = 1;
                  i += 2;
              }
              else if (line[i] == '/' && line[i+1] == '/') {
                  break;
              }
              else {
                  processed_line[p++] = line[i++];
              }
          }
      }
      processed_line[p] = '\0';
  }