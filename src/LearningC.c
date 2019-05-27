/*
 ============================================================================
 Name        : LearningC.c
 Author      : Raul Fernandes Rodrigues
 Version     :
 Copyright   : memes!
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE *fp;

  fp = fopen("assets/bible.txt", "rw");

  if (fp == NULL)
  {
    return 1;
  }

  long int lines = 0;

  int array[512];

  char ch;

  while((ch = fgetc(fp)) != EOF)
  {
    array[ch - 97]++;
    if(ch == '\n') lines++;
  }

  printf("Number of lines: %li\n", lines);

  for(int n = 0; n < 26; n++) {
      printf("%c: %d\n", n + 97, array[n]);
  }

  fclose(fp);

  return 0;
}

