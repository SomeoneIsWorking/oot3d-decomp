// OoT3D decomp @ 003f5f00  name=FUN_003f5f00  size=292

void FUN_003f5f00(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  undefined4 uVar7;

  iVar3 = DAT_003f6028;
  uVar1 = ((uint)*(ushort *)(param_1 + 0x1c) << 0x15) >> 0x1d;
  pfVar5 = (float *)(DAT_003f6024 + uVar1 * 4);
  iVar4 = (int)(short)(*(short *)(param_1 + 0x270) + -5);
  iVar2 = UnsignedSaturate(iVar4,8);
  UnsignedDoesSaturate(iVar4,8);
  *(short *)(param_1 + 0x270) = (short)iVar2;
  fVar6 = *(float *)(param_1 + 0x58) + *pfVar5;
  *(float *)(param_1 + 0x58) = fVar6;
  if ((int)fVar6 < iVar3) {
    fVar6 = DAT_003f602c;
  }
  *(float *)(param_1 + 0x58) = fVar6;
  if ((0x50 < iVar2) && (uVar1 < 2 || uVar1 == 4)) {
    FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1c0);
    FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x218);
  }
  uVar7 = DAT_003f6030;
  if ((*(short *)(param_1 + 0x270) < 0xb5) &&
     (uVar7 = DAT_003f6034, 0x3c < *(short *)(param_1 + 0x270))) {
    uVar7 = DAT_003f6038;
  }
  (**(code **)(DAT_003f6040 + uVar1 * 4))
            (uVar7,*(undefined4 *)(DAT_003f603c + uVar1 * 4),param_1,param_2);
  if (0 < *(short *)(param_1 + 0x270)) {
    return;
  }
  if (-1 < (int)*(short *)(param_1 + 0x1c) << 0x19) {
    FUN_00375c10(param_2,(int)*(short *)(param_1 + 0x1c) & 0x3f);
  }
  if (uVar1 == 4) {
    FUN_00372244(param_2 + 0x5fcc,0x1e,DAT_003f6044);
  }
  FUN_00374428(param_1);
  return;
}
