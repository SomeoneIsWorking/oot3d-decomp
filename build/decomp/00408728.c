// OoT3D decomp @ 00408728  name=FUN_00408728  size=96

undefined4 FUN_00408728(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];

  FUN_0030af40(auStack_14,param_1 + 4);
  uVar1 = DAT_00408788;
  FUN_0030af40(auStack_18,param_1 + 4);
  uVar1 = FUN_004081dc(param_1 + 0x10,param_2,uVar1,0);
  FUN_0030aedc(auStack_18);
  FUN_0030aedc(auStack_14);
  return uVar1;
}
