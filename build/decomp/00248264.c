// OoT3D decomp @ 00248264  name=FUN_00248264  size=104

void FUN_00248264(int param_1)

{
  short sVar1;
  char cVar2;
  float fVar3;

  fVar3 = DAT_002482cc;
  if (*(char *)(param_1 + 0x454) != '\0') {
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + DAT_002482cc;
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) - fVar3;
    *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) + fVar3;
  }
  cVar2 = *(char *)(param_1 + 0x453) + -4;
  *(char *)(param_1 + 0x453) = cVar2;
  *(char *)(param_1 + 0xd0) = cVar2;
  sVar1 = *(short *)(param_1 + 0x446) + -1;
  *(short *)(param_1 + 0x446) = sVar1;
  if (sVar1 < 1) {
    FUN_00374428();
    return;
  }
  return;
}
