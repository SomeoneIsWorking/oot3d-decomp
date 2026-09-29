// OoT3D decomp @ 001bcf6c  name=FUN_001bcf6c  size=1728

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001bcf6c(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  ushort uVar12;
  uint in_fpscr;
  float fVar13;

  uVar6 = FUN_00363c10(param_2 + 0x3a58,DAT_001bcfc0);
  iVar7 = FUN_00373074(param_2 + 0x3a58,uVar6);
  if (iVar7 == 0) {
    return;
  }
  *(undefined4 *)(DAT_001bcfc4 + param_1) = uVar6;
  uVar3 = *(ushort *)(param_1 + 0x1c);
  uVar12 = uVar3 & 0xf;
  uVar6 = FUN_0036ae14(param_1 + 0x1a4,0x31);
  uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x10fc) = uVar6;
  uVar6 = FUN_0036ae14(param_1 + 0x1a4,0x36);
  uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x1100) = uVar6;
  uVar6 = FUN_0036ae14(param_1 + 0x1a4,0x35);
  uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x1104) = uVar6;
  uVar6 = FUN_0036ae14(param_1 + 0x1a4,0x18);
  uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x1114) = uVar6;
  uVar6 = FUN_0036ae14(param_1 + 0x1a4,0x1c);
  uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x110c) = uVar6;
  uVar6 = FUN_0036ae14(param_1 + 0x1a4,0x1e);
  uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x1110) = uVar6;
  uVar8 = FUN_0036ae14(param_1 + 0x1a4,0x1a);
  uVar6 = DAT_001bd380;
  iVar7 = param_2 + 0x208c;
  uVar8 = VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x1108) = uVar8;
  if ((uVar3 & 0xf) == 0) {
    FUN_00341188(uVar6,param_1,0x30,0);
    *(undefined2 *)(DAT_001bd388 + param_1) = 4;
    *(undefined2 *)(param_1 + 0xf5c) = 2;
    *(undefined4 *)(param_1 + 0xf60) = 1;
    *(undefined4 *)(param_1 + 0xf64) = 1;
    if (*(int *)(param_1 + 0x100c) == 0) {
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(*DAT_001bd38c + 0x145e),
                                          (byte)(in_fpscr >> 0x15) & 3);
      FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),
                   *(float *)(param_1 + 0x2c) + fVar13 + DAT_001bd390,
                   *(undefined4 *)(param_1 + 0x30),iVar7,param_1,param_2,0x5d);
      *(undefined4 *)(param_1 + 0x100c) = 1;
    }
    *(int *)(param_1 + 0x10e4) = (int)*(short *)(param_1 + 0x38);
    *(undefined2 *)(param_1 + 0xc0) = 0;
    *(undefined2 *)(param_1 + 0x38) = 0;
    return;
  }
  if (uVar12 == 1) {
    FUN_00341188(uVar6,param_1,0x23,0);
    *(undefined4 *)(param_1 + 0xf60) = 7;
    *(undefined4 *)(param_1 + 0xf64) = 1;
    *(undefined2 *)(param_1 + 0xf5c) = 1;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    return;
  }
  if (uVar12 != 3) {
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    return;
  }
  iVar9 = FUN_0036e864(param_2,0x37);
  iVar11 = DAT_001bd384;
  if ((((iVar9 != 0) &&
       (sVar4 = *(short *)(param_2 + 0x104),
       ((sVar4 == 0x4f || sVar4 == 0x1a) || sVar4 == 0xe) || sVar4 == 0xf)) &&
      (((uint)*(ushort *)(param_1 + 0x1c) << 0x10) >> 0x18 == 0x20 &&
       *(char *)(param_2 + 0x5c02) == '\0')) &&
     ((*(short *)(DAT_001bd384 + 100) < 1 || (*(short *)(DAT_001bd384 + 0x62) == 0))))
  goto LAB_001bd3a0;
  iVar9 = FUN_0036e864(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x10) >> 0x18);
  if (iVar9 == 0) {
    sVar4 = *(short *)(param_2 + 0x104);
    cVar2 = *(char *)(param_2 + 0x5c02);
    uVar1 = ((uint)*(ushort *)(param_1 + 0x1c) << 0x10) >> 0x18;
    if (sVar4 == 0xe) {
      if (uVar1 == 0x24) {
joined_r0x001bd190:
        if (cVar2 != '\0') goto LAB_001bd418;
      }
      else if (uVar1 == 0x25) {
joined_r0x001bd2a0:
        if (cVar2 != '\x02') goto LAB_001bd418;
      }
      else if (uVar1 == 0x26) {
joined_r0x001bd2b4:
        if (cVar2 != '\x04') goto LAB_001bd418;
      }
      else if (uVar1 == 0x27) {
        if (cVar2 != '\x06') goto LAB_001bd418;
      }
      else if (uVar1 != 0x28 || cVar2 != '\x06') goto LAB_001bd418;
    }
    else {
      if (sVar4 != 0x1a) {
        if (sVar4 == 0xf) {
          if (uVar1 == 0x29) goto joined_r0x001bd190;
          if (uVar1 == 0x2a && cVar2 == '\0') goto LAB_001bd3a0;
        }
        goto LAB_001bd418;
      }
      if (uVar1 == 0x20) {
        if (((cVar2 != '\0') || (iVar9 = FUN_0036e864(param_2,0x37), iVar9 == 0)) ||
           (sVar4 = *(short *)(param_2 + 0x104),
           ((sVar4 != 0x4f && sVar4 != 0x1a) && sVar4 != 0xe) && sVar4 != 0xf)) goto LAB_001bd418;
      }
      else {
        if (uVar1 == 0x21) goto joined_r0x001bd2a0;
        if (uVar1 == 0x22) goto joined_r0x001bd2b4;
        if (uVar1 != 0x23 || cVar2 != '\x06') goto LAB_001bd418;
      }
    }
LAB_001bd3a0:
    FUN_00341188(uVar6,param_1,0x34,0);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 9;
    if (*(int *)(param_2 + 0x5c20) != 0) {
      pbVar10 = (byte *)(*(int *)(param_2 + 0x5c20) + ((*(ushort *)(param_1 + 0x1c) & 0xf0) >> 1));
      *(byte **)(param_1 + 0x1020) = pbVar10;
      *(uint *)(param_1 + 0x1024) = (uint)*pbVar10;
    }
    uVar5 = FUN_003410a8(param_1);
    *(undefined2 *)(param_1 + 0xbe) = uVar5;
    *(undefined2 *)(param_1 + 0x36) = uVar5;
    *(int *)(param_1 + 0x10e4) = (int)*(short *)(param_1 + 0x38);
    *(undefined2 *)(param_1 + 0xc0) = 0;
    *(undefined2 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0xf60) = 0x1c;
    *(undefined4 *)(param_1 + 0xf64) = 1;
  }
  else {
LAB_001bd418:
    FUN_00374428(param_1);
  }
  iVar9 = FUN_0036e864(param_2,0x37);
  if ((((iVar9 != 0) &&
       (sVar4 = *(short *)(param_2 + 0x104),
       ((sVar4 == 0x4f || sVar4 == 0x1a) || sVar4 == 0xe) || sVar4 == 0xf)) &&
      (((uint)*(ushort *)(param_1 + 0x1c) << 0x10) >> 0x18 == 0x20 &&
       *(char *)(param_2 + 0x5c02) == '\0')) &&
     ((*(short *)(iVar11 + 100) < 1 || (*(short *)(iVar11 + 0x62) == 0)))) {
    FUN_00371e6c(0xb4);
    FUN_0036ec40(0,DAT_001bd648);
    *(undefined2 *)(iVar11 + 0xb2) = 0x140;
    *(undefined1 *)(param_2 + 0x7f40) = 0xd3;
    FUN_00353998(param_2);
    *(undefined1 *)(param_2 + 0x7f40) = 0xd3;
    iVar11 = FUN_0036e864(param_2,0x20);
    if (iVar11 != 0) {
      FUN_0036beac(param_2,0x20);
      z_actor_003738d0(DAT_001bd654,DAT_001bd650,DAT_001bd64c,iVar7,param_2,0x177,0);
    }
    FUN_0036beac(param_2,0x21);
    FUN_0036beac(param_2,0x22);
    FUN_0036beac(param_2,0x23);
    FUN_0036beac(param_2,0x24);
    FUN_0036beac(param_2,0x25);
    FUN_0036beac(param_2,0x26);
    FUN_0036beac(param_2,0x27);
    FUN_0036beac(param_2,0x28);
    FUN_0036beac(param_2,0x29);
    FUN_0036beac(param_2,0x2a);
  }
  if (((uint)*(ushort *)(param_1 + 0x1c) << 0x10) >> 0x18 == 0x20) {
    z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                     *(undefined4 *)(param_1 + 0x30),iVar7,param_2,0x1cc,0);
    iVar11 = FUN_0036e864(param_2,0x37);
    if ((iVar11 != 0) &&
       (sVar4 = *(short *)(param_2 + 0x104),
       ((sVar4 == 0x4f || sVar4 == 0x1a) || sVar4 == 0xe) || sVar4 == 0xf)) {
      z_actor_003738d0(DAT_001bd660,DAT_001bd65c,DAT_001bd658,iVar7,param_2,0x3b,0);
      return;
    }
  }
  return;
}
