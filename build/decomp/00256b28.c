// OoT3D decomp @ 00256b28  name=FUN_00256b28  size=112

void FUN_00256b28(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;

  if (param_2 == 1) {
    if (((*(uint *)(DAT_00256b98 + 0x9c) & 1) == 0) &&
       (iVar4 = FUN_003679b4(DAT_00256b9c), puVar3 = DAT_00256ba8, uVar2 = DAT_00256ba4,
       uVar1 = DAT_00256ba0, iVar4 != 0)) {
      *DAT_00256ba8 = DAT_00256ba0;
      puVar3[1] = uVar1;
      puVar3[2] = uVar2;
    }
    FUN_003735ac(param_4 + 0x218,param_3,DAT_00256ba8);
    return;
  }
  return;
}
