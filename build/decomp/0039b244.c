// OoT3D decomp @ 0039b244  name=FUN_0039b244  size=400

void FUN_0039b244(int param_1,int param_2)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fVar7;

  fVar2 = DAT_0039b3dc;
  iVar3 = *(int *)(DAT_0039b3d4 + param_2);
  uVar5 = *(undefined4 *)(iVar3 + 0x2c);
  uVar6 = *(undefined4 *)(iVar3 + 0x30);
  *(undefined4 *)(param_1 + 0xcfc) = *(undefined4 *)(iVar3 + 0x28);
  *(undefined4 *)(param_1 + 0xd00) = uVar5;
  *(undefined4 *)(param_1 + 0xd04) = uVar6;
  iVar3 = *DAT_0039b3d8;
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x1474),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0xcf8) = fVar7 - fVar2;
  FUN_0034c664(param_1,param_1 + 0xce4,(int)(short)(*(short *)(iVar3 + 0x1476) + 0xc),2);
  FUN_00370734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xbbc));
  FUN_003264c8(param_1);
  FUN_0037632c(param_1);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0xc0c);
  uVar5 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = DAT_0039b3e0;
  FUN_00376340(DAT_0039b3ec,DAT_0039b3e8,DAT_0039b3e4,param_2,param_1,7);
  *(undefined4 *)(param_1 + 100) = uVar5;
  iVar4 = FUN_0036bc98(param_1,param_2);
  iVar3 = DAT_0039b3f0;
  if (iVar4 == 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 9;
    if ((*(ushort *)(iVar3 + 0x38) & 8) == 0) {
      if ((*(ushort *)(iVar3 + 0x38) & 4) == 0) {
        *(short *)(param_1 + 0x116) = (short)DAT_0039b3fc;
        FUN_00363cb8(param_1,param_2);
      }
      else {
        *(short *)(param_1 + 0x116) = (short)DAT_0039b3f8;
        FUN_00363cb8(param_1,param_2);
      }
    }
    else {
      *(short *)(param_1 + 0x116) = (short)DAT_0039b3f4;
      FUN_00363cb8(param_1,param_2);
    }
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  FUN_00319f20(param_1,param_2);
  if (bVar1) {
    *(undefined4 *)(param_1 + 0xbbc) = 0x19;
  }
  return;
}
