// OoT3D decomp @ 004972a0  name=FUN_004972a0  size=212

void FUN_004972a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_18;
  undefined auStack_14 [4];
  
  if (*param_1 == 0) {
    iVar1 = FUN_00313ce0(0x58);
    if (iVar1 != 0) {
      uVar2 = FUN_002fe0e0();
      iVar1 = FUN_002fe05c(iVar1,uVar2);
    }
    *param_1 = iVar1;
    puVar3 = (undefined4 *)FUN_002fe0e0();
    local_18 = *puVar3;
    uVar4 = FUN_0030dbd4(auStack_14,&local_18,1,0,0xffffffff,0xffffffff);
    uVar5 = uVar4 >> 0x1b;
    if ((uVar4 & 0x80000000) != 0) {
      uVar5 = uVar5 - 0x20;
    }
    if ((uVar5 != 0xfffffff9 && uVar5 != 0) && uVar5 != 1) {
      FUN_003351b4();
    }
    iVar1 = *param_1;
    *(undefined2 *)(iVar1 + 4) = 0;
    *(undefined2 *)(iVar1 + 6) = 0x20;
  }
  iVar1 = DAT_00497374;
  param_1[1] = DAT_00497374;
  param_1[2] = iVar1;
  param_1[3] = iVar1;
  param_1[4] = iVar1;
  param_1[5] = iVar1;
  param_1[6] = iVar1;
  param_1[0x25] = iVar1;
  param_1[0x26] = 0;
  param_1[0x27] = iVar1;
  return;
}

