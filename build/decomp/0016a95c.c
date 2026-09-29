// OoT3D decomp @ 0016a95c  name=FUN_0016a95c  size=1084

void FUN_0016a95c(int param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  ushort uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint in_fpscr;
  uint uVar11;
  float fVar12;
  undefined1 auStack_29c [4];
  undefined1 auStack_298 [576];
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined1 local_38;

  iVar10 = *(int *)(DAT_0016aca4 + param_2);
  FUN_00350820(auStack_298,DAT_0016aca8,0x24,0x10);
  FUN_003510b0(param_1,DAT_0016acac);
  *(undefined1 *)(param_1 + 0x1f) = 3;
  fVar4 = DAT_0016acb8;
  uVar9 = DAT_0016acb4;
  *(ushort *)(param_1 + 0xa68) = *(ushort *)(param_1 + 0x1c) >> 8;
  uVar3 = DAT_0016acb0;
  uVar2 = *(ushort *)(param_1 + 0x1c);
  uVar7 = uVar2 & 0xff;
  *(ushort *)(param_1 + 0x1c) = uVar7;
  if ((uVar2 & 0x80) != 0) {
    *(ushort *)(param_1 + 0x1c) = uVar7 | 0xff00;
  }
  FUN_00372d4c(fVar4,uVar3,param_1 + 0xbc,uVar9);
  *(undefined4 *)(param_1 + 0xa4c) = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0xfe;
  *(undefined4 *)(param_1 + 0xa0) = DAT_0016acbc;
  local_52 = 0xff;
  local_53 = 0xff;
  local_54 = 0xff;
  local_51 = 0x40;
  local_48 = 8;
  local_55 = 0xff;
  local_56 = 0xff;
  local_40 = 2;
  local_4a = 0xff;
  local_57 = 0xff;
  local_4b = 0xff;
  local_58 = 0xff;
  local_4c = 0xff;
  local_4e = 0xff;
  local_44 = 0;
  local_4f = 0xff;
  local_49 = 0;
  local_50 = 0xff;
  local_38 = 0x17;
  local_4d = 0;
  FUN_00350660(param_2,param_1 + 0xa80,1,0,0,auStack_29c);
  FUN_00376340(DAT_0016acc4,DAT_0016acc0,DAT_0016acc0,param_2,param_1,0x1d);
  *(undefined2 *)(param_1 + 0xa70) = 0xff;
  *(undefined2 *)(param_1 + 0xb0) = 0x28;
  *(undefined2 *)(param_1 + 0xb2) = 100;
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0xa84,param_1,DAT_0016acc8);
  FUN_00350a98(param_2);
  FUN_00350914(param_2,param_1 + 0xadc,param_1,DAT_0016accc);
  if (*(short *)(param_1 + 0x1c) == -2) {
    FUN_00372f38(param_1,param_2,param_1 + 0xbe0,1,0);
    *(undefined1 *)(param_1 + 0xb7) = 0xc;
    *(undefined1 *)(param_1 + 0x123) = 0x10;
    FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,1,4,param_1 + 0x228,param_1 + 0x638,0x14);
  }
  else {
    FUN_00372f38(param_1,param_2,param_1 + 0xbe0,0,0);
    *(undefined1 *)(param_1 + 0xb7) = 6;
    *(undefined1 *)(param_1 + 0x123) = 0xf;
    FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,4,param_1 + 0x228,param_1 + 0x638,0x14);
    *(undefined2 *)(param_1 + 0xa66) = 0;
  }
  *(undefined1 *)(param_1 + 0x19b) = 4;
  fVar6 = DAT_0016acd8;
  uVar3 = DAT_0016acd4;
  iVar5 = DAT_0016acd0;
  if (-1 < *(short *)(param_1 + 0x1c)) {
    fVar12 = *(float *)(iVar10 + 0x2c) - *(float *)(param_1 + 0x2c);
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar12 < fVar4) << 0x1f;
    uVar11 = uVar1 | (uint)(NAN(fVar12) || NAN(fVar4)) << 0x1c;
    if ((byte)(uVar1 >> 0x1f) != ((byte)(uVar11 >> 0x1c) & 1)) {
      fVar12 = -fVar12;
    }
    if (((int)fVar12 <= DAT_0016add4) &&
       (iVar10 = FUN_0036e864(param_2,(int)*(short *)(param_1 + 0xa68)), iVar10 == 0)) {
      uVar8 = FUN_00373fa4(param_1 + 0x28,0);
      *(undefined2 *)(param_1 + 0xa6a) = uVar8;
      *(undefined2 *)(param_1 + 0xa6c) = uVar8;
      uVar9 = FUN_0036ae14(param_1 + 0x1a4,2);
      uVar9 = VectorSignedToFloat(uVar9,(byte)(uVar11 >> 0x15) & 3);
      FUN_00375c08(fVar4,uVar3,uVar9,fVar4,param_1 + 0x1a4,2,0);
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x84) + fVar6;
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
      *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
      *(undefined1 *)(param_1 + 0xd0) = 0;
      *(undefined2 *)(param_1 + 0xa70) = 0;
      *(undefined4 *)(param_1 + 0xa48) = 0;
      *(undefined4 *)(param_1 + 0xa5c) = 0xf;
      *(undefined4 *)(param_1 + 0xa50) = 1;
      *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfffd;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      *(undefined4 *)(param_1 + 0xa54) = DAT_0016acdc;
      *(undefined2 *)(iVar5 + 2) = 1;
      return;
    }
    FUN_00374428(param_1);
    return;
  }
  *(undefined2 *)(param_1 + 0xa6a) = 0xffff;
  *(undefined2 *)(param_1 + 0xa6c) = 0xffff;
  *(undefined2 *)(iVar5 + 2) = 0xffff;
  *(undefined4 *)(param_1 + 0xa50) = 1;
  if (*(short *)(param_1 + 0x1c) != -1) {
    FUN_0034eb00(param_1);
    return;
  }
  uVar9 = FUN_0036ae14(param_1 + 0x1a4,2);
  uVar9 = VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(fVar4,uVar3,uVar9,fVar4,param_1 + 0x1a4,2,0);
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x84) + fVar6;
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined2 *)(param_1 + 0xa70) = 0;
  *(undefined4 *)(param_1 + 0xa48) = 0;
  *(undefined4 *)(param_1 + 0xa5c) = 0xf;
  *(undefined4 *)(param_1 + 0xa50) = 1;
  *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfffd;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0xa54) = DAT_0016acdc;
  return;
}
