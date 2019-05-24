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
  char ch;
  while((ch = fgetc(fp)) != EOF)
  {
    if(ch == '\n') lines++;
  }

  printf("Number of lines: %li", lines);

  fclose(fp);

  return 0;
}

