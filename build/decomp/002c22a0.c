// OoT3D decomp @ 002c22a0  name=FUN_002c22a0  size=868

undefined4 FUN_002c22a0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  int local_30;
  float local_2c;
  undefined4 uStack_28;

  iVar7 = DAT_002c2604;
  if (*(int *)(DAT_002c2604 + 0x4c) != 0) {
    iVar5 = FUN_004c4540(param_1);
    if (-1 < iVar5) {
      FUN_0036055c(param_2,param_1,DAT_002c2608,0);
      uVar1 = DAT_002c2614;
      if (DAT_002c260c < *(int *)(param_1 + 0x88)) {
        *(undefined2 *)(param_1 + 0x2238) = 1;
      }
      FUN_00358dfc(uVar1,param_1 + 0x254,param_2,
                   *(undefined4 *)(DAT_002c2610 + *(short *)(param_1 + 0x2238) * 0xc));
      FUN_0036f59c(param_1,DAT_002c2618);
      if (*(char *)(param_1 + 2) == '\x02') {
        FUN_0036f59c(param_1,DAT_002c261c + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4));
        return 1;
      }
      FUN_0036aeb4(param_1 + 0x28);
      return 1;
    }
    if (*(char *)(param_1 + 0x1a9) == '\x02') {
      local_30 = *(int *)(param_1 + 0x28);
      uStack_28 = *(undefined4 *)(param_1 + 0x30);
      local_2c = *(float *)(param_1 + 0x2c) + DAT_002c2620;
      if ((((*(ushort *)(param_1 + 0x90) & 1) != 0) && (*(int *)(param_1 + 0x30) <= DAT_002c2624))
         && (iVar5 = FUN_0034c3b8(DAT_002c2628,param_2 + 0xa98,&local_30), iVar5 == 0)) {
        FUN_0036055c(param_2,param_1,DAT_002c2640,0);
        uVar1 = DAT_002c2644;
        *(undefined2 *)(param_1 + 0x2248) = 1;
        *(undefined4 *)(param_1 + 0x6c) = uVar1;
        uVar2 = DAT_002c2648;
        *(undefined4 *)(param_1 + 0x221c) = uVar1;
        FUN_003604f0(param_1 + 0x254,param_2,uVar2);
        return 1;
      }
      FUN_0037547c(DAT_002c2634,0,4,DAT_002c2630,DAT_002c2630,DAT_002c262c);
    }
  }
  if ((((*(uint *)(param_1 + 0x1710) & 0x400000) != 0) ||
      (iVar5 = FUN_0033100c(param_1), iVar5 == 0)) ||
     ((*(int *)(iVar7 + 0x4c) == 0 &&
      ((*(char *)(param_1 + 2) == '\x02' ||
       ((*(uint *)(*(int *)(param_1 + 0x29c8) + 4) & *DAT_002c2638) == 0)))))) {
    return 0;
  }
  iVar7 = (int)*(char *)((uint)*(byte *)(param_1 + 0x222a) + param_1 + 0x2231);
  if (*(char *)(param_1 + 0x1a9) == '\a') {
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    iVar7 = (int)*(char *)(DAT_002c263c + iVar7);
    *(undefined1 *)(param_1 + 0x2229) = 0;
    goto LAB_002c2570;
  }
  iVar5 = FUN_002d6628(param_1);
  uVar3 = DAT_002c264c;
  if (iVar5 == 0) {
    if (iVar7 < 0) {
      uVar6 = FUN_003518cc(param_1);
      bVar8 = uVar6 == 0;
      if (bVar8) {
        uVar6 = *(uint *)(param_1 + 0x1710);
      }
      if (bVar8 && (uVar6 & uVar3) == 0) {
        iVar7 = 4;
      }
      else {
LAB_002c2518:
        iVar7 = 0;
      }
    }
    else {
      iVar7 = (int)*(char *)(DAT_002c2650 + iVar7);
      if (iVar7 == 0xc) {
        *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x40000000;
        uVar6 = FUN_003518cc(param_1);
        bVar8 = uVar6 == 0;
        if (bVar8) {
          uVar6 = *(uint *)(param_1 + 0x1710);
        }
        if (bVar8 && (uVar6 & uVar3) == 0) goto LAB_002c2518;
      }
    }
    if (*(char *)(param_1 + 0x1a9) == '\x06') {
      iVar7 = 0;
    }
  }
  else {
    iVar7 = 0x18;
  }
  iVar5 = FUN_0035d260(param_1);
  if (iVar5 != 0) {
    iVar7 = iVar7 + 1;
  }
LAB_002c2570:
  FUN_002d64f4(param_2,param_1,iVar7);
  uVar1 = DAT_002c2654;
  if (0x17 < iVar7) {
    *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x20000;
    *(undefined4 *)(param_1 + 0x2240) = uVar1;
    *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x1000;
    if (*(char *)(param_1 + 2) == '\x02') {
      sVar4 = FUN_0033100c(param_1);
      local_30 = (int)sVar4;
      local_2c = 1.4013e-45;
      z_actor_003738d0(*(undefined4 *)(param_1 + 0x2340),*(undefined4 *)(param_1 + 0x2344),
                       *(undefined4 *)(param_1 + 0x2348),param_2 + 0x208c,param_2,0x57,0,0,0);
    }
  }
  return 1;
}
