 #include"header.h"
 void process_file(FILE *in, FILE *out) {
     int size;
     int multi_line=0;
     fseek(in,0,SEEK_END);
     size=ftell(in);
     fseek(in,0,SEEK_SET);
     char line[size];

      while (fgets(line, sizeof(line), in)) {
          char comment_removed[size];
          remove_comments(line,comment_removed,&multi_line);
          char filename[size];
 
          if ((sscanf(line, "#include \"%[^\"]\"", filename) == 1) ||
                  (sscanf(line, "#include <%[^>]>", filename) == 1)) {
 
              FILE *inc = fopen(filename, "r");
              if (inc) {
                  process_file(inc, out);
                  fclose(inc);
              }
          } else {
              macro_replace(comment_removed,out);
          }
      }
  }