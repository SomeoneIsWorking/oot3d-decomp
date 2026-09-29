// OoT3D decomp @ 0013fbd8  name=FUN_0013fbd8  size=300

void FUN_0013fbd8(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;

  FUN_003731e0(param_1 + 0x1d4);
  iVar5 = DAT_0013fd08;
  iVar4 = DAT_0013fd04;
  sVar1 = *(short *)(param_1 + 0x25e);
  if (sVar1 < 0xd) {
    if ((sVar1 == 0) || (*(short *)(param_1 + 0x25e) = sVar1 + -1, (short)(sVar1 + -1) == 0)) {
      iVar4 = FUN_0036ae14(param_1 + 0x1d4,0);
      uVar2 = DAT_0013fd1c;
      fVar7 = (float)VectorSignedToFloat(iVar4 * 2,(byte)(in_fpscr >> 0x15) & 3);
      if (iVar4 * 2 < 1) {
        fVar7 = fVar7 * DAT_0013fd14 * DAT_0013fd18 - DAT_0013fd18;
      }
      else {
        fVar7 = DAT_0013fd18 + fVar7 * DAT_0013fd14 * DAT_0013fd18;
      }
      *(short *)(param_1 + 0x25e) = (short)(int)fVar7;
      FUN_00370350(uVar2,param_1 + 0x1d4,0);
      *(undefined4 *)(param_1 + 600) = DAT_0013fd20;
    }
  }
  else {
    iVar3 = FUN_00375a18(param_1 + 0xbc,0x1800,1,DAT_0013fd08,DAT_0013fd04);
    iVar6 = iVar5 - iVar4;
    iVar6 = FUN_00375a18(param_1 + 0x262,~(iVar6 * 2),1,iVar6,iVar4);
    iVar4 = FUN_00375a18(param_1 + 0x264,DAT_0013fd0c,1,iVar4 << 1,iVar4);
    iVar5 = FUN_00375a18(param_1 + 0x266,DAT_0013fd10,1,iVar5);
    if (iVar5 == 0 && ((iVar3 == 0 && iVar6 == 0) && iVar4 == 0)) {
      *(undefined2 *)(param_1 + 0x25e) = 0xc;
    }
  }
  FUN_00366044(param_1);
  return;
}
