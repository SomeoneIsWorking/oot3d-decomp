// OoT3D decomp @ 002118a0  name=FUN_002118a0  size=388

void FUN_002118a0(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;

  uVar1 = *(ushort *)(param_1 + 0x1c) & 0x3f;
  *(ushort *)(param_1 + 0x22e) = uVar1;
  bVar4 = uVar1 == 0x3f;
  if (bVar4) {
    uVar1 = 0xffff;
  }
  if (bVar4) {
    *(ushort *)(param_1 + 0x22e) = uVar1;
  }
  fVar5 = (float)VectorUnsignedToFloat
                           (((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x18,
                            (byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x38),(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = DAT_00211a24 + fVar6 * DAT_00211a24;
  *(float *)(param_1 + 0x234) = DAT_00211a24 + fVar5 * DAT_00211a24;
  *(float *)(param_1 + 0x238) = fVar6;
  uVar3 = DAT_00211a28;
  *(undefined1 *)(param_1 + 0x1f) = 4;
  *(undefined4 *)(param_1 + 0x240) = uVar3;
  uVar3 = DAT_00211a2c;
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  FUN_0037572c(uVar3,param_1);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x400;
  *(undefined2 *)(param_1 + 0x230) = *(undefined2 *)(param_1 + 0xbe);
  if ((*(short *)(param_1 + 0x22e) < 0) || (iVar2 = FUN_0036e864(param_2), iVar2 == 0)) {
    uVar3 = DAT_00211a44;
    *(undefined4 *)(param_1 + 0xc4) = DAT_00211a40;
  }
  else {
    *(undefined4 *)(param_1 + 0x140) = DAT_00211a30;
    FUN_00353dd0(param_2,param_1 + 0x244);
    FUN_00353d24(param_2,param_1 + 0x244,param_1,DAT_00211a34);
    if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
       (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
       *(int *)(DAT_00211a38 + iVar2) != 0)) {
      iVar2 = iVar2 + 0x3a5c;
    }
    else {
      iVar2 = 0;
    }
    uVar3 = ObjectBankArchive_00358ef8(iVar2 + 0x10,0);
    FUN_00353e78(iVar2 + 0x10,param_2,param_1 + 0x1a8,uVar3,*(undefined4 *)(param_1 + 0x178),0,0,0,0
                );
    *(undefined4 *)(param_1 + 0x29c) = 0;
    uVar3 = DAT_00211a3c;
  }
  *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  return;
}
