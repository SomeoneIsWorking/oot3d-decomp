// OoT3D decomp @ 003fc03c  name=FUN_003fc03c  size=72

int FUN_003fc03c(undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00311284(param_1 + 8);
  FUN_0031124c(param_1 + 0x60);
  FUN_0031124c(param_1 + 0x8c);
  *param_1 = 0;
  puVar2 = (undefined4 *)(param_1 + 8);
  *puVar2 = DAT_003fc084;
  FUN_00311284(puVar2);
  iVar1 = FUN_003111e8(puVar2);
  return iVar1 + -8;
}

