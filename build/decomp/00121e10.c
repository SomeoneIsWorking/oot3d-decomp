// OoT3D decomp @ 00121e10  name=FUN_00121e10  size=484

void FUN_00121e10(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;

  iVar3 = FUN_003731e0(param_1 + 0x1a4);
  uVar4 = DAT_00121ff4;
  if ((iVar3 != 0) && ((*(uint *)(param_1 + 4) & 0x8000) == 0)) {
    if (*(char *)(param_1 + 0xb7) == '\0') {
      *(undefined2 *)(param_1 + 0x9e6) = 0;
      *(undefined4 *)(param_1 + 0x6c) = uVar4;
      uVar2 = DAT_00122010;
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + DAT_00122004;
      *(undefined4 *)(param_1 + 0xc4) = DAT_00122008;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      uVar1 = DAT_0012200c;
      *(undefined1 *)(param_1 + 0x9e5) = 0;
      *(undefined4 *)(param_1 + 0x9dc) = uVar1;
      FUN_00371808(param_2,DAT_00122014,uVar2,param_1,0);
    }
    else if (*(char *)(param_1 + 0x9e0) == '\0') {
      if (*(char *)(param_1 + 0x9e1) == '\0') {
        FUN_00370170(param_1,param_2);
      }
      else {
        FUN_00370170(param_1,0);
      }
    }
    else {
      FUN_00370350(DAT_00121ff8,param_1 + 0x1a4,5);
      uVar1 = DAT_00121ffc;
      *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0xbe) + -0x8000;
      *(undefined4 *)(param_1 + 0x6c) = uVar1;
      *(undefined2 *)(param_1 + 0x9e6) = 8;
      *(byte *)(param_1 + 0x9e5) = *(byte *)(param_1 + 0x9e5) | 0xb;
      *(undefined4 *)(param_1 + 0x9dc) = DAT_00122000;
    }
  }
  if (*(char *)(param_1 + 0x9e1) == '\0') {
    if (*(char *)(param_1 + 0x9e0) == '\0') {
      return;
    }
    FUN_003705a0(uVar4,DAT_0012201c,param_1 + 0x6c);
    return;
  }
  if (*(char *)(param_1 + 0x9e1) == '\x02') {
    uVar4 = 0x800;
  }
  else {
    uVar4 = 0x400;
  }
  FUN_00370378(param_1 + 0xbe,(int)*(short *)(*(int *)(param_1 + 0x124) + 0xbe),uVar4);
  uVar4 = VectorFloatToUnsigned
                    (((*(float *)(param_1 + 0x1ec) - *(float *)(param_1 + 0x1e0)) * DAT_00122018) /
                     *(float *)(param_1 + 0x1ec),3);
  *(char *)(param_1 + 0x9ed) = (char)uVar4;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(*(int *)(param_1 + 0x124) + 0x2c);
  FUN_00366c24(param_1,param_2);
  return;
}
