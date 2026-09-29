// OoT3D decomp @ 003ffe10  name=FUN_003ffe10  size=168

uint FUN_003ffe10(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint extraout_r1;
  int iVar4;
  bool bVar5;
  undefined4 local_40;
  uint local_3c;
  int iStack_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;

  iVar3 = DAT_003ffebc;
  uVar2 = DAT_003ffeb8;
  iVar4 = 0;
  iStack_38 = param_1;
  local_34 = param_2;
  local_30 = param_3;
  local_2c = param_4;
  while( true ) {
    if (*(int *)(param_1 + 4) == 0) {
      FUN_003351b4(uVar2,param_2);
    }
    local_40 = *(undefined4 *)(param_1 + 4);
    local_3c = FUN_00400290(&local_40,local_34,local_30,local_2c,param_5,param_6);
    bVar5 = (local_3c & 0x3fc00) == 0x4400;
    uVar1 = local_3c;
    if (bVar5) {
      uVar1 = local_3c & 0x3ff;
    }
    param_2 = local_3c & 0x3fc00;
    if (!bVar5 || uVar1 != 0x188) break;
    if (1 < iVar4) {
      FUN_0030e604(iVar3 * 100);
      param_2 = extraout_r1;
    }
    iVar4 = iVar4 + 1;
    if (2 < iVar4) {
      return local_3c;
    }
  }
  return local_3c;
}
