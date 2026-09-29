// OoT3D decomp @ 003f4b9c  name=FUN_003f4b9c  size=456

void FUN_003f4b9c(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;

  FUN_00370734(param_1 + 0x360);
  uVar2 = DAT_003f4d64;
  cVar1 = *(char *)(param_1 + 0x3ec);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x3a0) = DAT_003f4d64;
    uVar5 = (undefined2)DAT_003f4d90;
    *(undefined4 *)(param_1 + 0x39c) = uVar2;
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        *(undefined4 *)(param_1 + 0x3a0) = DAT_003f4d68;
        *(undefined2 *)(param_1 + 0x116) = 0x250;
      }
      goto LAB_003f4be8;
    }
    uVar5 = (undefined2)DAT_003f4d94;
    *(undefined4 *)(param_1 + 0x3a0) = DAT_003f4d64;
    *(undefined4 *)(param_1 + 0x39c) = uVar2;
  }
  *(undefined2 *)(param_1 + 0x116) = uVar5;
LAB_003f4be8:
  iVar3 = DAT_003f4d6c;
  if ((*(uint *)(DAT_003f4d6c + 0x3d4) & 2) == 0) {
    if ((*(uint *)(DAT_003f4d6c + -0xf44) & *(uint *)(DAT_003f4d70 + 0x48)) == 0) {
      uVar5 = (undefined2)DAT_003f4d74;
    }
    else {
      uVar5 = 0x1b0;
    }
    *(undefined2 *)(param_1 + 0x116) = uVar5;
  }
  iVar4 = FUN_0036f2f8(param_1,0x3000,param_2);
  if ((((int)*(float *)(param_1 + 0x98) < DAT_003f4d78) &&
      ((int)ABS(*(float *)(param_1 + 0x9c)) < DAT_003f4d7c)) && (iVar4 != 0)) {
    if ((*(uint *)(iVar3 + 0x3d4) & 2) == 0) {
      FUN_0036bb28(param_1,param_2);
    }
    else {
      iVar4 = *(int *)(param_2 + 0x20ac);
      if ((((DAT_003f4d88 & *(uint *)(iVar4 + 0x1710)) == 0) &&
          ((*(uint *)(iVar4 + 0x1710) & DAT_003f4d8c) == 0)) &&
         (*(float *)(param_1 + 0x98) < DAT_003f4d80 &&
          ABS(*(float *)(param_1 + 0x9c)) < DAT_003f4d84)) {
        iVar6 = (int)(short)(*(short *)(param_1 + 0x92) - *(short *)(iVar4 + 0xbe));
        if (iVar6 < 0) {
          iVar6 = -iVar6;
        }
        if ((int)(uint)*(ushort *)(iVar4 + 0x12ae) < iVar6) {
          *(int *)(iVar4 + 0x1744) = param_1;
        }
      }
    }
  }
  else if ((*(int *)(param_2 + 0x2134) == param_1) && ((*(uint *)(iVar3 + 0x3d4) & 2) != 0)) {
    *(int *)(*(int *)(param_2 + 0x20ac) + 0x1744) = param_1;
  }
  if (*(char *)(param_1 + 0x3ed) != '\0') {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_003f4d98;
  }
  iVar4 = FUN_0036bc98(param_1,param_2);
  if (iVar4 != 0) {
    *(uint *)(iVar3 + 0x3d4) = *(uint *)(iVar3 + 0x3d4) | 2;
  }
  return;
}
