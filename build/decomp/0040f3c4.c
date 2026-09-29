// OoT3D decomp @ 0040f3c4  name=FUN_0040f3c4  size=40

uint FUN_0040f3c4(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint local_8;

  local_8 = param_4;
  iVar1 = FUN_003043c0(param_1 + 4,&local_8,4);
  bVar3 = iVar1 == 0;
  uVar2 = 0;
  if (!bVar3) {
    uVar2 = local_8 & 0xff;
    bVar3 = uVar2 == 0;
  }
  if (!bVar3) {
    uVar2 = 1;
  }
  return uVar2;
}
