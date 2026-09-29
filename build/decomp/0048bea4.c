// OoT3D decomp @ 0048bea4  name=FUN_0048bea4  size=56

bool FUN_0048bea4(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;

  puVar1 = (undefined4 *)FUN_00495740(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c));
  if (puVar1 != (undefined4 *)0x0) {
    *param_3 = *puVar1;
    uVar2 = FUN_00495624();
    param_3[1] = uVar2;
  }
  return puVar1 != (undefined4 *)0x0;
}
