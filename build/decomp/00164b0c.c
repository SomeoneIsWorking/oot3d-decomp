// OoT3D decomp @ 00164b0c  name=FUN_00164b0c  size=1128

void FUN_00164b0c(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint in_fpscr;
  float extraout_s1;
  float fVar10;
  float fVar11;
  int iStack_290;
  int iStack_28c;
  undefined4 uStack_288;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_2c;

  iVar2 = DAT_00164e68;
  uVar5 = (uint)*(short *)(param_1 + 0x1c);
  if ((((uVar5 & 0xff) == 0) && ((*(ushort *)(DAT_00164e68 + 0xf2) & 0x1000) != 0)) ||
     (((uVar5 & 0xff00) != 0 && (iVar6 = FUN_0036e864(param_2,(uVar5 & 0xff00) >> 8), iVar6 != 0))))
  {
    FUN_00374428(param_1);
    return;
  }
  fVar3 = DAT_00164e74;
  FUN_00372d4c(DAT_00164e74,DAT_00164e6c,param_1 + 0xbc,DAT_00164e70);
  *(undefined1 *)(param_1 + 0x19a) = 1;
  *(undefined1 *)(param_1 + 0xe14) = 0;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar6 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_00164e78 + iVar6) != 0)
     ) {
    iVar6 = iVar6 + 0x3a5c;
  }
  else {
    iVar6 = 0;
  }
  *(int *)(param_1 + 0xdf0) = iVar6 + 0x10;
  uVar7 = ObjectBankArchive_00358ef8(iVar6 + 0x10,0);
  iStack_28c = param_1 + 0x80c;
  iStack_290 = param_1 + 0x228;
  uStack_288 = 0x1d;
  FUN_00353e78(*(undefined4 *)(param_1 + 0xdf0),param_2,param_1 + 0x1a4,uVar7,
               *(undefined4 *)(param_1 + 0x178),10);
  FUN_00350820(&iStack_28c,DAT_00164e7c,0x24,0x10);
  uVar9 = DAT_00164e84;
  uVar7 = DAT_00164e80;
  *(undefined4 *)(param_1 + 0x13c) = DAT_00164e80;
  *(undefined4 *)(param_1 + 0x140) = uVar9;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x400;
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0xe34,param_1,DAT_00164e88);
  FUN_0034f910(param_2);
  FUN_0034f760(param_2,param_1 + 0xf0c,param_1,DAT_00164e8c,param_1 + 0xf2c);
  FUN_00350a98(param_2);
  FUN_00350914(param_2,param_1 + 0xe8c,param_1,DAT_00164e90);
  uVar4 = DAT_00164e98;
  *(undefined4 *)(param_1 + 0xa0) = DAT_00164e94;
  *(undefined1 *)(param_1 + 0xb6) = 0xfe;
  *(undefined1 *)(param_1 + 0xe10) = 0;
  *(undefined1 *)(param_1 + 0xb7) = 0x1e;
  *(undefined4 *)(param_1 + 0x70) = uVar4;
  uVar4 = DAT_00164e9c;
  *(ushort *)(param_1 + 0xe1a) = *(ushort *)(param_1 + 0x1c) >> 8;
  uVar1 = *(ushort *)(param_1 + 0x1c);
  *(ushort *)(param_1 + 0x1c) = uVar1 & 0xff;
  if ((uVar1 & 0xff) == 0) {
    *(undefined1 *)(param_1 + 0xb7) = 0x32;
    *(undefined1 *)(param_1 + 0x123) = 0x34;
  }
  else {
    FUN_0037572c(uVar4,param_1);
    *(undefined1 *)(param_1 + 0x123) = 0x35;
    FUN_00375d3c(param_2,param_2 + 0x208c,param_1,5);
  }
  local_3e = 0xff;
  local_3f = 0xff;
  local_46 = 0xff;
  local_40 = 0xff;
  local_43 = 0xff;
  local_47 = 0xff;
  local_4b = 0xff;
  local_44 = 0xff;
  local_48 = 0xff;
  local_4c = 0xff;
  local_45 = 0x40;
  local_49 = 200;
  local_42 = 0x96;
  local_4a = 0x96;
  local_3c = 8;
  local_3d = 0;
  local_41 = 0;
  local_38 = 0;
  local_34 = 2;
  if (*(short *)(param_1 + 0x1c) == 0) {
    local_2c = 0x14;
  }
  else {
    local_2c = 0x13;
  }
  FUN_00350660(param_2,param_1 + 0xfe4,1,0,0,&iStack_290);
  uVar8 = FUN_0036ae14(param_1 + 0x1a4,0xb);
  fVar10 = extraout_s1;
  if (*(short *)(param_1 + 0x1c) < 2) {
    fVar10 = fVar3;
  }
  fVar11 = (float)VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
  if (1 < *(short *)(param_1 + 0x1c)) {
    fVar10 = fVar11 - DAT_00164ea0;
  }
  FUN_00375c08(fVar3,fVar10,fVar11,fVar3,param_1 + 0x1a4,0xb,2);
  uVar8 = DAT_00164ea4;
  *(float *)(param_1 + 0x6c) = fVar3;
  *(undefined1 *)(param_1 + 0xe0c) = 3;
  *(undefined4 *)(param_1 + 0xe1c) = uVar8;
  if (*(short *)(param_1 + 0xe1a) == 0xff) {
    if (*(short *)(param_1 + 0x1c) == 0) goto LAB_00164ee4;
    iVar6 = FUN_0036cf6c(param_2,(int)*(char *)(DAT_00164fb4 + param_2));
  }
  else {
    iVar6 = FUN_0036e864(param_2);
  }
  if (iVar6 != 0) {
    FUN_00374428(param_1);
  }
  if (*(short *)(param_1 + 0x1c) != 0) {
    return;
  }
LAB_00164ee4:
  uVar8 = DAT_00164fc0;
  if ((*(ushort *)(iVar2 + 0xf2) & 0x800) != 0) {
    *(undefined4 *)(param_1 + 0x13c) = uVar7;
    *(undefined4 *)(param_1 + 0x140) = uVar9;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 5;
    *(ushort *)(iVar2 + 0xf2) = *(ushort *)(iVar2 + 0xf2) | 0x800;
    FUN_0037572c(uVar4,param_1);
    uVar9 = FUN_0036ae14(param_1 + 0x1a4,0xc);
    uVar7 = DAT_00164fc4;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 5;
    uVar9 = VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x6c) = fVar3;
    *(undefined1 *)(param_1 + 0xe0c) = 4;
    FUN_00375c08(fVar3,fVar3,uVar9,uVar7,param_1 + 0x1a4,0xc,0);
    *(undefined4 *)(param_1 + 0xe1c) = DAT_00164fc8;
    FUN_0034f724(param_2);
    return;
  }
  *(undefined4 *)(param_1 + 0x13c) = DAT_00164fb8;
  *(undefined4 *)(param_1 + 0x140) = DAT_00164fbc;
  FUN_0037572c(uVar8,param_1);
  return;
}
