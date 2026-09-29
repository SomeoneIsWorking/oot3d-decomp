// OoT3D decomp @ 0011a364  name=FUN_0011a364  size=432

void FUN_0011a364(int param_1,int param_2)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;

  FUN_003731e0(param_1 + 0x1a4);
  FUN_003705a0(*(undefined4 *)(param_1 + 0x84),DAT_0011a514,param_1 + 0x2c);
  uVar4 = DAT_0011a518;
  FUN_003705a0(*(undefined4 *)(param_1 + 8),DAT_0011a518,param_1 + 0x28);
  FUN_003705a0(*(undefined4 *)(param_1 + 0x10),uVar4,param_1 + 0x30);
  uVar4 = DAT_0011a538;
  puVar2 = DAT_0011a534;
  if (DAT_0011a51c[*(short *)(*(int *)(param_1 + 0x128) + 0x1c)] == 8) {
    iVar3 = *(int *)(DAT_0011a520 + param_2);
    if ((((*(short *)(param_1 + 0x234) == 0) ||
         (sVar1 = *(short *)(param_1 + 0x234) + -1, *(short *)(param_1 + 0x234) = sVar1, sVar1 == 0)
         ) && (*(uint *)(iVar3 + 0x2c) < DAT_0011a524)) &&
       ((*(uint *)(iVar3 + 0x1710) & DAT_0011a528) == 0)) {
      FUN_00367060(param_1);
      return;
    }
  }
  else {
    iVar3 = *(int *)(DAT_0011a52c + 0x30);
    if (*(int *)(iVar3 + 0x22c) == DAT_0011a530) {
      if ((*(short *)(param_1 + 0x1c) == 1) &&
         (iVar5 = (int)((ulonglong)
                        ((longlong)DAT_0011a53c * (longlong)(int)*(short *)(iVar3 + 0x234)) >> 0x20)
         , (int)*(short *)(iVar3 + 0x234) + ((iVar5 >> 3) - (iVar5 >> 0x1f)) * -0x2c == 0x12)) {
        DAT_0011a51c[1] = 1;
        FUN_00374a58(uVar4,param_1 + 0x1a4,puVar2[*(short *)(param_1 + 0x1c)]);
        *(undefined2 *)(param_1 + 0xbc) = 0;
        *(undefined2 *)(param_1 + 0x234) = 0x12;
        uVar4 = DAT_0011a540;
      }
      else {
        if (*(short *)(param_1 + 0x1c) != 0) {
          return;
        }
        iVar3 = (int)*(short *)(iVar3 + 0x234);
        iVar5 = (int)((ulonglong)((longlong)DAT_0011a53c * (longlong)iVar3) >> 0x20);
        if (((iVar5 >> 1) - (iVar5 >> 0x1f)) * -0xb + iVar3 != 8) {
          return;
        }
        if (0xaf < iVar3) {
          return;
        }
        *DAT_0011a51c = 1;
        FUN_00374a58(uVar4,param_1 + 0x1a4,*puVar2);
        *(undefined2 *)(param_1 + 0xbc) = 0;
        *(undefined2 *)(param_1 + 0x234) = 8;
        uVar4 = DAT_0011a544;
      }
      *(undefined4 *)(param_1 + 0x22c) = uVar4;
    }
  }
  return;
}
