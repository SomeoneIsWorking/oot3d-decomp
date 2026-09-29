// OoT3D decomp @ 00466148  name=FUN_00466148  size=40

void FUN_00466148(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;

  puVar1 = (undefined4 *)FUN_0030e1e4();
  uVar2 = puVar1[1];
  *param_1 = *puVar1;
  param_1[1] = uVar2;
  return;
}
