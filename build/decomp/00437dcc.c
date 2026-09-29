// OoT3D decomp @ 00437dcc  name=FUN_00437dcc  size=164

undefined4 FUN_00437dcc(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint local_20;

  local_20 = param_4;
  iVar1 = FUN_002ea2ec(param_1 + 0x10c);
  uVar2 = FUN_002faca4(param_1 + 0x10c);
  if ((iVar1 != -1) && (uVar2 <= param_3)) {
    local_20 = 0;
    iVar1 = FUN_0030ec4c(param_1 + 0x154,iVar1 >> 0x1f,iVar1,iVar1 >> 0x1f);
    if (iVar1 < 0) {
      FUN_003351b4();
    }
    iVar1 = FUN_0030ecfc(param_1 + 0x154,&local_20,param_2,uVar2);
    if (iVar1 < 0) {
      FUN_003351b4();
    }
    if (local_20 == uVar2) {
      FUN_002ea2e0(param_1 + 0x10c,param_2);
      return 1;
    }
  }
  return 0;
}
