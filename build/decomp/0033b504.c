// OoT3D decomp @ 0033b504  name=FUN_0033b504  size=64

void FUN_0033b504(int param_1,int param_2)

{
  byte bVar1;
  
  *(char *)(param_1 + 0x1b0) = (char)param_2;
  if (param_2 == 1) {
    *(undefined *)(param_1 + 0x1b3) = 0;
  }
  else {
    bVar1 = *(byte *)(DAT_0033b544 + param_2 * 5);
    *(byte *)(param_1 + 0x1b3) = bVar1;
    if (2 < bVar1) goto code_r0x0033b540;
  }
  if (*(char *)(param_1 + 0x1a6) == '\0') {
    *(undefined *)(param_1 + 0x1b3) = 0;
  }
code_r0x0033b540:
  FUN_0032c2c0();
  return;
}

