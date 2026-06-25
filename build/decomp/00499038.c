// OoT3D decomp @ 00499038  name=FUN_00499038  size=64

void FUN_00499038(int param_1,short param_2)

{
  short sVar1;
  
  sVar1 = param_2;
  if (*(char *)(DAT_00499078 + 0x59a) != '\0') {
    sVar1 = param_2 + 0x1d;
    if (*(char *)(DAT_00499078 + 0x59a) == '\x02') {
      sVar1 = param_2 + 0x3a;
    }
  }
  *(short *)(param_1 + 0x2dd8) = sVar1;
  *(undefined2 *)(param_1 + 0x2dd6) = 1;
  return;
}

