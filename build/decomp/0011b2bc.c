// OoT3D decomp @ 0011b2bc  name=FUN_0011b2bc  size=288

void FUN_0011b2bc(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;

  iVar2 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar2 == 0) {
    uVar3 = VectorFloatToUnsigned
                      ((*(float *)(param_1 + 0x1e0) * DAT_0011b3ec) / *(float *)(param_1 + 0x1ec),3)
    ;
    *(char *)(param_1 + 0x9ed) = (char)uVar3;
    if (*(char *)(param_1 + 0x9e0) == '\0') {
      FUN_00366c24(param_1,param_2);
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x9ed) = 0xff;
    uVar3 = DAT_0011b3dc;
    if (*(char *)(param_1 + 0x9e0) == '\0') {
      FUN_00370350(DAT_0011b3e0,param_1 + 0x1a4,2);
      uVar3 = DAT_0011b3e4;
      *(undefined1 *)(param_1 + 0x9ed) = 0xff;
      *(short *)(param_1 + 0x9e6) = (short)uVar3;
      *(undefined2 *)(param_1 + 0x9e8) = 3;
      *(byte *)(param_1 + 0x9e5) = *(byte *)(param_1 + 0x9e5) | 9;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
      *(undefined4 *)(param_1 + 0x9dc) = DAT_0011b3e8;
    }
    else {
      *(byte *)(param_1 + 0x9e5) = *(byte *)(param_1 + 0x9e5) | 1;
      *(undefined4 *)(param_1 + 0xa90) = uVar3;
      if ((*(short *)(param_1 + 0x9e6) == 0) ||
         (sVar1 = *(short *)(param_1 + 0x9e6) + -1, *(short *)(param_1 + 0x9e6) = sVar1, sVar1 == 0)
         ) {
        *(undefined1 *)(param_1 + 0x9e3) = 0x1e;
        FUN_0036efa8(param_1);
        return;
      }
    }
  }
  return;
}
