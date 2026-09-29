// OoT3D decomp @ 00495920  name=FUN_00495920  size=68

bool FUN_00495920(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;

  puVar1 = (undefined4 *)FUN_00498e38(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c));
  if (puVar1 != (undefined4 *)0x0) {
    *param_3 = *puVar1;
    uVar2 = FUN_00498e6c(puVar1);
    param_3[1] = uVar2;
    *(undefined1 *)(param_3 + 2) = *(undefined1 *)(puVar1 + 1);
  }
  return puVar1 != (undefined4 *)0x0;
}
