// OoT3D decomp @ 0031769c  name=FUN_0031769c  size=92

void FUN_0031769c(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;

  iVar2 = DAT_00317700;
  FUN_0037547c(param_2,param_1,4,
               DAT_00317704 + (uint)*(byte *)(param_3 + (uint)*(byte *)(DAT_00317700 + 4)) * 4 +
               0x9c,DAT_003176fc,DAT_003176f8);
  bVar1 = *(byte *)(iVar2 + 4);
  if (bVar1 < 0xf) {
    *(byte *)(iVar2 + 4) = bVar1 + 1;
  }
  return;
}
