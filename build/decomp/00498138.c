// OoT3D decomp @ 00498138  name=FUN_00498138  size=544

void FUN_00498138(int param_1)

{
  char cVar1;
  int iVar2;
  uint extraout_r1;
  uint uVar3;
  uint extraout_r1_00;
  bool bVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  int local_3c [3];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_18;
  uint local_14;

  cVar1 = FUN_002c0ef8(*(undefined4 *)(param_1 + 0x140));
  if (cVar1 == '\0') {
    FUN_002c0ed4(*(undefined4 *)(param_1 + 0x140),&local_14);
    if (local_14 != 0) {
      uVar3 = 0;
      *(uint *)(param_1 + 0x154) = local_14;
      do {
        FUN_004a1c1c(*(undefined4 *)(param_1 + 0x140),uVar3,local_3c);
        if (local_3c[0] == 0) {
          *(undefined4 *)(param_1 + 0x144) = local_28;
          *(undefined4 *)(param_1 + 0x148) = local_24;
          fVar5 = (float)VectorUnsignedToFloat(local_30,(byte)(in_fpscr >> 0x15) & 3);
          fVar6 = (float)VectorUnsignedToFloat(local_2c,(byte)(in_fpscr >> 0x15) & 3);
          *(float *)(param_1 + 0x14c) = fVar5 / fVar6;
          *(char *)(param_1 + 0x150) = (char)local_18;
          *(uint *)(param_1 + 0x154) = uVar3;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < local_14);
      iVar2 = FUN_004a18b4(param_1 + 0x94,*(undefined4 *)(param_1 + 0x144),
                           *(undefined4 *)(param_1 + 0x148),0xc);
      if (iVar2 == 0) {
        FUN_002c1438(*(undefined4 *)(param_1 + 0x140));
        *(undefined4 *)(param_1 + 0x140) = 0;
        FUN_002c12d4(param_1 + 0xc0);
        *(undefined4 *)(param_1 + 0x130) = 0;
        *(undefined4 *)(param_1 + 0x134) = 0;
        *(undefined4 *)(param_1 + 0x138) = 0;
        *(undefined4 *)(param_1 + 0x13c) = 0;
        uVar3 = 0;
        if ((*(uint *)(param_1 + 0x9c) & 0xfffffffe) != 0) {
          FUN_0030d614(*(uint *)(param_1 + 0x9c) & 0xfffffffe);
          *(undefined4 *)(param_1 + 0x9c) = 0;
          uVar3 = extraout_r1_00;
        }
        bVar4 = *(int *)(param_1 + 0xb4) != 0;
        if (bVar4) {
          uVar3 = (uint)*(byte *)(param_1 + 0xbc);
        }
        if (bVar4 && uVar3 != 0) {
          FUN_0034fc68();
        }
        *(undefined4 *)(param_1 + 0xb4) = 0;
        *(undefined4 *)(param_1 + 0xb8) = 0;
        *(undefined1 *)(param_1 + 0xbc) = 0;
        FUN_00306a34(param_1 + 0x16c);
        *(undefined1 *)(param_1 + 8) = 0;
        FUN_003069cc(param_1 + 0x16c);
        return;
      }
      FUN_00306a34(param_1 + 0x16c);
      *(undefined1 *)(param_1 + 8) = 6;
      FUN_003069cc(param_1 + 0x16c);
      FUN_00306a34(param_1 + 0x16c);
      *(undefined1 *)(param_1 + 0xc) = 0;
      FUN_003069cc(param_1 + 0x16c);
      return;
    }
  }
  else {
    if (cVar1 != '\x10' && cVar1 != '\x03') {
      FUN_00306a34(param_1 + 0x16c);
      *(undefined1 *)(param_1 + 8) = 0;
      FUN_003069cc(param_1 + 0x16c);
    }
    FUN_00306a34(param_1 + 0x16c);
    cVar1 = *(char *)(param_1 + 8);
    FUN_003069cc(param_1 + 0x16c);
    if (cVar1 == '\0') {
      FUN_002c1438(*(undefined4 *)(param_1 + 0x140));
      *(undefined4 *)(param_1 + 0x140) = 0;
      FUN_002c12d4(param_1 + 0xc0);
      *(undefined4 *)(param_1 + 0x130) = 0;
      *(undefined4 *)(param_1 + 0x134) = 0;
      *(undefined4 *)(param_1 + 0x138) = 0;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      uVar3 = 0;
      if ((*(uint *)(param_1 + 0x9c) & 0xfffffffe) != 0) {
        FUN_0030d614(*(uint *)(param_1 + 0x9c) & 0xfffffffe);
        *(undefined4 *)(param_1 + 0x9c) = 0;
        uVar3 = extraout_r1;
      }
      bVar4 = *(int *)(param_1 + 0xb4) != 0;
      if (bVar4) {
        uVar3 = (uint)*(byte *)(param_1 + 0xbc);
      }
      if (bVar4 && uVar3 != 0) {
        FUN_0034fc68();
      }
      *(undefined4 *)(param_1 + 0xb4) = 0;
      *(undefined4 *)(param_1 + 0xb8) = 0;
      *(undefined1 *)(param_1 + 0xbc) = 0;
    }
  }
  return;
}
