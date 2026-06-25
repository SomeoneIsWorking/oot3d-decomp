// OoT3D decomp @ 0033b548  name=FUN_0033b548  size=52

char FUN_0033b548(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(DAT_0033b57c + param_2);
  if (((cVar1 == '\x02') && (*(int *)(DAT_0033b580 + 4) != 0)) &&
     (*(char *)(param_1 + 0x1a6) == '\x02')) {
    cVar1 = '\x01';
  }
  return cVar1;
}

