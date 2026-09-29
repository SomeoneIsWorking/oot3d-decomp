// OoT3D decomp @ 002971b8  name=FUN_002971b8  size=636

void FUN_002971b8(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int local_48 [12];

  bVar4 = false;
  iVar2 = FUN_0036e864(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
  FUN_003510b0(param_1,DAT_00297434);
  local_48[0] = param_1 + 0x234;
  local_48[1] = 2;
  local_48[2] = 0;
  FUN_00372f38(param_1,param_2,param_1 + 0x22c,0,param_1 + 0x230,1);
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar3 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_00297438 + iVar3) != 0)
     ) {
    iVar3 = iVar3 + 0x3a5c;
  }
  else {
    iVar3 = 0;
  }
  FUN_0034e994(param_1 + 0x238,*(undefined4 *)(param_1 + 0x22c),iVar3 + 0x10,0,0xffffffff,0xffffffff
              );
  FUN_0037322c(DAT_0029743c,param_1);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x1a4) = DAT_00297444;
    *(undefined2 *)(param_1 + 0x21c) = 0;
    *(undefined2 *)(param_1 + 0x21e) = 0x26c0;
    *(undefined2 *)(param_1 + 0x220) = 8000;
    *(undefined2 *)(param_1 + 0x222) = 0x3fc0;
    *(undefined2 *)(param_1 + 0x224) = 0x3fc0;
  }
  else {
    bVar4 = (~(*(short *)(param_1 + 0x1c) >> 4) & 3U) == 0;
    if (!bVar4) {
      *(undefined4 *)(param_1 + 0x1a4) = DAT_00297440;
      *(undefined2 *)(param_1 + 0x21c) = 2;
      *(undefined2 *)(param_1 + 0x21e) = 0x3fc0;
      *(undefined2 *)(param_1 + 0x220) = 0x3fc0;
      *(undefined2 *)(param_1 + 0x222) = 0x3fc0;
      *(undefined2 *)(param_1 + 0x224) = 0x3fc0;
      *(undefined2 *)(param_1 + 0x228) = 0xff56;
      *(undefined2 *)(param_1 + 0x218) = 0;
    }
  }
  if ((*(ushort *)(param_1 + 0x1c) & 1) != 0) {
    if (iVar2 != 0) {
      FUN_0036df4c(param_1 + 0x28,DAT_00297448);
      FUN_0036df4c(param_1 + 8,DAT_00297448);
    }
    uVar1 = (undefined2)DAT_0029744c;
    *(undefined2 *)(param_1 + 0xbc) = uVar1;
    *(undefined2 *)(param_1 + 0x14) = uVar1;
    *(undefined2 *)(param_1 + 0x34) = uVar1;
    *(undefined2 *)(param_1 + 0xc0) = 0;
    *(undefined2 *)(param_1 + 0x18) = 0;
    *(undefined2 *)(param_1 + 0x38) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20;
    local_48[0] = 0;
    local_48[1] = 0xffffff00;
    iVar2 = FUN_0036aa20(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                         *(undefined4 *)(param_1 + 0x10),param_2 + 0x208c,param_1,param_2,0xff,0,
                         (int)*(short *)(param_1 + 0x16));
    if (iVar2 == 0) {
      bVar4 = true;
    }
  }
  FUN_00350eb8(param_2,param_1 + 0x1a8);
  FUN_00350d48(param_2,param_1 + 0x1a8,param_1,DAT_00297450,param_1 + 0x1c8);
  FUN_003679d0(*(undefined4 *)(param_1 + 0x28),
               *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0xc4) * *(float *)(param_1 + 0x58),
               *(undefined4 *)(param_1 + 0x30),local_48,param_1 + 0xbc);
  FUN_00371348(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
               *(undefined4 *)(param_1 + 0x5c),local_48,1);
  FUN_00357750(0,param_1 + 0x1a8,local_48);
  FUN_00350d20(param_1 + 0xa0,0,DAT_00297454);
  if (!bVar4) {
    return;
  }
  FUN_00374428(param_1);
  return;
}
