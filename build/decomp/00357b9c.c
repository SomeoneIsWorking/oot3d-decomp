// OoT3D decomp @ 00357b9c  name=FUN_00357b9c  size=404

void FUN_00357b9c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  uint in_fpscr;

  if (*(char *)(param_1 + 0x1a4) == '\x11') {
    return;
  }
  iVar3 = FUN_00342068(param_1);
  if (iVar3 != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0xe58);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0xe5c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0xe60);
  uVar2 = *(undefined2 *)(DAT_00357d30 + param_1);
  *(undefined2 *)(param_1 + 0xbe) = uVar2;
  *(undefined2 *)(param_1 + 0x36) = uVar2;
  uVar4 = *(uint *)(param_1 + 0xe54);
  *(uint *)(param_1 + 0xe54) = uVar4 | 0x4000;
  bVar6 = *(int *)(param_1 + 0xe70) == 0;
  cVar1 = '\0';
  if (!bVar6) {
    cVar1 = *(char *)(param_1 + 0x1a4);
  }
  if (bVar6 || cVar1 == '\v') {
    return;
  }
  if ((uVar4 & 4) != 0) {
    *(uint *)(param_1 + 0xe54) = uVar4 & 0xfffffffb | 0x4000;
    uVar5 = DAT_00357d34;
    *(uint *)(param_1 + 0xe40) = *(uint *)(param_1 + 0xe40) & 0xfffffffd;
    *(undefined4 *)(param_1 + 0x70) = uVar5;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x84);
    *(undefined1 *)(param_1 + 0xec4) = 0;
  }
  if (param_3 == 1 || param_3 == 4) {
    uVar4 = *(uint *)(param_1 + 0xe54) | 0x10;
  }
  else {
    if (param_3 != 2 && param_3 != 5) goto LAB_00357c70;
    uVar4 = *(uint *)(param_1 + 0xe54) | 0x20;
  }
  *(uint *)(param_1 + 0xe54) = uVar4;
LAB_00357c70:
  if (param_4 != 1) {
    return;
  }
  *(undefined1 *)(param_1 + 0x1a4) = 0xb;
  *(undefined1 *)(param_1 + 0xe74) = 3;
  *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xfffff7ff;
  *(undefined4 *)(param_1 + 0xe80) = *(undefined4 *)(param_1 + 0xe8c);
  *(undefined4 *)(param_1 + 0xe84) = *(undefined4 *)(param_1 + 0xe90);
  *(undefined4 *)(param_1 + 0xe88) = *(undefined4 *)(param_1 + 0xe94);
  if ((*(uint *)(param_1 + 0xe54) & 0x8000000) != 0) {
    FUN_0037547c(DAT_00357d40,param_1 + 0xe80,4,DAT_00357d3c,DAT_00357d3c,DAT_00357d38);
  }
  iVar3 = DAT_00357d44;
  uVar5 = FUN_0036ae14(param_1 + 0x1c4,
                       *(undefined4 *)
                        (*(int *)(DAT_00357d44 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                        (uint)*(byte *)(param_1 + 0xe74) * 4));
  uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_00357d50,DAT_00357d4c,uVar5,DAT_00357d48,param_1 + 0x1c4,
               *(undefined4 *)
                (*(int *)(iVar3 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                (uint)*(byte *)(param_1 + 0xe74) * 4),2);
  return;
}
