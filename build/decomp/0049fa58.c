// OoT3D decomp @ 0049fa58  name=FUN_0049fa58  size=112

void FUN_0049fa58(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = DAT_0049facc;
  iVar1 = DAT_0049fac8;
  uVar3 = 0;
  uVar4 = *(uint *)(DAT_0049fac8 + 0x14);
  do {
    if (uVar4 == 0) {
      return;
    }
    iVar5 = iVar2 + uVar3 * 0xa0;
    if (param_1 == *(int *)(iVar5 + 0x84)) {
      FUN_004a4158(iVar5,0);
      *(undefined4 *)(iVar5 + 0x84) = 0;
      *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) & ~(1 << (uVar3 & 0xff));
    }
    uVar3 = uVar3 + 1;
    uVar4 = uVar4 >> 1;
  } while ((int)uVar3 < 0x20);
  return;
}

