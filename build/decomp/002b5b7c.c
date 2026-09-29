// OoT3D decomp @ 002b5b7c  name=FUN_002b5b7c  size=140

void FUN_002b5b7c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  FUN_00326084(param_2);
  FUN_00376340(DAT_002b5c0c,DAT_002b5c08,DAT_002b5c08,param_2,param_1,5);
  iVar3 = FUN_00370734(param_1 + 0x1a4);
  if (iVar3 != 0) {
    FUN_003411f8(DAT_002b5c10,param_1,10,0);
    uVar2 = DAT_002b5c18;
    uVar1 = DAT_002b5c14;
    *(undefined4 *)(param_1 + 0x554) = 0x13;
    FUN_0037547c(DAT_002b5c1c,param_1 + 0x28,4,uVar2,uVar2,uVar1);
  }
  return;
}
