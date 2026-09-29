// OoT3D decomp @ 00495dfc  name=FUN_00495dfc  size=424

void FUN_00495dfc(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  uint extraout_r2;
  uint uVar4;
  bool bVar5;
  undefined4 local_2c;
  float local_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [4];
  int local_1c;

  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x20;
  iVar2 = FUN_0036b4ec(param_1 + 0x254);
  FUN_0034cc78(param_1,param_2);
  if (iVar2 == 0) {
    if (((*(uint *)(param_1 + 0x1710) & 0x20000000) == 0) &&
       (iVar2 = FUN_0036b1e0(DAT_00495fac,param_1 + 0x254), iVar2 != 0)) {
      (**(code **)(param_2 + 0x5ba8))(DAT_00495fb0,param_1,param_2);
    }
  }
  else if (*(short *)(param_1 + 0x2238) == 0) {
    if ((*(short *)(param_1 + 0x12a6) == 0) ||
       (sVar1 = *(short *)(param_1 + 0x12a6) + -1, *(short *)(param_1 + 0x12a6) = sVar1, sVar1 == 0)
       ) {
      *(float *)(param_1 + 0x29c) = *(float *)(param_1 + 0x2a0) - DAT_00495fa4;
      *(undefined2 *)(param_1 + 0x2238) = 1;
    }
  }
  else {
    FUN_002c0948(param_1,param_2);
    if (-1 < *(char *)(param_2 + 0x500c)) {
      FUN_0036c520(param_2,param_2 + 0x4c30);
    }
    FUN_0036c5bc(param_2,0);
    FUN_0036ae48();
    FUN_0036c494(param_2,0,DAT_00495fa8);
  }
  local_2c = *(undefined4 *)(param_1 + 0x28);
  uStack_24 = *(undefined4 *)(param_1 + 0x30);
  local_28 = *(float *)(param_1 + 0x10c) + DAT_00495fb4;
  FUN_00316c18(param_2,param_2 + 0xa98,&local_1c,auStack_20,param_1,&local_2c);
  if (local_1c != 0) {
    bVar5 = *(char *)(param_1 + 2) == '\x02';
    uVar4 = extraout_r2;
    if (bVar5) {
      uVar4 = (uint)*(byte *)(param_1 + 0x81);
    }
    if (bVar5 && uVar4 == 0x32) {
      uVar3 = FUN_002c1e10(param_2 + 0xa98);
      FUN_0032b13c(param_2,uVar3);
    }
  }
  return;
}
