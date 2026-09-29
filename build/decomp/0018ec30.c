// OoT3D decomp @ 0018ec30  name=FUN_0018ec30  size=984

void FUN_0018ec30(int param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;

  uVar3 = *(ushort *)(param_1 + 0x1c);
  *(byte *)(param_1 + 0xa44) = ~(byte)uVar3 & 1;
  uVar1 = ((uint)uVar3 << 0x10) >> 0x1a;
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | 1;
  FUN_00372f38(param_1,param_2,*(undefined4 *)(param_1 + 0x978),1);
  FUN_003510b0(param_1,DAT_0018f008);
  uVar5 = DAT_0018f024;
  uVar4 = DAT_0018f010;
  puVar6 = DAT_0018f00c;
  iVar7 = param_2 + 0x208c;
  if (uVar1 == 5) {
    *DAT_0018f00c = 1;
    *(int *)(puVar6 + 4) = param_1;
    *(undefined4 *)(param_1 + 0x138) = 0;
    *(undefined4 *)(param_1 + 0x13c) = uVar5;
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffa;
    FUN_00375d3c(param_2,iVar7,param_1,6);
    return;
  }
  if (uVar1 == 6) {
    *DAT_0018f00c = 1;
    *(int *)(puVar6 + 4) = param_1;
    *(undefined4 *)(param_1 + 0x138) = 0;
    *(undefined4 *)(param_1 + 0x13c) = uVar4;
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffa;
    FUN_00375d3c(param_2,iVar7,param_1,6);
    uVar4 = DAT_0018f020;
    *(undefined4 *)(param_1 + 0x3c) = DAT_0018f014;
    *(undefined4 *)(param_1 + 0x40) = DAT_0018f018;
    *(undefined4 *)(param_1 + 0x44) = DAT_0018f01c;
    *(undefined4 *)(param_1 + 0x9ac) = uVar4;
    return;
  }
  uVar2 = uVar3 >> 10;
  *(ushort *)(param_1 + 0x1c) = uVar3 >> 10;
  if ((2 < uVar2) && (*(byte *)((uint)*(byte *)(DAT_0018f028 + 0x2d) + DAT_0018f02c) < 0x32)) {
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    return;
  }
  if (uVar2 == 0) {
    if ((*(ushort *)(DAT_0018f030 + 0xe) & 0x200) != 0) {
      *(undefined1 *)(param_1 + 0x123) = 0x41;
      goto LAB_0018edec;
    }
    if ((*(ushort *)(DAT_0018f030 + 10) & 0x40) != 0) {
      *(undefined1 *)(param_1 + 0x123) = 0x40;
      goto LAB_0018edec;
    }
  }
  else if (uVar2 != 1 && uVar2 != 2) {
    *(undefined1 *)(param_1 + 0x123) = 0x36;
    goto LAB_0018edec;
  }
  *(undefined1 *)(param_1 + 0x123) = 0x3f;
LAB_0018edec:
  iStack_60 = param_1 + 0x5d0;
  iStack_64 = param_1 + 0x228;
  uStack_5c = 0x12;
  FUN_0034fe20(param_1,param_2,param_1 + 0x1a4,0);
  if (uVar1 < 3) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffa | 9;
    FUN_00375d3c(param_2,iVar7,param_1,4);
  }
  if (6 < uVar1) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfdffffff;
  }
  if (uVar1 - 1 < 2) {
    *(undefined1 *)(param_1 + 0x1f) = 7;
    *(undefined4 *)(param_1 + 0xa38) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0xa3c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0xa40) = *(undefined4 *)(param_1 + 0x30);
    puVar6 = (undefined1 *)(DAT_0018f034 + (uVar1 - 1) * 8);
    *puVar6 = 1;
    *(int *)(puVar6 + 4) = param_1;
    *(undefined1 *)(param_1 + 0xa1c) = 0;
    *(undefined4 *)(param_1 + 0xa20) = 0;
    *(undefined1 *)(param_1 + 0xd0) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    FUN_003686a8(param_1,9);
    FUN_003729b8(param_1,0x19);
  }
  else {
    *(undefined4 *)(param_1 + 0xa20) = 0xff;
    *(undefined1 *)(param_1 + 0xd0) = 0xff;
    uVar4 = DAT_0018f03c;
    *(undefined4 *)(param_1 + 0xa30) = DAT_0018f038;
    *(short *)(param_1 + 0xa0c) = (short)uVar4;
    FUN_003686a8(param_1,2);
    FUN_003729b8(param_1,2);
  }
  *(undefined4 *)(param_1 + 0xa0) = DAT_0018f040;
  *(undefined1 *)(param_1 + 0xb7) = 10;
  FUN_00353dd0(param_2,param_1 + 0x9b0);
  FUN_0034fb3c(param_2,param_1 + 0x9b0,param_1,DAT_0018f044);
  uVar4 = DAT_0018f050;
  FUN_00372d4c(DAT_0018f050,DAT_0018f048,param_1 + 0xbc,DAT_0018f04c);
  FUN_0037572c(DAT_0018f054,param_1);
  uVar5 = DAT_0018f058;
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  iVar7 = DAT_0018f05c;
  *(undefined4 *)(param_1 + 0x70) = uVar5;
  *(undefined4 *)(param_1 + 100) = uVar4;
  *(undefined2 *)(param_1 + 0xa08) = 0;
  *(undefined2 *)(iVar7 + param_1) = 0;
  *(undefined2 *)(param_1 + 0xa0e) = 0;
  *(undefined1 *)(param_1 + 0xa16) = 0;
  *(undefined1 *)(param_1 + 0xa18) = 3;
  *(undefined1 *)(param_1 + 0xa19) = 3;
  uStack_34 = uVar4;
  uStack_30 = uVar4;
  uStack_2c = DAT_0018f060;
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),(byte)(in_fpscr >> 0x15) & 3);
  FUN_003735e8(fVar8 * DAT_0018f064 * DAT_0018f068,&iStack_64,0);
  FUN_003735ac(param_1 + 0xa24,&iStack_64,&uStack_34);
  *(float *)(param_1 + 0xa24) = *(float *)(param_1 + 0xa24) + *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0xa2c) = *(float *)(param_1 + 0xa2c) + *(float *)(param_1 + 0x30);
  return;
}
