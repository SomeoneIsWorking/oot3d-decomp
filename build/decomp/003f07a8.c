// OoT3D decomp @ 003f07a8  name=FUN_003f07a8  size=236

void FUN_003f07a8(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  char cVar3;
  float fVar4;

  fVar1 = DAT_003f08a4;
  iVar2 = DAT_003f0898;
  *(undefined4 *)(param_1 + 0x6c) = DAT_003f0894;
  cVar3 = '\0';
  fVar4 = DAT_003f089c;
  if (*(int *)(iVar2 + 0x10) != 0) {
    fVar4 = DAT_003f08a0;
  }
  if (*(float *)(param_1 + 0x98) <= fVar4 * fVar1) {
    if ((int)*(float *)(param_1 + 0x98) < DAT_003f08a8) {
      cVar3 = '\x02';
    }
    else {
      iVar2 = FUN_0036cd8c(param_2);
      if (iVar2 != 0) {
        cVar3 = '\x01';
      }
    }
  }
  if (cVar3 == '\0') {
    if ((*(ushort *)(param_1 + 0x978) & 2) != 0) {
      FUN_00375a18(param_1 + 0x36,(int)*(short *)(param_1 + 0x97a),2,0x400);
      *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
    }
  }
  else {
    FUN_00369674(param_1,2);
    *(undefined1 *)(param_1 + 0x989) = 0x96;
    *(undefined2 *)(param_1 + 0x97c) = *(undefined2 *)(param_1 + 0x92);
    *(char *)(param_1 + 0x98a) = cVar3;
  }
  if (*(short *)(param_1 + 0xbe) == *(short *)(param_1 + 0x97a)) {
    FUN_00369674(param_1,0);
    return;
  }
  return;
}
