// OoT3D decomp @ 00130ca0  name=FUN_00130ca0  size=192

void FUN_00130ca0(int param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;

  sVar1 = *(short *)(param_1 + 0x92);
  sVar2 = *(short *)(param_1 + 0xbe);
  sVar3 = FUN_0036bba8(param_2,0x1b);
  *(short *)(param_1 + 0x116) = sVar3;
  if (sVar3 == 0) {
    iVar5 = (int)*(char *)((uint)*(byte *)(DAT_00130d60 + 0x11) + DAT_00130d64);
    if (iVar5 < 10) {
      uVar4 = *(undefined2 *)(DAT_00130d68 + iVar5 * 2);
    }
    else {
      uVar4 = (undefined2)DAT_00130d6c;
    }
    *(undefined2 *)(param_1 + 0x116) = uVar4;
  }
  iVar5 = FUN_0036bc98(param_1,param_2);
  if (iVar5 == 0) {
    if ((*(int *)(param_1 + 0x98) < DAT_00130d74) &&
       ((int)(short)(sVar1 - sVar2) + 0x1fffU <= DAT_00130d78)) {
      FUN_0036bb28(DAT_00130d7c,param_1,param_2);
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x708) = DAT_00130d70;
  }
  return;
}
