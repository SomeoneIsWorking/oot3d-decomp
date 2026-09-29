// OoT3D decomp @ 004c6d34  name=FUN_004c6d34  size=616

void FUN_004c6d34(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  float local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;

  *(undefined1 *)(param_2 + 0x2148) = 0;
  local_38 = DAT_004c6f9c;
  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x40;
  local_3c = *(undefined4 *)(param_1 + 0x28);
  uStack_34 = *(undefined4 *)(param_1 + 0x30);
  local_38 = *(float *)(param_1 + 0x2c) - local_38;
  *(uint *)(param_1 + 0x29b8) = *(uint *)(param_1 + 0x29b8) & 0xff7fffff;
  iVar2 = FUN_002ba3b8(&local_30,param_1,&local_3c,param_1 + 0x108,param_2);
  if ((iVar2 != 0) && (uVar3 = FUN_0035fee8(param_2 + 0xa98,local_30,local_2c), (uVar3 & 4) != 0)) {
    *(uint *)(param_1 + 0x29b8) = *(uint *)(param_1 + 0x29b8) | 0x800000;
  }
  iVar4 = FUN_0036b4ec(param_1 + 0x254,param_2);
  iVar2 = DAT_004c6fa0;
  if (iVar4 == 0) {
    if (*(char *)(param_1 + 0x2237) == '\0') {
      uVar5 = DAT_004c6fa4;
      if (*(int *)(param_1 + 0x284) == 0xb5) {
        uVar5 = DAT_004c6fa8;
      }
      iVar4 = FUN_0036b1e0(uVar5,param_1 + 0x254);
      if (iVar4 != 0) {
        FUN_0036f59c(param_1,*(int *)(param_1 + 0x228c) + 0x1000001);
        if (*(int *)(param_1 + 0x284) == 0xb5) {
          uVar1 = 1;
        }
        else {
          uVar1 = 0xff;
        }
        *(undefined1 *)(param_1 + 0x2237) = uVar1;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x2237) < '\x01') {
      uVar5 = *(undefined4 *)(DAT_004c6fa0 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x480);
    }
    else {
      uVar5 = 0xb2;
    }
    FUN_00359aa0(param_1 + 0x254,param_2,uVar5);
  }
  FUN_00370378(param_1 + 0xbe,(int)*(short *)(param_1 + 0x2220),0x800);
  if (*(char *)(param_1 + 0x2237) != '\0') {
    FUN_0036b3f4(DAT_004c6fac,param_1,auStack_40,auStack_44,param_2);
    uVar5 = DAT_004c6fb0;
    if (*(char *)((uint)*(byte *)(param_1 + 0x222a) + param_1 + 0x222b) < '\0') {
      uVar3 = **(uint **)(param_1 + 0x29c8);
      bVar7 = (uVar3 & *DAT_004c6fb8) == 0;
      if (bVar7) {
        uVar3 = (uint)*(byte *)(param_1 + 0xd1);
      }
      bVar8 = bVar7 && uVar3 == 0;
      if (bVar7 && uVar3 == 0) {
        bVar8 = (*(uint *)(param_1 + 0x29b8) & 0x4000000) == 0;
      }
      if (!bVar8) {
        iVar2 = *(int *)(param_1 + 0x2cc);
        *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(iVar2 + 0x40);
        *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(iVar2 + 0x50);
        *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(iVar2 + 0x60);
        FUN_002bc768(param_1,3);
        uVar5 = DAT_004c6fbc;
        if (*(char *)(param_1 + 0x2237) < '\0') {
          uVar5 = DAT_004c6fc0;
        }
        *(undefined4 *)(param_1 + 0x221c) = uVar5;
        FUN_00345394(param_1,param_2);
        *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) & 0xffff9fff;
        return;
      }
    }
    else {
      iVar2 = iVar2 + (uint)*(byte *)(param_1 + 0x1b3) * 4;
      if (*(char *)(param_1 + 0x2237) < '\x01') {
        uVar6 = *(undefined4 *)(iVar2 + 0x498);
      }
      else {
        uVar6 = *(undefined4 *)(iVar2 + 0x450);
      }
      *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | 1;
      FUN_0036055c(param_2,param_1,uVar5,0);
      FUN_00358dfc(DAT_004c6fb4,param_1 + 0x254,param_2,uVar6);
    }
  }
  return;
}
