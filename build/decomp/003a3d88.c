// OoT3D decomp @ 003a3d88  name=FUN_003a3d88  size=356

void FUN_003a3d88(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint in_fpscr;
  float fVar6;

  fVar1 = DAT_003a3ef4;
  iVar2 = *(int *)(DAT_003a3eec + param_2);
  uVar4 = *(undefined4 *)(iVar2 + 0x2c);
  uVar5 = *(undefined4 *)(iVar2 + 0x30);
  *(undefined4 *)(param_1 + 0xcfc) = *(undefined4 *)(iVar2 + 0x28);
  *(undefined4 *)(param_1 + 0xd00) = uVar4;
  *(undefined4 *)(param_1 + 0xd04) = uVar5;
  iVar2 = *DAT_003a3ef0;
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(iVar2 + 0x1474),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0xcf8) = fVar6 - fVar1;
  FUN_0034c664(param_1,param_1 + 0xce4,(int)(short)(*(short *)(iVar2 + 0x1476) + 0xc),4);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  FUN_00370734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xbbc));
  FUN_003264c8(param_1);
  uVar4 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = DAT_003a3ef8;
  FUN_00376340(DAT_003a3f04,DAT_003a3f00,DAT_003a3efc,param_2,param_1,7);
  *(undefined4 *)(param_1 + 100) = uVar4;
  iVar2 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar2 == 5) && (iVar3 = FUN_00346964(param_2), iVar2 = DAT_003a3f08, iVar3 != 0)) {
    if ((*(ushort *)(DAT_003a3f08 + 0x38) & 4) == 0) {
      FUN_003725e0(param_2);
      *(ushort *)(iVar2 + 0x38) = *(ushort *)(iVar2 + 0x38) | 4;
      *(undefined4 *)(param_1 + 0xbbc) = 0x18;
      return;
    }
    uVar4 = FUN_0036ae14(param_1 + 0x1a4,2);
    uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00353020(DAT_003a3f14,DAT_003a3f10,uVar4,DAT_003a3f0c,param_1 + 0x1a4,DAT_003a3f18,2);
    FUN_00370778(param_2);
    *(undefined4 *)(param_1 + 0xbbc) = 0x1a;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff6;
  }
  return;
}
