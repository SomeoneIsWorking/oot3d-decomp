// OoT3D decomp @ 001239e0  name=FUN_001239e0  size=224

void FUN_001239e0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  iVar3 = FUN_003731e0(param_1 + 0x1a4);
  uVar1 = DAT_00123ac0;
  if (iVar3 != 0) {
    FUN_00373d40(param_1 + 0x1a4,8);
    uVar2 = DAT_00123ac4;
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    *(undefined4 *)(param_1 + 0x7dc) = uVar2;
  }
  FUN_00370378(param_1 + 0x36,(int)(short)(*(short *)(param_1 + 0x92) + -0x8000),0xb6);
  uVar2 = DAT_00123ac8;
  iVar3 = FUN_003736fc(uVar1,DAT_00123ac8,param_1 + 0x1a4);
  if ((((iVar3 == 0) && (iVar3 = FUN_003736fc(DAT_00123acc,uVar2,param_1 + 0x1a4), iVar3 == 0)) &&
      (iVar3 = FUN_003736fc(DAT_00123ad0,uVar2,param_1 + 0x1a4), iVar3 == 0)) &&
     (iVar3 = FUN_003736fc(DAT_00123ad4,uVar2,param_1 + 0x1a4), iVar3 == 0)) {
    return;
  }
  FUN_00375bcc(param_1,DAT_00123ad8);
  return;
}
