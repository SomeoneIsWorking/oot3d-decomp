// OoT3D decomp @ 0048bc78  name=FUN_0048bc78  size=40

uint FUN_0048bc78(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint local_8;

  local_8 = param_4;
  iVar1 = FUN_003043c0(param_1 + 4,&local_8,2);
  if (iVar1 == 0) {
    local_8 = 0x40;
  }
  else {
    local_8 = local_8 & 0xff;
  }
  return local_8;
}
